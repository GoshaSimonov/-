#include <iostream>
#include <string>
using u32 = uint32_t;
class Unit
{
    private:
        std::string name;
        bool live;
    public:
        u32 hp;
        std::string info;
        Unit(): hp(0), name(" Unnamed"), live(true), info(" this is unit;") {}
        u32 GetHp () const {return hp;}
        std::string Get_name() const {return name;}
        bool Status () const {return live;}
        virtual std::string Info() {return info;}
        void Givename(std::string named)
        {
            name = named;
        
        }
        u32 TakeDamage(u32 damage){hp = hp - damage;
            return(hp);}
        ~Unit()
        {
            std::cout << " Rip" << name <<" hp:"<< hp << info <<std::endl;
        }
};
class Undead: public Unit{
    private:

    public:
        using Unit::Unit;
        Undead(){ info = info + " undead;";}
        std::string Info() override {return (info);}
        
};
class Skeleton_dragon: public Undead{
    private:

    public:
        using Undead::Undead;
        Skeleton_dragon(){ info = info + " dead Dragon"; hp = 500;}
};
class Lich: public Undead{
    private:

    public:
        using Undead::Undead;
        Lich(){ info = info + " The great wizard";hp = 100;}
};
class Dullahan: public Undead{
    private:

    public:
        using Undead::Undead;
        Dullahan(){ info = info + " The horseman without head";hp = 400;}
};
class Skeleton: public Undead{
    private:

    public:
        using Undead::Undead;
        Skeleton(){ info = info + " some of his bones didn't be his always";hp = 100;}
};
class Vampire: public Undead{
    private:

    public:
        using Undead::Undead;
        Vampire(){ info = info + " Not like a Patinson";hp = 300;}
};
int main()
{
    Skeleton_dragon Bill;
    Undead Leha;
    Unit Bob;
   Vampire Bun;
   Skeleton Ron;
   Lich Tim;
   Dullahan Tor;
    Tor.TakeDamage(10);
    Bill.TakeDamage(15);
    Ron.TakeDamage(50);
}