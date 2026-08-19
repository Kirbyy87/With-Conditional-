#include <iostream>

using namespace std;

int main()
{
    cout << "------------------------------------------------------------" << endl;
    cout << "\t National High School Grading System" << endl;
    cout << "____________________________________________________________" << endl;

    string studentname, subject;
    double rawscore, totalitem, quizpercent, quizans, quizequivalent, equivalent, assignmentpercent, assignmentans, exampercent, ExamAns, finalgrade, remark;

    cout << "Enter Student Name: ";
    getline (cin, studentname);

    cout << "Enter Subject: ";
    cin >> subject;

    cout << "                   " << endl;


    cout << "QUIZ" << endl;

    cout << "Enter Raw Score: ";
    cin >> rawscore;

    cout << "Enter Total Item: ";
    cin >> totalitem;

    quizequivalent = (rawscore/totalitem) * 100;

    cout << "Enter Quiz Percent (%): ";
    cin >> quizpercent;

    quizans = (quizequivalent * quizpercent) / 100;

    cout << "\tQuiz Ans: " << quizans << endl;

    cout << "                  " << endl;

    cout << "ASSIGNMENT" << endl;

    cout << " Enter Equivalent: ";
    cin >> equivalent;

    cout << "Enter Assignment Percent: ";
    cin >> assignmentpercent;

    assignmentans = (equivalent * assignmentpercent) / 100;

    cout << "\tAssignment Ans: " << assignmentans << endl;

    cout << "                     " << endl;


    cout << "EXAM" << endl;

    cout << "Enter Raw Score: ";
    cin >> rawscore;

    cout << "Enter Total Item: ";
    cin >> totalitem;

    cout << "Exam Equivalent: ";
    cin >> equivalent;

    cout << "Enter Exam Percent: ";
    cin >> exampercent;

    ExamAns = (equivalent * exampercent) / 100;

    cout << "\tExam Ans: " << ExamAns << endl;


    cout << "                       " << endl;

    finalgrade = quizans + assignmentans + ExamAns;

    cout << "Final Grade: " << finalgrade << endl;

    cout << "                   " << endl;

    cout << "\tRemark: ";

    cout << "                  " << endl;

    cout << "Note: " << endl;

   cout << "----------------------------" << endl;
    cout << "For Remark" << endl;
    cout << "----------------------------" << endl;

    cout << "                    " << endl;

    if (finalgrade>=95 and finalgrade<=100) {
        cout<< "\tRemark: Excellent" << endl;
    }
    else if(finalgrade>=90 and finalgrade<=94){
        cout<< "\tRemark: Very Good" << endl;
    }
    else if(finalgrade>=85 and finalgrade<=89){
        cout<< "\tRemark: Good" << endl;
    }
    else if(finalgrade>=80 and finalgrade<=84){
        cout<< "\tRemark: Satisfactory" << endl;
    }
    else if(finalgrade>=75 and finalgrade<=79){
        cout<< "\tRemark: Needs Improvement" << endl;
    }
    else if(finalgrade>=60 and finalgrade<=74){
        cout<< "\tRemark: Failed" << endl;
    }
    else if(finalgrade>=1 and finalgrade<=59){
        cout<< "\tRemark: Not a valid Grade" << endl;
    }
    else if(finalgrade>=101){
        cout<< "\tRemark: Up Overflow" << endl;
    }

    cout << "_________________________________________" << endl;


    return 0;
}
