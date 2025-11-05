#include "duck.h"

/* TODO */
void Duck::performFly(){
    this->flyBehavior->fly();
}
/* TODO */
void Duck::performQuack(){
    this->quackBehavior->quack();
}
/* TODO */
void Duck::setFlyBehavior(FlyBehavior* fb){
    if(this->flyBehavior){
        delete this->flyBehavior;
    }
    this->flyBehavior = fb;
}
/* TODO */
void Duck::setQuackBehavior(QuackBehavior* qb){
    if(this->quackBehavior){
        delete this->quackBehavior;
    }
    this->quackBehavior = qb;    
}


/* TODO */
MallardDuck::MallardDuck() : Duck(new FlyWithWings,new Quack){}
/* TODO */
RedheadDuck::RedheadDuck() : Duck(new FlyWithWings,new Quack) {}
/* TODO */
RubberDuck::RubberDuck() : Duck(new FlyNoWay, new Squeak){}
/* TODO */
DecoyDuck::DecoyDuck() : Duck(new FlyNoWay, new MuteQuack){}
/* TODO */
ModelDuck::ModelDuck() : Duck(new FlyNoWay, new MuteQuack){}