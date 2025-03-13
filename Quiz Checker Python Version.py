def input_grades(students, quizzes):
    grades = []
    for i in range(students):
        print(f"The scores of the Quizzes of Student {i+1} is: ", end="")
        scores = list(map(int, input().split()))[:quizzes]
        grades.append(scores)
    return grades

def output_scores(grades, student_index):
    print("\t".join(map(str, grades[student_index])))

def average_student(grades, student_index, quizzes):
    return sum(grades[student_index]) / quizzes

def average_quiz(grades, students, quiz_index):
    return sum(grades[i][quiz_index] for i in range(students)) / students

def output_average(grades, students, quizzes):
    print("No. Students\t  Average Scores\t\t\t\tScores\n")
    for i in range(students):
        print(f"Student {i+1}:\t\t{average_student(grades, i, quizzes):.2f}\t\t\t", end="")
        output_scores(grades, i)
        print()

def output_total_averages(grades, students, quizzes):
    print("The Total Averages are:\t\t\t\t", end="")
    for i in range(quizzes):
        print(f"{average_quiz(grades, students, i):.2f}\t", end="")
    print()

def main():
    STUDENTS, QUIZZES = 4, 5
    grades = input_grades(STUDENTS, QUIZZES)
    print("\n" + "_" * 85 + "\n")
    output_average(grades, STUDENTS, QUIZZES)
    output_total_averages(grades, STUDENTS, QUIZZES)
    print("_" * 85 + "\n")

if __name__ == "__main__":
    main()
