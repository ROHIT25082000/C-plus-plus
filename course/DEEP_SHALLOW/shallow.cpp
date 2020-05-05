#include<iostream>
#include<string>

class Shallow
{

private:
    int *data;
public:
    Shallow(int d);
    Shallow(const Shallow &p);
    int get_data_value(){return *data;}
    void set_data_value(int num){*data = num;}
    ~Shallow()
    {
        delete data;
    }
};
Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}
Shallow::Shallow(const Shallow &p)
{
    data = new int;
    data = p.data;
}
void tell_me(Shallow s)
{
    std::cout << s.get_data_value() << std::endl;   

}
int main()
{
    Shallow obj1 = Shallow(10);
    tell_me(obj1);
    Shallow obj2 = Shallow(10); 
    tell_me(obj2);
}

