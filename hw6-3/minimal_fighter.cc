#include"minimal_fighter.h"

MinimalFighter::MinimalFighter():mHp(0),mPower(0),mStatus(Invalid){}
MinimalFighter::MinimalFighter(int _hp, int _power):mHp(_hp),mPower(_power),mStatus(_hp<=0?Dead:Alive){}
int MinimalFighter::hp()const{return mHp;}
int MinimalFighter::power()const{return mPower;}
FighterStatus MinimalFighter::status()const{return mStatus;}

void MinimalFighter::setHp(int _hp){mHp = _hp; if(_hp<=0) mStatus=Dead;};
void MinimalFighter::hit(MinimalFighter* _enemy){
	_enemy->setHp(_enemy->hp()-this->power());
	this->setHp(this->hp()-_enemy->power());
};
void MinimalFighter::attack(MinimalFighter *_target){
	_target->setHp(_target->hp()-this->power());
	this->mPower = 0;
};
void MinimalFighter::fight(MinimalFighter *_enemy){
	while(this->status()!=Dead && _enemy->status()!=Dead){
		hit(_enemy);
	}
};
