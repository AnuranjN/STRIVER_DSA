#include<iostream>

int main(){
    int age;
    std::cin>>age;

    if(age>=18){
        std::cout<<"Kid is an adult";
    }
    else {
        std::cout<<"Not an adult";
    }
    return 0;
}