#include "first.h"
#include<fstream>
int main()
 {
     fstream file;
     char ch;
    cloth t[20],f1,ob;
    dusing du[20],f2,ob1;
    material ma[20],f3,ob2;
    int i,x=0,n,a,j,k,l,s,m,b,c,q,g=0,a1,y=0,z=0;
    char inp[20];
    string name="welcome.txt";
    file.open(name.c_str());
    while(file.eof()==0)
    {
      file.get(ch);
      cout<<ch;
    }
    file.close();
    //clrscr();
    for(i=0;;i++)
    {
    a1=ob.function1();
    switch(a1)
    {
    case 1:
    for(i=0;;i++)
     {
       ob.initial_task();
       cin>>a;
       switch(a)
       {
     case 1:
        try
        {
            if(x<=0)
         
         {
           cout<<"How many Categories do you want to Insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              t[x].insert();
              t[x].insert_cl();
               x++;
             }
          }
          else
          throw (-1);
        
        }
        catch(int x)
        {
            cout<<"Can Not Insert,Choose option ADD.";
        }
        
        if(x<=0)
          {
        //    cout<<"YOU CAN NOT INSERT ITEM MORE THAN ONCE"<<'\n'<<'\n';
        //    break;
        //   }
        //  else
        //  {
           cout<<"How many Categories do you want to Insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              t[x].insert();
              t[x].insert_cl();
               x++;
             }
          }
         break;
      case 2:
        if(x<=0)
        {ob.error1();
        break;}
         else
         {
           cout<<"How many categories do you want to Add=";
           cin>>n;
           for(j=0;j<n;j++)
            {
             t[x].add();
             t[x].insert_cl();
              x++;
             }
          break;
          }
       case 3:
        if(x<=0)
        {ob.error1();
        break;}
         else
         {
          for(s=0;s<x;s++)
           {
             t[s].display();
             t[s].display_cl();
           }
           break;
         }
       case 4:
        if(x<=0)
        {ob.error1();
        break;}
        if(x>0)
        {
         cout<<"Enter your Desired Category=";
         cin>>inp;
         for(c=0;c<x;c++)
         {
           b=strcmp(inp,t[c].category);
           if(b==0)
           break;
          }
          if(b==0)
            {t[c].search();
            t[c].display_cl();}
           break;
          }
        case 5:
        if(x<=0)
        {ob.error1();
          break;}
        else
        {
         cout<<"Enter your Desired Category=";
         cin>>inp;
         for(c=0;c<x;c++)
         {
           b=strcmp(t[c].category,inp);
           if(b==0)
           break;
          }
          if(b==0)
            t[c].remove();
           break;
          }
         case 6:
        if(x<=0)
         {ob.error1();
          break;}
        else
        {
          for(z=g;z<x;z++)
          {
            f1=f1+t[z];
            g++;
          }
        for(i=0;i<x;i++)
        t[i].catego_amount();
        f1.total_amount();
        break;
        }
     }
     if(a==0)
     break;
       }
       break;
       case 2:
    for(i=0;;i++)
     {
       ob1.initial_task();
       cin>>a;
       switch(a)
       {
     case 1:
        if(y>0)
         {
           cout<<"YOU CAN NOT INSERT ITEM MORE THAN ONES"<<'\n'<<'\n';
           break;
          }
         else
         {
           cout<<"How many categories do you want to Insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              du[y].insert();
              du[y].insert_du();
               y++;
             }
          }
         break;
      case 2:
        if(y<=0)
        {ob1.error1();
        break;}
         else
         {
           cout<<"How many categories do you want to Add=";
           cin>>n;
           for(j=0;j<n;j++)
            {
             du[y].add();
             du[y].insert_du();
              y++;
             }
          break;
          }
       case 3:
        if(y<=0)
        {ob1.error1();
        break;}
         else
         {
          for(s=0;s<y;s++)
           {
             du[s].display();
             du[s].display_du();
           }
           break;
         }
       case 4:
        if(y<=0)
        {ob.error1();
        break;}
        if(y>0)
        {
         cout<<"Enter your Desired Category=";
         cin>>inp;
         for(c=0;c<y;c++)
         {
           b=strcmp(inp,du[c].category);
           if(b==0)
           break;
          }
          if(b==0)
           { 
            du[c].search();
            du[c].display_du();
           }
           break;
          }
        case 5:
        if(y<=0)
        {ob1.error1();
          break;}
        else
        {
         cout<<"Enter your Desired Category=";
         cin>>inp;
         for(c=0;c<y;c++)
         {
           b=strcmp(du[c].category,inp);
           if(b==0)
           break;
          }
          if(b==0)
            du[c].remove();
           break;
          }
         case 6:
        if(y<=0)
         {ob.error1();
          break;}
        else
        {
          for(z=g;z<x;z++)
          {
            f2=f2+du[z];
            g++;
          }
        for(i=0;i<y;i++)
        du[i].catego_amount();
        f2.total_amount();
        break;
        }
     }
     if(a==0)
     break;
       }
       break;
       case 3:
    for(i=0;;i++)
     {
       ob2.initial_task();
       cin>>a;
       switch(a)
       {
     case 1:
        if(z>0)
         {
           cout<<"YOU CAN NOT INSERT ITEM MORE THAN ONCE"<<'\n'<<'\n';
           break;
          }
         else
         {
           cout<<"How many Category do you want to Insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              ma[z].insert();
              ma[z].insert_ma();
               z++;
             }
          }
         break;
      case 2:
        if(z<=0)
        {ob2.error1();
        break;}
         else
         {
           cout<<"How many categories do you want to Add=";
           cin>>n;
           for(j=0;j<n;j++)
            {
             ma[z].add();
             ma[z].insert_ma();
              z++;
             }
          break;
          }
       case 3:
        if(z<=0)
        {ob2.error1();
        break;}
         else
         {
          for(s=0;s<z;s++)
           {
             ma[s].display();
             ma[s].display_ma();
           }
           break;
         }
       case 4:
        if(z<=0)
        {ob2.error1();
        break;}
        if(z>0)
        {
         cout<<"Enter your Desired category=";
         cin>>inp;
         for(c=0;c<z;c++)
         {
           b=strcmp(inp,ma[c].category);
           if(b==0)
           break;
          }
          if(b==0)
            {ma[c].search();
            ma[s].display_ma();}
           break;
          }
        case 5:
        if(z<=0)
        {ob2.error1();
          break;}
        else
        {
         cout<<"Enter your Desired category=";
         cin>>inp;
         for(c=0;c<z;c++)
         {
           b=strcmp(ma[c].category,inp);
           if(b==0)
           break;
          }
          if(b==0)
            ma[c].remove();
           break;
          }
         case 6:
        if(z<=0)
         {ob2.error1();
          break;}
        else
        {
          for(q=g;q<z;q++)
          {
            f3=f3+ma[q];
            g++;
          }
        for(i=0;i<z;i++)
        ma[i].catego_amount();
        f3.total_amount();
        break;
        }
     }
     if(a==0)
     break;
       }
       break;
      }
      if(a1==0)
      break;
      }
       return 0;
     }
