#include<iostream>
using namespace std;
int main()
{cout<<"     enter your name ";
 char name[30];cin>>name;
 cout<<"welcome, "<<name<<" excited~ "<<endl;
 cout<<"\n1will begin with indian quiz ";
 cout<<"\n2 if your score is above required you'll grade up to computers quiz "; 
 cout<<"\n3 wooh hooh then will see geography quiz "; 

int score=0;
 cout<<"\ncapital of telangana and andrapradesh is....a)hyderabad     b)agartala \n"; char choose;cout<<name<<"   \nonly press a or b "; 
cin>>choose;
 if(choose=='a'||choose=='b')
        {choose=='a'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
        
else{cout<<"\ntry again  ";char again;cin>>again; 
    if(again=='a'||again=='b')
        {again=='a'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
 else
  cout<<"\ncan't be rewarded for this question";  }             
 cout<<"\ncapital of mizoram     a) aizwal     b)shilong";   
    char choose2;cout<<" \nonly press a or b  ";
cin>>choose2;
 if(choose2=='a'||choose2=='b')
        {choose2=='a'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
        
else{cout<<"\ntry again  ";char again2;cin>>again2; 
    if(again2=='a'||again2=='b')
        {again2=='a'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
 else
  cout<<"\ncan't be rewarded for this question";        }       
    
  cout<<"\ncapital of tripura    a) aizwal     b)agartala";   
    char choose3;cout<<" \nonly press a or b  ";
cin>>choose3;
 if(choose3=='a'||choose3=='b')
        {choose3=='b'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
        
else{cout<<"\ntry again  ";char again3;cin>>again3; 
    if(again3=='a'||again3=='b')
        {again3=='b'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
 else
  cout<<"\ncan't be rewarded for this question";    }           
     
  if(score>=12)
       { cout<<"\n||cool||"<<endl;
        cout<<name<<" \n\n\ncongrats lets check your computers you ready....\n\n\n";
        cout<<"\n father of c language is....a)dennis ritchie    b)john stuart.\n"; char choose4;cout<<name<<"   \nonly press a or b "; 
cin>>choose4;
 if(choose4=='a'||choose4=='b')
        {choose4=='a'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
        
else{cout<<"\ntry again  ";char again4;cin>>again4; 
    if(again4=='a'||again4=='b')
        {again4=='a'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
 else
  cout<<"\ncan't be rewarded for this question";  }             
 cout<<"\n father of c++     a) bajarne     b)james";   
    char choose5;cout<<" \nonly press a or b  ";
cin>>choose5;
 if(choose5=='a'||choose5=='b')
        {choose5=='a'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
        
else{cout<<"\ntry again  ";char again5;cin>>again5; 
    if(again5=='a'||again5=='b')
        {again5=='a'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
 else
  cout<<"\ncan't be rewarded for this question";        }       
    
  cout<<"\n oracle is under    a)google     b)microsoft";   
    char choose6;cout<<" \nonly press a or b  ";
cin>>choose6;
 if(choose6=='a'||choose6=='b')
        {choose6=='b'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
        
else{cout<<"\ntry again  ";char again6;cin>>again6; 
    if(again6=='a'||again6=='b')
        {again6=='b'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
 else
  cout<<"\ncan't be rewarded for this question";    }     
        if(score>=24)   {
           cout<<"\n\n"<<name<<"  \n well done lets check your geography.\n\n\n"; 
            
            
                cout<<"\n The Paithan (Jayakwadi) Hydro-electric project, completed with the help of Japan, is on the river.  ....a)godavari   b) ganga."; char choose7;cout<<name<<"   \nonly press a or b "; 
cin>>choose7;
 if(choose7=='a'||choose7=='b')
        {choose7=='a'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
        
else{cout<<"\ntry again  ";char again7;cin>>again7; 
    if(again7=='a'||again7=='b')
        {again7=='a'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
 else
  cout<<"\ncan't be rewarded for this question";  }             
 cout<<"\n  The percentage of irrigated land in India is about.  a) 35    b)43";   
    char choose8;cout<<" \nonly press a or b  ";
cin>>choose8;
 if(choose8=='a'||choose8=='b')
        {choose8=='a'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
        
else{cout<<"\ntry again  ";char again8;cin>>again8; 
    if(again8=='a'||again8=='b')
        {again8=='a'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
 else
  cout<<"\ncan't be rewarded for this question";        }       
    
  cout<<"\n  The Yarlung Zangbo River, in India, is known as       a)mahanadi    b)bhramputra";   
    char choose9;cout<<" \nonly press a or b  ";
cin>>choose9;
 if(choose9=='a'||choose9=='b')
        {choose9=='b'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
        
else{cout<<"\ntry again  ";char again9;cin>>again9; 
    if(again9=='a'||again9=='b')
        {again9=='b'?score=score+5:score=score-1;
            cout<<"\nyour current status is  "<<score;}
 else
  cout<<"\ncan't be rewarded for this question";    }    
        
      
    if (score>=36)      
      cout<<"\n\nyou\n were\n excellent. ";
            else
            cout<<"\n \nwell \nplayed."; 
            
        
        
        
        
        
        
        
        
        
        
        
        
          
            
        }   
        else
        cout<<"\nlearn\n \nand\n come\n back.";
        
        
    
    
    
    
    
    
    
    
    }
        else
        cout<<"\n\n||go you need to learn.||";

    
     
    
    
    
  return 0;}