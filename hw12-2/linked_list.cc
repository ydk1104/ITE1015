#include<iostream>

template<typename T>
class Node{
	public:
		T data;
		Node<T> *next;
		Node():data(0), next(NULL){}
		Node(T data):data(data), next(NULL){}
};

template<typename T>
class List{
	private:
		Node<T> *head;
	public:
		List():head(NULL){}
		List(T* arr, int n_nodes){
			for(int i=n_nodes-1; i>=0; i--) push_front(arr[i]);
		}
		bool isEmpty()const{return head==NULL;}
		void insert_at(int idx, T data){
			if(!idx){
				Node<T> *temp = head;
				head = new Node<T>(data);
				head->next = temp;
				return;
			}
			Node<T>* temp = head;
			while(--idx) temp = temp->next;
			Node<T>* new_node = new Node<T>(data);
			new_node->next = temp->next;
			temp->next = new_node;
		}
		void remove_at(int idx){
			Node<T>* temp = head;
			if(!idx){
				head=head->next;
				delete temp;
				return;
			}
			while(--idx) temp=temp->next;
			Node<T>* delete_node = temp->next;
			temp->next = delete_node->next;
			delete delete_node;
		}
		void pop_back(){
			if(head==NULL) return;
			if(head->next==NULL){
				delete head;
				head = NULL;
				return;
			}
			Node<T>* temp = head;
			while(temp->next->next) temp=temp->next;
			Node<T>* delete_node = temp->next;
			temp->next = delete_node->next;
			delete delete_node;
		}
		void push_back(T val){
			if(head==NULL){
				head = new Node<T>(val);
				return;
			}
			Node<T>* temp = head;
			while(temp->next) temp=temp->next;
			temp->next = new Node<T>(val);
		}
		void pop_front(){return remove_at(0);}
		void push_front(T val){return insert_at(0, val);}
		friend std::ostream& operator <<(std::ostream& out, const List& rhs){
		Node<T> *temp = rhs.head;
		while(temp) std::cout << temp->data << ' ',temp=temp->next;	
		return out;
}
};

int main(){
	int array[5] = {12, 7, 9, 21, 13 };
	List<int> li(array, 5);
	std::cout<<li<<std::endl; //12,7,9,21,13

	li.pop_back();
	std::cout<<li<<std::endl; //12,7,9,21

	li.push_back(15);
	std::cout<<li<<std::endl; //12,7,9,21,15

	li.pop_front();
	std::cout<<li<<std::endl; //7,9,21,15

	li.push_front(8);
	std::cout<<li<<std::endl; //8,7,9,21,15

	li.insert_at(4, 19);
	std::cout<<li<<std::endl; //8,7,9,21,19,15

	li.remove_at(1);
	std::cout<<li<<std::endl; //8,9,21,19,15

	return 0;
}
