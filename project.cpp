
#include <iostream>
#include<stdlib.h>
#include<windows.h>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

// Define a structure for questionsha
struct Question {
    string question;
    vector<string> options;
    char correctAnswer;
};

// Define a structure for exams
struct Exam {
    string title;
    vector<Question> questions;
};


// Function to display a question
void displayQuestion(const Question& question) {
     
    cout << question.question << endl;
    for (size_t i = 0; i < question.options.size(); ++i) {
        cout << static_cast<char>('A' + i) << " " << question.options[i] << endl;
    }
}
// Function to conduct the exam
void conductExam(const Exam& exam) {
    int score = 0;
    size_t totalQuestions = exam.questions.size();
    


    cout << "Welcome to the " << exam.title << " Exam!" <<endl;
    cout << "You will be asked " << totalQuestions << " multiple-choice questions." << endl;

    // Iterate through each question
    for (size_t i = 0; i < totalQuestions; ++i) {
        cout << "\nQuestion " << i + 1 << "/" << totalQuestions << endl;
        displayQuestion(exam.questions[i]);

        char userAnswer;
        string email;
      
       
        cout << "Enter your answer (A/B/C/D): "<<endl;
        cin >> userAnswer;

        // Convert the user's answer to uppercase
        userAnswer = toupper(userAnswer);

        // Validate the user's answer
        if (userAnswer == exam.questions[i].correctAnswer) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Incorrect. The correct answer is: " << exam.questions[i].correctAnswer << endl;

        }
    }


 cout<<"----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"TEST IS SUBMITTED"<<system("color 0B");
    cout<<"_____________________________________________________________________________________________________________________________________________"<<endl;
   {
std::cout << "Thank you!:\n";
std::cout<<"waitaing for the result\n";
std::cout << "Wait for 5 seconds\n";
Sleep(5000); // Sleep for 5 seconds
std::cout << "RESULT DECLEARED \n";
}
    cout << "\nYour score: " << score << "/" << totalQuestions << endl;
    cout<<"\n**************************************************************************************************************************************************************"<<endl;
   cout<<"____________________________________________________________________________________________________________________"<<endl;
  cout<<"FILL THE CERTIFICATION DETAILS"<<endl;
  cout<<"_____________________________________________________________________________________________________________________"<<endl;
   string Name;
   system("color D");
    cout<<"Enter the your Name\n"<<" "<<Name;
    cin>>Name;
    system(" color 3");
   long int mobileNumber;
    cout<<"Enter your mobile number ::  "<<"   "<<endl;
    cin>>mobileNumber;
   

    cout<<"**********************************************************************************************************************************"<<endl;
     cout<<"verify the mobile number\n"<<endl;
     
  std::cout<<"waitaing for the OTP \n";

Sleep(5000); // Sleep for 5 seconds
string otp;
    cout<<"Enter your OTP: "<<"   "<<endl;
    cin>>otp;

     string email;
 cout<<"Please Enter the correct Email Address"<<"   "<<endl;
 cin>>email;
    cout<<"your Complete the Exam and your give the certificate in your email "<<endl;
    
cout<<"\n******************************************************************************************************************"<<endl;
cout<<" Registered the Email Address\n";
cout<<"\n****************************************************************************************************************"<<endl;
cout<<" Congratulation! certificate will be sent in your Email Address";
cout<<"\n************************************************************************************************************************************************************"<<endl;

}


int main() {
    system("color 0A");
    // Sample exam data
system("color A" );

    cout<<"############################################################"<<endl;
    Exam sampleExam;
    sampleExam.title = "Online DSA Exam Portal ";
 cout<<"############################################################"<<endl;
    sampleExam.questions = { 
        
        {"What is the Data Structure?", {"organize of Data", "memory System", "data Analysis", "system"}, 'A'},

       
        {"what is the time complexity of merge sort?", {"O(n)", "O(n*n)", "O(nlogn)", "O(sqart(n))"}, 'C'},

      
        {"What is the Stack?",{"linear data Structure", "Non Linear data structure", "multiple stack", "Arrangement data"}, 'A'},

     
        {"What is application of queue?", {"Linux", "Ticket counter", "parathensis expression", "Scheduling"}, 'B'},

        
        {"what is Avl Tree?", {"B-Tree", "B++-Tree", "BST Tree", "Binary search"}, 'C'}
        
    };
   


    // Conduct the exam
    conductExam(sampleExam);
    return 0;
}










































