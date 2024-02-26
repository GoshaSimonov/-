#include <iostream>
#include <string>
using u32 = uint32_t;
class Unit
{
    private:
        u32 age;
        std::string name;
        bool live;
    public:
        u32 hp;
        std::string info;
        Unit(): age(0), hp(0), name(" Unnamed"), live(true), info(" this is unit;") {}
        u32 GetHp () const {return hp;}
        u32 GetAge () const {return age;}
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


class Being: public Unit{
    private:
        bool live = true;
        u32 years_of_life = 50;
        //u32 age = 0; у всех существ есть возраст, и у живих, и у не живих
    public:
        using Unit::Unit;
        Being(){ info = info + " being;";}
        //std::string Info() override {return info();}
        
};

class Humanoid: public Being{
    private:

    public:
        using Being::Being;
        Humanoid(){ info = info + " humanoid;";}
        //std::string Info() override {return info();}
};

class Human: public Humanoid{
    private:
        u32 years_of_life = 80;
    public:
        using Humanoid::Humanoid;
        Human(){ info = info + " simple human"; hp = 200;}
};
class Krasnolud: public Humanoid{
    private:
        u32 years_of_life = 100;
    public:
        using Humanoid::Humanoid;
        Krasnolud(){ info = info + " Krasnolud (Dwarf)"; hp = 150;}
};
class Elf: public Humanoid{
    private:
        u32 years_of_life = 1000;
    public:
        using Humanoid::Humanoid;
        Elf(){ info = info + " Elf"; hp = 300;}
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
    Human Fin;
    
    Tor.TakeDamage(10);
    Bill.TakeDamage(15);
    Ron.TakeDamage(50);
    Fin.TakeDamage(5);
}
