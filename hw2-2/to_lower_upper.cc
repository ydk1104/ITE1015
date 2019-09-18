#include<iostream>
#include<string>

int main(void){
        std::string s;
        std::cin >> s;
        for(auto &c : s){
                if(c<='Z') c+=32;
                else c-=32;
        }
        std::cout << s << "\n";
}




