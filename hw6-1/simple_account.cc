#include"simple_account.h"
#include<iostream>

void accountManager::menu(char type){
        if(type=='N') create_new_account();
        if(type=='D' || type=='W'){
                int id,money;
                std::cin >> id >> money;
		if(id >= N){
			std::cout << "Account does not exist\n";
			return;
		}
                if(type=='D') deposit(id, money);
                else withdraw(id, money);
		print_money(id);
	}
        if(type=='T'){
                int id_from, id_to, money;
                std::cin >> id_from >> id_to >> money;
		if(id_from >= N || id_to >= N){
			std::cout << "Account does not exist\n";
			return;
		}
                transfer(id_from, id_to, money);
		if(id_from > id_to){
			int temp = id_from;
			id_from = id_to;
			id_to = temp;
		}
		print_money(id_from); print_money(id_to);
        }
}

void accountManager::create_new_account(){
        if(N>9){
                std::cout << "Too many account\n";
                return;
        }
        std::cout << "Account for user " << N << " registered\n";
        arr[N].id = N;
        arr[N].balance = 0;
        print_money(N);
        N++;
}

void accountManager::deposit(int id, int money){
	std::cout << id << ' ' << money << ' ' << arr[id].balance << ' ' << MAX << '\n';
	if(arr[id].balance + money > MAX){
		std::cout << "Failure: Deposit to user " << id << ' ' << money << '\n';
	}
	else{
		std::cout << "Success: Deposit to user " << id << ' ' << money << '\n';
		arr[id].balance += money;
	}
}
void accountManager::withdraw(int id, int money){
	if(arr[id].balance < money){
		std::cout << "Failure: Withdraw from user " << id << ' ' << money << '\n';
	}
	else{
		std::cout << "Success: Withdraw from user " << id << ' ' << money << '\n';
		arr[id].balance -= money;
	}

}
void accountManager::transfer(int id_from, int id_to, int money){
	if(arr[id_from].balance < money || arr[id_to].balance + money > MAX){
		std::cout << "Failure: Transfer from user " << id_from << " to user " << id_to << ' ' << money << '\n';
	}
	else{
		std::cout << "Success: Transfer from user " << id_from << " to user " << id_to << ' ' << money << '\n';
		arr[id_from].balance -= money;
		arr[id_to].balance += money;
	}
}

void accountManager::print_money(int id){
        std::cout << "Balance of user " << id << ": " << arr[id].balance << "\n";
}

