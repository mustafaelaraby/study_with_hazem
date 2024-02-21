#include <iostream>
#include <string>

enum STATE {
    FRESH,
    OLD
};

enum COLOR{
    WHITE,
    RED,
    YELLOW,
    BLUE,
    ORANGE
};

class Fruit
{
    COLOR color;
    std::string name;
    std::string shape;
    STATE state;

public:
    Fruit(COLOR color, std::string name, std::string shape, STATE state)
    {
        this->color = color;
        this->name = name;
        this->shape = shape;
        this->state = state;
    }   

    virtual COLOR getColor()const
    {
        return color;
    }

    virtual std::string getName()const
    {
        return name;
    }

    virtual std::string getShape()const
    {
        return shape;
    }

    virtual STATE getState()const
    {
        return state;
    }

    virtual void setColor(COLOR color)
    {
        this->color = color;
    }

    virtual void setName(std::string name)
    {
        this->name = name;
    }

    virtual void setShape(std::string shape)
    {
        this->shape = shape;
    }

    virtual void setState(STATE state)
    {
        this->state = state;
    }

    virtual std::string taste()=0;
};

class Banana : public Fruit
{

public:
    Banana():Fruit(YELLOW,"BANANA","CURVY",FRESH){}

    std::string taste(){
        return "Banana taste!";
    }
};

class Apple : public Fruit
{

public:
    Apple():Fruit(RED,"APPLE","ROUNDED",OLD){}

    std::string taste(){
        return "Apple taste!";
    }
};




void print_fruit(Fruit* pfruit)
{
    std::cout << "Color: " << pfruit->getColor() << " Name: " << pfruit->getName()
                           << " Shape: " << pfruit->getShape() << " State: " << pfruit->getState()
                           << " Taste: " << pfruit->taste() << std::endl; 
}


int main()
{
    std::cout << "----------------------------------------------------------------------" << std::endl;

    Fruit* p_banana = new Banana();
    Fruit* p_apple = new Apple();
    print_fruit(p_banana);
    print_fruit(p_apple);

    delete p_banana;
    delete p_apple;
    return 0;
}