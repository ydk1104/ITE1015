class account{
	public:
		int id, balance;
};

class accountManager{
	private:
		int N = 0;
		account arr[10];
		long long int MAX = 1000000;
	public:
		void menu(char);
		void create_new_account();
		void deposit(int id, int money);
		void withdraw(int id, int money);
		void transfer(int id_from, int id_to, int money);
		void print_money(int id);
};
