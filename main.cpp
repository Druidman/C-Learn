#include <iostream>
/*
multi
line
comment
xd
*/
int main(){
    //comment
    int val=0,currVal = 0;
    if (std::cin>>currVal){
        int cnt =1;
        while (std::cin>>val){
            
            if (val==currVal){
                ++cnt;

            }
            else{
                std::cout<<currVal<<" occured "<<cnt<<"times"<<std::endl;
                cnt=1;
                currVal=val;
            }
        }
        std::cout<<currVal<<" occuresd "<<cnt<<"times"<<std::endl;
        std::cout<<"siema";
    }
    else{
        std::cout<<"wrong";
    }

    return 0;
}


