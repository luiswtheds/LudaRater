#include <iostream>
#include <string>
#include <stdlib.h>

int rater(std::string &name);
int main(){
   std::string name;
   char trap;
   char choice;
   int count = 1;
   int total_ratings = 0;
   std::string user_name;

   std::cout<<"Welcome to the Luda Rater! Now on CPP!!\n";
   std::cout<<"***************************************\n";

   std::cout<<"Before we begin, what is your name?: ";
   std::getline(std::cin>>std::ws, user_name);

   int user_rating = rater(user_name);

   std::cout<<"Hello, "<<user_name<<". Just so you know, you're a "<<user_rating<<". ";



   if(user_rating<7){
      std::cout<<"Since you're that low, ur opinion doesn't really matter LOL!\n";
   }
   else{
      std::cout<<"You're fine enough to rate other people.\n";
   }



   do{
      std::cout<<"\nEnter the first name of the person you want to be rated: ";
      std::getline(std::cin>>std::ws, name);

      if(name!=user_name && name!="lisa"&& name!="Lisa"){
         std::cout<<"Are you sure you want to see what "<<name<<" is on a scale from 1-10?(y/n): ";
         std::cin>>trap;


         int nos = 1;
         while(trap != 'y' && trap!='Y' && nos<5){
            std::cout<<"Are you sure? Scaredyyy catt alertt! Say yes! (y/n): ";
            std::cin>>trap;
            nos++;
         }

         if(nos==5){
            std::cout<<"Alright "<<user_name<<". I'm tired of your shit. I'm gonna rate "<<name<<" anyways.\n";
            nos=0;
         }

         std::cout<<'\n'<<name<<" is definitely a "<<rater(name)<<". No question about it!\n";
      }
      else if(name=="lisa"||name=="Lisa"){
         std::cout<<"WOOF! WOOF! *starts growling aggresively at you in a strange way*\n";
      }
      else{
         std::cout<<"I already told you! You are a "<<user_rating<<"!. It's not changing!\n";
      }
      

      if(name=="arc1720 professor"){
         std::cout<<"Man fuck that goofy ass, shitty ass, ass ass, class!\n";
      }
      else if(name=="nadia" || name=="Nadia"){
         std::cout<<"Baddest girl ever fr...\n";
      }
      
      if(count==5){
         total_ratings+=count;

         std::cout<<"Damn you've rated "<<total_ratings<<" times! Shallow but keep going if you want!\n";

         count = 0;
      }      

      std::cout<<"\nWould you like to continue rating?(y/n): ";
      std::cin>>choice;

      if(choice=='n'||choice=='N'){
         std::cout<<"\nThanks for using the Luda Rater revamped for CPP! See ya next time!";
         break;
      }
      count++;
   }while(true);
}
int rater(std::string &name){
   srand(time(NULL));
   int add = rand() % 4 + 3;

   int rating = name.length()/2+add;;

   if(name == "Luis" || name == "luis" || name == "nadia" || name == "Nadia"){
      return 10;
   }
   if(name=="arc1720 professor"){
      return 0;
   }
   if(rating>10){
      return 7;
   }
   return rating;
}