#include<iostream>

using namespace std;

 class Rectangle{
     public:

              int length, breath;
    
    void read(){

        count<<"length=";
        cin>>length;
        cout<<"\n Breadth:";
        cin>>bresth;
 }

  void display(){

    int area = 2*length*breadth;
    cout<<" Area:"<<area;
  }

};
   int main(){
       
      Rectangle rect,*ptr;
      ptr = & rect;
      ptr -> read();
      ptr -> display();
      return 0;
      
    }