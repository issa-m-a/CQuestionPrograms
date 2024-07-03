#include <stdio.h>
#include <stdlib.h>

// Function declarations
double input(const char* subject);
double get_mean(double, double, double, double, double, double);
const char* get_grade(double);
void show(double, const char*);
void compute();

int main() {
    int count, number;
    printf("\nHow many students do you want to enter their marks for the subjects they did?\n");
    scanf("%d", &number);

    for (count = 0; count < number; count++) {
        compute();
    }
    return 0;
}

// Function to input and validate marks for a subject
double input(const char* subject)
{
    double mark;
    printf("Input marks for %s: ", subject);
    scanf("%lf", &mark);

    while (mark < 0 || mark > 100) {
        printf("\nInvalid Mark! Try again (marks[0-100]): ");
        scanf("%lf", &mark);
    }
    return mark;
}

// Function to compute mean of six subjects
double get_mean(double a, double b, double c, double d, double e, double f)
{
    return (a + b + c + d + e + f) / 6;
}

// Function to get the grade based on mean
const char* get_grade(double mean)
{
    if (mean > 79) {
        return "A";
    } else if (mean >= 75) {
        return "A-";
    } else if (mean >= 70) {
        return "B+";
    } else if (mean >= 65) {
        return "B";
    } else if (mean >= 60) {
        return "B-";
    } else if (mean >= 55) {
        return "C+";
    } else if (mean >= 45) {
        return "C";
    } else if (mean >= 40) {
        return "C-";
    } else if (mean >= 35) {
        return "D+";
    } else if (mean >= 30) {
        return "D";
    } else if (mean >= 25) {
        return "D-";
    } else {
        return "E";
    }
}

// Function to display the mean and grade
void show(double mean, const char* grade)
{
    printf("Mean: %.2f\n", mean);
    printf("Grade: %s\n", grade);
}

// Function to compute the mean and grade for a student
void compute()
{
    double Mathematics, English, Kiswahili, Science, Social_Studies, Religious_Education, mean;
    const char* grade;

    printf("\nEnter marks for the student\n");
    Mathematics = input("Mathematics");
    English = input("English");
    Kiswahili = input("Kiswahili");
    Science = input("Science");
    Social_Studies = input("Social Studies");
    Religious_Education = input("Religious Education");

    mean = get_mean(Mathematics, English, Kiswahili, Science, Social_Studies, Religious_Education);
    grade = get_grade(mean);
    show(mean, grade);
}
