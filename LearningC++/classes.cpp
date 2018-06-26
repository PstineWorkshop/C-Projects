#include <iostream>
#include <string>
using namespace std;

class Human{

    //Original declaration as public
    // public:
    //     string name;
    //     int age;
    // Improved declaration as private
    private:
    //using friend to give access of these variables to this method
        friend void displayData(const Human& person);
        int age;
        string name;
    //public methods
    public:
        //No arg constructor
        Human(){
            age =100;
            name = "Stevie wonder";
        }
        //Argument Constructor
        Human(string newName, int newAge){
            age = newAge;
            name = newName;
        }
        //conversion through types explicit over implicit
        explicit Human(int humanAge): age(humanAge){

        }
        //getter for age
        int getAge(){
            return age;
        }
        //setter method for age
        void SetAge(int humanAge){
            age = humanAge;
        }
        //getter for name
        string getName(){
            return name;
        }
        //setter for name
        void SetName(string newName){
            name = newName;
        }
        //method displays the data
        void IntroduceSelf(){
        cout << "I am " << name << " and I am ";
        cout << age << " years old " << endl;
        }
        
};
void DoSomething(Human person){
            cout << "Human sent did someting" << endl;
            return;
        }
void displayData(const Human& person){
    cout << person.age << endl;
}
int main(){
    Human firstMan;
    firstMan.SetName("Adam");
    firstMan.SetAge(30);
    Human firstWoman;
    firstWoman.SetName("Eve");
    firstWoman.SetAge(28);
    //test no argument constructor
    Human predator;
    predator.IntroduceSelf();
    //test argument constructor
    Human cyborg("Terminator", 1000);
    cyborg.IntroduceSelf();

    DoSomething(cyborg);
    displayData(cyborg);

    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
}
