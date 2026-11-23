#include <iostream>
#include <string>
using namespace std;

class User {
public : 
    virtual void IncreaseHP(int inc_hp) = 0 ;
    virtual void DecreaseHP(int dec_hp) = 0 ; 
    virtual int GetHP() = 0 ; 
    virtual void IncreaseItem() = 0 ; 
    virtual int GetItemCount() = 0 ; 
    virtual void doAttack() = 0 ; 

    virtual ~User() {}
};

// User 클래스를 상속받는 Magician과 Warrior클래스 만들기
class Magician : public User {
private :
    int hp ;
    int itemCnt;

public :
    Magician() ;
    void IncreaseHP(int inc_hp) override ;
    void DecreaseHP(int dec_hp) override ;
    int GetHP() override;
    void IncreaseItem() override;
    int GetItemCount() override;
    void doAttack() override;
};

class Warrior : public User {
private :
    int hp ;
    int itemCnt;

public :
    Warrior() ; 
    void IncreaseHP(int inc_hp) override;
    void DecreaseHP(int dec_hp) override ; 
    int GetHP() override ;
    void IncreaseItem() override ;
    int GetItemCount() override ; 
    void doAttack() override ; 
};

ostream& operator<<(ostream& os, User& user);