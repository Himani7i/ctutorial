#include <iostream>
#include <string>
using namespace std;

class binary
{
    private:
    string s;
    void chk_bin(void);
    public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};
void binary:: read(void)
{
    cout<<"Enter the number:"<<s<<endl;
    cin>>s;
}
void  binary :: chk_bin(void)
{
    for(int i=0 ; i < s.length() ; i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format";
            exit(0); 
        }
    }
}
void binary :: ones_compliment(void)
{
    chk_bin();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
        else
        {
            s.at(i)='1';
        }
    }
}
void binary :: display(void)
{
    cout<<"displaying your binary number:"<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}



#include <iostream>
#include <string>
using namespace std;
class Employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a1,int b1,int c1);
    void getData()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }

};
void Employee :: setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    Employee sam;
    sam.d=23;
    sam.e=69;
    sam.setData(1,2,3);
    sam.getData();
    return 0;
}

 #include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;//static data member
    public:
    void setdata(void)
    {
        cout<<"Enter id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void)
    {
        cout<<"The id of this employee is "<<id<<" and this employee number is:"<<count<<endl;
    }
    static void getcount(void)//static member function
    {
        cout<<"The value of count is:"<<count<<endl;//returns a static member
    }

};
int employee :: count;// a static keyword
int main()
{
    employee samidha,mehak,himani;
    samidha.setdata();
    samidha.getdata();
    employee::getcount();//static member function

    mehak.setdata();
    mehak.getdata();
    employee::getcount();

    himani.setdata();
    himani.getdata();
    employee::getcount(); 
    
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
class shop
{
    int id[100];
    int price[100];
    int counter;
    public:
    void item_counter(void)
    {
        counter=0;
    }
    void setdata(void);
    void displaysum(void);
    void remove(void);
    void displayitem(void);
};
void shop :: setdata(void)
{
    cout<<"Enter id of your item no. :"<<counter+1<<endl;
    cin>>id[counter];
    cout<<"Enter price of your item:"<<endl;
    cin>>price[counter];
    counter++;
}
void shop :: displaysum(void)
{
    float sum=0;
    for(int i=0;i<counter;i++)
    {
        sum=sum+price[i];
    }
    cout<<"\n Total value="<<sum<<endl;
}
void shop :: remove(void)
{
    int x;
    cout<<"Enter item id:";
    cin>>x;
    for (int i=0; i<counter; i++)
    {
        if(id[i]==x)
        {
            for(int j=i;j<counter-1;j++)
            {
                id[j]=id[j+1];
                price[j]=price[j+1];
            }
            counter --;
            break;
        }
    }
}
void shop :: displayitem(void)
{
    cout<<"\nid price\n";
    for(int i=0;i<counter;i++)
    {
        cout<<"\n"<<id[i];
        cout<<" "<<price[i];
    }
    cout<<"\n";
}
int main()
{
    shop dukaan;
    dukaan.item_counter();
    int x;
    do
    {
        cout<<"\n You can do following:"
        <<"Enter appropriate number \n";
        cout<<"\n:Add an item";
        cout<<"\n:Display total value";
        cout<<"\n:Delete an item";
        cout<<"\n:Display all items";
        cout<<"\n:quit";
        cout<<"\n\n What is your option?";
        cin>>x;
        switch(x)
        {
            case 1: dukaan.setdata(); break;
            case 2: dukaan.displaysum(); break;
            case 3: dukaan.remove(); break;
            case 4: dukaan.displayitem(); break;
            case 5: break; 
        }
    } while (x!=5);
    
    return 0;

}
#include<iostream>
using namespace std;
class num
{
    int a,b;
    public:
    void getData()
    {
        cout<<"Enter a:"<<endl;
        cin>>a;
        cout<<"Enter b:"<<endl;
        cin>>b;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    void swap()
    {
       a=a+b;
       b=a-b;
       a=a-b;
    } 
};
int main()
{
    num obj;
    obj.getData();
    cout<<"Before swapping:"<<endl;
    obj.display();
    obj.swap();
    cout<<"After swapping:"<<endl;
    obj.display();
    return 0;
}