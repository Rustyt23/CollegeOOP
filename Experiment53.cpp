//53		An educational institution wishes to maintain a database of its employees. The database is divided into a number of classes whose hierarchical relationships are shown in following figure. The figure also shows the minimum information required for each class. Specify all classes and define functions to create the database and retrieve individual information as and when required.
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class staff
{
           public:
             int code;
             char name[100];
                    public:
          void set_info(char *n,int c)
            {
                     strcpy(name,n);
                     code=c;
                     }
};

class teacher : public staff
{
               protected:
              char sub[100],publication[100];
               public:
               void set_details(char *s,char *p)
               {
                       strcpy(sub,s);strcpy(publication,p);
               }
              void show()
               {
                                            cout<<"name"<<setw(8)<<"code"<<setw(15)<<"subject"<<setw(25)
<<"publication"<<endl<<name<<setw(8)<<code<<setw(25)<<sub<<setw(22)<<publication<<endl;
              }
};

class officer:public staff
{
           char grade[100];
            public:
           void set_details(char *g)
            {
                    strcpy(grade,g);
            }

           void show()
                       {
               cout<<" name "<<setw(15)<<"code"<<setw(15)<<"Category "<<endl
               <<name<<setw(10)<<code<<setw(15)<<grade<<endl;
          }
};
         class typist: public staff
{
          protected:
          float speed;
            public:
            void set_speed(float s)
               {
                       speed=s;
               }
};
class regular:public typist
{
      protected:
      float wage;
       public:
       void set_wage(float w){wage=w;}
       void show()
        {
                cout<<"name"<<setw(16)<<"code"<<setw(15)<<"speed"<<setw(15)
<<"wage"<<endl<<name<<setw(10)<<code<<setw(15)<<speed
<<setw(15)<<wage<<endl;
        }
};
class causal:public typist
{
                      float wage;
            public:
            void set_wage(float w){wage=w;}
            void show()
            {
                           cout<<"name"<<setw(16)<<"code"<<setw(15)<<"speed"<<setw(15)
<<"wage"<<endl<<name<<setw(10)<<code<<setw(15)<<speed
<<setw(15)<<wage<<endl;
          }

};

int main()
{

        teacher t;
               t.set_info("Aatma",420);
             t.set_details("programming with c++"," Tata McGraw Hill");

             officer o;
             o.set_info("Vicky",222);
             o.set_details("First class");

                      regular rt;
               rt.set_info("Vishal",333);
             rt.set_speed(85.5);
             rt.set_wage(15000);

          causal ct;
ct.set_info("Rustyt",333);
ct.set_speed(78.9);
ct.set_wage(10000);
         cout<<"  About teacher: "<<endl;
         t.show();
         cout<<" About officer:"<<endl;
          o.show();
         cout<<" About regular typist :"<<endl;
         rt.show();
         cout<<" About causal typist :"<<endl;
         ct.show();

         return 0;
}