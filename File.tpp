/**
Ai ecosystem
Project 1
Divya raj
**/
#include<iostream>
#include<vector>
using namespace std ;
struct player {
float accuracy ;
char name[50] ;

};
struct users{
char task_name[50] ;
int scale ;
char subject_name[50];
};
float calculate(int t , int rating , int totalrating){
float b = ((float ) t*rating)/totalrating  ;	
return b ;

}
float percent(int a , int b ){
float d = ((float) a * 100)/b ;
return d ;

}
float calorieburnt(float steps , float weight){
if(weight==60){
return (steps * 0.035)	;		
}	
else if(weight<60){
return ( steps * (0.035-0.00014*(60 - weight )) );

}
else{
return ( steps * (0.035+0.00014*(weight - 60 )) );

}	
}
float bmi(float n , float m ){
float d = ((float)n)/(m*m) ;
return d ;

}
void comment(string&s){
if((s=="hi"|| s =="hello"|| s =="namaste")){
cout<<"hi i am your ar chatbot "<<endl;

}

else if( s == "good morning"){

cout<<"good morning take a cup of tea to start your day "<<endl;		
}	
else if (s=="good evening"){
cout<<"good evening bro"<<endl;

}  
else if(s=="good night"){  
	cout<<"good night sweet dream"<<endl;  
}  
else if ( s== "joke"){  
	cout<<"Syllabus itna bada hota hai"<<endl;

cout<<"ki student sirf index padh ke bol deta hai:"<<endl;

cout<<"Haan haan, ye aata hai "<<endl;

}  
else if (s=="exit"){  
	cout<<"okk buddy see you next time"<<endl;  
}  
else{  
cout<<"sorry i am not programmed for this"<<endl;	  
}

}

int main( ){
cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
cout<<"user manual guide \n";
cout<<"You have to choose multiple option ";
cout<<"press option in any order\n";
cout<<"while writing alphabet if it contain spaces between two alphabet write it with underscore sign \n";
cout<<"for example Anand_raj \n";
cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
int features ;
cout<<"Available Features "<< endl ;
cout<<" 1 . Ai goal optimizer \n" ;
cout<<"2 .  Ai style study sheduler \n";
cout<<"3 .   Ai  wellness assistant  \n" ;
cout<<"4. Ai virtual companion \n";
cin>>features  ;
while(features > 0 ){
int k = features%10 ;
features = features / 10 ;
if(k ==1 ) {
cout<<"Ai goal optimizer feature start"<<endl;
int n ;	
cout<<"Enter the no users involve in this cohort \n" ;
cin>>n ;
vector<player>players(n) ;
for(int i = 0 ; i < n ; i ++){
cout<<"enter player "<< " " << i + 1 << "name "<<endl ;
cin>>players[i].name ;

}
for(int i = 0 ; i < n ; i ++){
cout<<"hello " << " " << players[i].name<<endl ;

int task ;
cout<<"enter the no of task you can complete today \n" ;
cin>>task ;
vector<users>complete(task);
for(int t = 0 ; t< task ; t++){
cout<<"enter task" <<t+1<<"name"<<endl ;
cin>>complete[t].task_name ;

}	
cout<<"scale your task on basis of preference order on range[1 , 5]"<<endl ;
int b = 0 ;
for(int t = 0 ; t< task ; t++){
cout<<"task "<< t +1 <<endl ;
cin>>complete[t].scale ;
b = b + complete[t].scale ;

}	
int hour ;
cout<<"enter hour available to complete all task "<<endl ;
cin>>hour ;	
cout<<"Ai preffered time table "<<endl ;
for(int t = 0 ; t < task ; t++){
cout<<complete[t].task_name<<" " << calculate( hour , complete[t].scale , b) << " "<<"hour" <<endl ;

}
cout<<"how many task do you complete today"<<endl ;
int taskcomplete ;
cin>>taskcomplete ;
players[i].accuracy = percent(taskcomplete, task );
}//user wala bracket
for(int i = 0 ; i < n ; i ++){
for(int j = i +1 ; j<n ; j++){
if(players[i].accuracy <  players[j].accuracy ){
swap(players[i], players[j])  ;

}

}	
}
cout<<"leaderboard"<<endl ;
for(int i = 0 ; i < n ; i ++){
cout<<i+1<<" "<< players[i].name<<" "<<"accuracy"<<" " <<players[i].accuracy <<endl ;

}
}//feature 1 ka bracket
if(k==2){
cout<<"Ai style study sheduler start"<<endl;
int n ;	
cout<<"Enter the no users involve in this cohort \n" ;
cin>>n ;
vector<player>players(n) ;	
for(int i = 0 ; i < n ; i ++){
cout<<"enter player "<< " " << i + 1 << "name "<<endl ;
cin>>players[i].name ;

}	
for(int i = 0 ; i < n ; i ++){
cout<<"hello " << " " << players[i].name<<endl ;
int subject ;
cout<<"enter no of subjects in your academics "<<endl ;
cin>>subject ;
vector<users>details(subject) ;	
cout<<"enter your subject name "<<endl ;
for(int t = 0 ; t < subject ; t ++){
cout<<"subject " <<""<<t+1<<""<<"name"<<endl;cin>>details[t].subject_name ;							
}	
cout<<"enter subject wise difficulty order in range [1 , 5 ] "<<endl ;
int b = 0 ;					
for(int t = 0 ; t < subject ; t ++){
cout<<"for subject "<<""<<t+1 <<endl ;
cin>>details[t].scale ;			
b = b + details[t].scale ;	
}	
int hour ;
cout<<"enter how many hour available for your self study"<<endl;
cin>>hour ;
cout<<"Ai personalized time table for your self study "<<endl ;
for(int t = 0 ; t < subject ; t++){
cout<<details[t] .subject_name<<""<<calculate(hour, details[t].scale , b ) <<endl ;

}
int leftsubject ;
cout<<"how many subject you complete today "<<endl ;
cin>>leftsubject ;
players[i].accuracy = percent(leftsubject, subject)  ;	
if(players[i].accuracy > 85 ){
cout<<"well done keep it up "<<endl ;

}
else if(players[i].accuracy > 70 ){
cout<<"Doing good but need more attention "<<endl ;

}

else{
cout<<"avoid distraction \n"<<endl ;	
}

}//user bracket
for(int i = 0 ; i < n ; i ++){
for(int j = i +1 ; j< n ; j++){	
if(players[i].accuracy < players[j].accuracy){
swap(players[i] , players[j] ) ;				
}	
}	
}
cout<<"leaderboard "<<endl ;
for(int i = 0 ; i < n ; i ++ ){
cout<<i+1 <<""<<players[i].name<<""<<players[i].accuracy<<endl;

}

}//feature 2 bracket
if(k==3){
cout<<"Ai wellness assistant start"<<endl;
float weight , height, foot_steps  , calorie,BMI;
cout<<"enter your weight in kg\n ";
cin>>weight ;
cout<<"enter your height in meter \n";
cin>>height;
cout<<"Approxiamately how many step you walk today \n";
cin>>foot_steps;
calorie = calorieburnt(foot_steps, weight);
cout<<"today you burnt  "<<" "<<calorie <<" "<<"calorie\n";
BMI = bmi(weight , height );
if(BMI < 18.5 ){
cout<<"BMI < 18.5 (Underweight)\n";
cout<<"A BMI below 18.5 means your body weight is lower than healthy levels and you need to gain weight safely.\n";
cout<<"do you want health and meal advice according to bmi press 1 \n" ;
int choice ;
cin>>choice;
if(choice == 1 ){
cout<<"Health Advice\n";
cout<<"Increase calories slowly and consistently.\n";
cout<<"Focus on strength training to build muscle.\n";
cout<<"Eat every 3–4 hours.\n";
cout<<"Check vitamin and mineral deficiencies.\n";
cout<<"Meal Advice\n";
cout<<"Add nuts, peanut butter, paneer, ghee.\n";
cout<<"Include whole grains like oats and brown rice.\n";
cout<<"Add eggs, chicken, dal, tofu for protein.\n";
cout<<"Drink smoothies/milkshakes for extra calories.\n";	
}

} //bmi < 18.5
else if(( BMI>=18.5) &&(BMI < 24.9)){
cout<<"BMI 18.5 – 24.9 (Healthy Weight)\n";
cout<<"This BMI range indicates a healthy balance of weight and height that should be maintained with good habits.\n";
cout<<"do you want health and meal advice according to bmi press 1 \n" ;
int choice ;
cin>>choice;
if(choice==1){
cout<<"Health Advice\n";
cout<<"Exercise 30–45 minutes daily.\n";
cout<<"Drink enough water (2.5–3 liters).\n";
cout<<"Eat at regular timings.\n";
cout<<"Limit sugar and junk.\n";
cout<<"Meal Advice\n";
cout<<"Follow a balanced plate: veggies + protein + whole grains.\n";
cout<<"1–2 fruits daily.\n";
cout<<"Choose lean protein like dal, paneer, egg, fish.\n";
cout<<"Healthy snacks: yogurt, fruits, chana.\n";
}

}//bmi (18.5, 24.9)
else if((BMI >= 25 )&&(BMI< 30)){
cout<<"BMI 25 – 29.9 (Overweight)\n";
cout<<"A BMI in this range shows extra body weight that can be reduced through controlled eating and regular activity.\n";
int choice ;
cout<<"if you health and meal advice press 1\n ";
cin>>choice;
if (choice ==1){
cout<<"Health Advice\n";
cout<<"Exercise at least 150 minutes/week.\n";
cout<<"Reduce sugary and refined foods.\n";
cout<<"Control portions, especially at night.\n";
cout<<"Meal Advice\n";
cout<<"Eat high-fiber foods: veggies, fruits, oats.\n";
cout<<"Avoid sugary drinks.\n";
cout<<"Prefer grilled/boiled foods over fried.\n";

}
}//25, 29.9
else if(BMI >=30){
cout<<"BMI 30+ (Obese)\n";
cout<<"A BMI of 30 or above signals obesity and requires strong lifestyle changes to reduce health risks.\n";
int choice ;
cout<<"if you health and meal advice press 1\n ";
cin>>choice;
if(choice ==1){
cout<<"Health Advice\n";
cout<<"Start with brisk walking daily.\n";
cout<<"Avoid all sugary drinks and junk foods.";
cout<<"Track meals and sleep 7–8 hours.\n";
cout<<"Meal Advice\n";
cout<<"Make half your plate vegetables.\n";
cout<<"Eat dal, sprouts, and high-fiber foods.\n";
cout<<"Avoid processed items like biscuits/chips\n";

}
}//30

}//feature 3 bracket

if(k==4){
cout<<"welcome to ai virtual companion\n";
cout<<"my chatbot features only on greeting , joke, press exit to end this session \n ";
string s ;
getline(cin,s);
while( s!="exit"){
getline(cin , s) ;

if(s =="exit"){
cout<<"session is closing"<<endl;
break;	
}
comment(s);
}//while
}//feature 4 ka bracket
}//sabse last tkk jayega yeh bracket

return 0 ; 	
}
