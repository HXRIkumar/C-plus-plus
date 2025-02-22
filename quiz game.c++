#include<iostream>

using namespace std;

int main(){


   string questions[]={"1.what is the real name of leo?",
                        "2.in which date leo movie released?",
                        "3.who is the director of leo movie?",
                        "4.why the movie was not 1000cr?",
                        "5.what is the name of hynea?"};

   
      int size1=sizeof(questions)/sizeof(questions[0]);
   
   
                        string options[][5]={
        // Question 1
        {
            "a) Parthiban ",
            "b) Aarav",
            "c) Vijay",
            "d) Surya"
        },
        // Question 2
        {
            "a) October 19, 2023 ",
            "b) December 25, 2023",
            "c) January 1, 2024",
            "d) August 15, 2023"
        },
        // Question 3
        {
            "a) Lokesh Kanagaraj ",
            "b) Shankar",
            "c) Mani Ratnam",
            "d) Atlee"
        },
        // Question 4
        {
            "a) Mixed reviews ",
            "b) Lack of promotions",
            "c) Poor CGI",
            "d) Competitor releases"
        },
        // Question 5
        {
            "a) Subramani ",
            "b) Simba",
            "c) Rocky",
            "d) Bruno"
        }
    };
    char answerkey[]={'a','a','a','a','a'};
    int score=0;
    char guess;
    int size2=sizeof(options[1])/sizeof(options[1][0]);
    for(int i=0;i<size1;i++){
        cout<<"***************************************\n";
        cout<<questions[i]<<endl;
        cout<<"***************************************\n";
  
        for(int j=0;j<size2;j++){
            
            cout<<options[i][j]<<"\n";
        }
        cin>>guess;
        guess=tolower(guess);

        if(guess==answerkey[i]){
            cout<<"Correct!"<<"\n";
            score++;
        }
        else{
            cout<<"Wrong and answer is "<<answerkey[i]<<" .\n";
        }
    }
    
    cout<<"************************************************\n";
    cout<<"*                    Result!!                    *\n";
    cout<<"************************************************\n";
    cout<<"Correct Guesses: "<<score<<" \n";
    cout<<"No of questions: "<<size1<<"\n";
    cout<<"Score: "<<(score/(double)size1)*100<<"%\n";

    return 0;
}