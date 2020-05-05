#include<iostream>
#include<string>

template<class T1,class T2>
class Pair
{
private:
    T1 first;
    T2 second;
public:
    Pair(T1 first,T2 second)
        : first{first},second{second}{
        }  

    T1 getfirst(){return this->first;}
    T2 getsecond(){return this->second;}
    void setfirst(T1 a){this->first = a;}
    void setsecond(T2 b){this->second = b;}
};

int main()
{   
    Pair<int,std::string> *mypair = new Pair<int,std::string>(12,"Riddhi");
    std::cout << "first :" << mypair->getfirst() << std::endl;
    std::cout << "Second :" << mypair->getsecond() << std::endl;    
    Pair<std::string,std::string> *pair_obj = new Pair<std::string,std::string>("Rohit","Vishwakarma");
    std::cout << "First_name : "<< pair_obj->getfirst() << " " << "Last_name :" << pair_obj->getsecond()  << std::endl;
}



