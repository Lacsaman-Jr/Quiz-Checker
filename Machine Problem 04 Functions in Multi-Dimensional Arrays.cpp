#include <iostream>
using namespace std;

double average(int grades[][5], int STUDENTS, int QUIZZES); //the function declaration for the average scores of each students

void input(int grades[][5], int STUDENTS, int QUIZZES) //the function declaration/definition for the input 
{	
	for(int i = 0; i < STUDENTS; i++) //it loops through each students
	{
		cout <<"The scores of the Quizzes of Student "<<i+1<<" is: ";
		for(int j = 0; j < QUIZZES; j++) //loops through the quizzes of each students one by one
		{
			cin >> grades[i][j]; //the input for the student's quiz scores
		}
		cout <<endl;
	}
}

void output_scores(int grades[][5], int STUDENTS, int QUIZZES) //the funtion declaration/definition for the output of students scores
{
	for(int i = STUDENTS; i == STUDENTS; i++) //loops through each students one-by-one
	{
		for(int j = 0; j < QUIZZES; j++) //loops through each quizzes one-by-one
		{
			cout << grades[i][j]<<"\t"; //the output for the students quizzes
		}
		
	}
}

double AVERAGE(int grades[][5], int STUDENTS, int QUIZZES) //the function declaration/definition for the average scores [student loop]
{
	double sum = 0;
	for(int i = 0; i < STUDENTS; i++) //loops through the students
	{
		sum = sum + grades[i][QUIZZES];
	}
	
	return sum/STUDENTS;	
}

void OUTPUT (int grades[][5], int STUDENTS, int QUIZZES) //the function declaration/definition for the average scores [quiz loop]
{
	for(int i = 0; i < QUIZZES; i++) //loops through the quizzes
	{
		cout<<AVERAGE(grades, STUDENTS, i)<<"\t"; //every column (quizzes) then passes it the the function where it loops the row (students)
	}
}

void output_average(int grades[][5], int STUDENTS, int QUIZZES) //the function declaration/definition for the output of everything
{
	cout <<"No. Students\t  Avarege Scores\t\t\t\tScores"<<endl<<endl;
	for(int i = 0; i < STUDENTS; i++) //loops for each students one-by-one
	{
			cout <<"Student "<<i+1<<":\t\t"<< average(grades, i, QUIZZES)<<"\t\t\t"; //passes the value of index to the student's argument
			output_scores(grades, i, QUIZZES);
			cout <<endl<<endl;
	}
}

int main()
{
	const int STUDENTS = 4, QUIZZES = 5; //initializes the number of population and their quizzes.
	int grades[STUDENTS][QUIZZES]; //a two-dimensional array that handles the quizzes of students as one.
	
	input(grades, STUDENTS, QUIZZES); //function call for the input of the student's quiz scores
	cout <<endl<<endl<<endl;
	cout<<"_____________________________________________________________________________________"<<endl<<endl;
	output_average (grades, STUDENTS, QUIZZES); //prints the quiz, and the average scores they got.
	cout<<"\nThe Total Averages are:\t\t\t\t";
	OUTPUT(grades, STUDENTS, QUIZZES); // solves for the average grade.
	cout<<"\n_____________________________________________________________________________________"<<endl<<endl;
	
	return 0;
}

double average(int grades[][5], int STUDENTS, int QUIZZES) //the function definition for the average scores of each students
{
	double sum = 0;
	for(int i = 0; i < QUIZZES; i++) //loops to every quizzes.
	{
		sum += grades[STUDENTS][i]; //the student here is equalled to index of the loop of the output-average.
	}
	return sum/QUIZZES; //returns the summation of the quizzes divided by the number of quizzes.
}