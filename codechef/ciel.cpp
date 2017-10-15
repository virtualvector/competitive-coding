#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
//using namespace std;

int main(){

    int a,b;
    std::cin>>a>>b;
    int original_answer=a-b;
    std::string original_answer_string= std::to_string(original_answer);
    int random_digit;
    random_digit=rand()%10;
    std::string ss ;

    if(original_answer<10){
        
        random_digit=rand()%10;
        while(random_digit==original_answer) random_digit=rand()%10;
        std::cout<<random_digit<<std::endl;

    }
    
    else if(original_answer>=10 && original_answer<=99){



    ss=std::string(original_answer_string.begin()+1,original_answer_string.end()); 
    while(std::to_string(random_digit)==ss){
        random_digit=rand()%10;
    }

    //original_answer_string[2]=std::to_string(random_digit);
    std::string final_string =
    std::string(original_answer_string.begin(),original_answer_string.begin()+1)
    +std::to_string(random_digit)+std::string(original_answer_string.begin()+2,original_answer_string.end());
    ;
    std::cout<<final_string<<std::endl;



    }


    else{

    ss=std::string(original_answer_string.begin()+2,original_answer_string.begin()+3); 
    while(std::to_string(random_digit)==ss){
        random_digit=rand()%10;
    }

    //original_answer_string[2]=std::to_string(random_digit);
    std::string final_string =
    std::string(original_answer_string.begin(),original_answer_string.begin()+2)
    +std::to_string(random_digit)+std::string(original_answer_string.begin()+3,original_answer_string.end());
    ;
    std::cout<<final_string<<std::endl;

    }
    
return 0;
}
