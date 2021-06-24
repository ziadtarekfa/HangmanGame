#include <iostream>
#include <string>
#include <ctime>

using namespace std;

const string programming[100]={"variable","float","compiler","integer","program","argument","longlong","array","struct","algorithm","boolean"};
const string scientists[100]={"newton","tesla","adison","einstein"};
const string countries[100]={"Japan","Egypt","Libya","Netherlands","France","Germany","Norway","Cambodia","Niger","Nigeria","Morocco","Russia","Palestine","Bahrain","Lebanon","Hungary",};


const string food[100]={ "breads", "cereals", "rice", "pasta", "noodles","meat", "fish", "poultry", "eggs", "nuts","legumes","grapes","orange","strawberry","mango","banana","tomato","kiwi","avocado","apple",
"lettuce","spinach","broccoli","cucumber","potato","garlic","onion","beans","pizza","apricot","blackberry","cherry","pineapple","guava","watermelon","jujube","kumquat","lemon","lime","olives",
"carrot","cake","cheese","chicken","biscuit","chocolate","pie","soups"
};
struct check
{
    int counterC=0;
    bool z=false;
    int counterW=0;

}c1;

string name(int);
check status(string,char);
void guess(string);
void print();


int main()
{
    srand(time(0));

 char F;
 int cat,lev; //category and level
 string R;   //word name

cout<<"Enter Category"<<endl;
cout<<"1-Programming\t";cout<<"2-Scientists\t"; cout<<"3-Countries\t";cout<<"4-Food"<<endl;
cin>>cat;                         //category
cout<<"Choose Level"<<endl;
cout<<"1.Easy\t   "; cout<<"2.Medium\t"; cout<<"3.Hard"<<endl;
cin>>lev;
int Jump=0;

//EASY
if(lev==1)
{
    cout<<"Easy Level"<<endl;
    for(int i=1;i<=10;i++)
{
    c1.counterC=0;
   c1.counterW=0;
for(int i=1;i++;)
{R=name(cat);
if(R.size()>=5&&R.size()<=7)
break;}
guess (R); //GUESS THE WORD OF SIZE
for(int i=1;i++;)
{ c1.z=false;
print();  //ENTER CHARACTER
cin>>F;

status(R,F);  //CORRECT WALA WRONG
if(c1.counterC==R.size())
{Jump++;
    break;}

if (c1.counterW==7)
{cout<<R<<endl;
        break;}}}}



//MEDIUM
 if(lev==2||Jump==10)

   Jump=0;
   cout<<"Medium Level"<<endl;
{
    for(int i=1;i<=10;i++)

{
    c1.counterC=0;
    c1.counterW=0;
for(int i=1;i++;)
    {    R=name(cat);
        if(R.size()>=7&&R.size()<=9)
            break;
    }
 guess(R);


for(int i=1;i++;)
{c1.z=0;
   print();
    cin>>F;

status(R,F);

    if(c1.counterC==R.size())
        {Jump++;
            break;
        }

    if (c1.counterW==6)

    {cout<<R<<endl;
        break;}





}}
}


 //HARD
if(lev==3||Jump==10)
    cout<<"Hard Level"<<endl;
{
    for(int i=1;i<=10;i++)

{
    c1.counterC=0;
    c1.counterW=0;

for(int i=1;i++;)
    {    R=name(cat);
        if(R.size()>=9)
            break;
    }

    guess(R);


for(int i=1;i++;)
{c1.z=0;
   print();
    cin>>F;

status(R,F);

    if(c1.counterC==R.size())

            break;


    if (c1.counterW==5)

    {cout<<R<<endl;
        break;}





}}
}


return 0;
}

//FUNCTIONS

string name(int cat)
{
    string R;
             if(cat==1)
{R=programming[rand()%12];}
else if(cat==2)
    R=scientists[rand()%5];
else if(cat==3)
    R=countries[rand()%16];
else if(cat==4)
   R=food[rand()%100];
   return R;
}
check status(string R,char F)
{

    for(int i=0;i<R.size();i++)
{if(F==R[i])
    {c1.z=true;
    cout<<"Correct"<<endl;
    c1.counterC++;
    break;}}
     if (c1.z==0)
        {cout<<"Wrong"<<endl;
        c1.counterW++;}
    return c1;


}
void guess(string R)
{
     cout<<"Guess the word of size "<<R.size()<<endl;
}

void print()
{
    cout<<"Enter Character"<<endl;
}














