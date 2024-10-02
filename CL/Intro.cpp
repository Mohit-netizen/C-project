#include<iostream>
using namespace std;

//using namespace std;
//int num=100;
namespace first{
    void show()
{
    cout<<"Akhil";
}
}
namespace Second{
    void show()
{
    cout<<"Akhilesh";
}

}




main()
{
//    int num=10;
//    cout<<::num;
    first::show();
    
} 