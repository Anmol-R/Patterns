//Program to print half pyramid or inverted half pyramid pattern according to users choose.
#include<iostream>
using namespace std;

void Halfpyramid()
{
    int row;
    cout<<"Enter the number of rows:-";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        { //chutiye saale
            cout<<"* ";
          
        }
        cout<<endl;
    }
}

void Inverted_halfpyramid()
{
    int row;
    cout<<"Enter the number of rows:-";
    cin>>row;
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
          
        }
        cout<<endl;
    }
}

int main()
{
    int choose;
    cout<<"1.Half Pyramid \n2.Inverted Half Pyramid"<<endl<<"Select your choose from above:";
    cin>>choose;
    if(choose==1)
      Halfpyramid();
    else if(choose==2)
      Inverted_halfpyramid();
    else 
      cout<<"Invalid choose , try again.";

}
