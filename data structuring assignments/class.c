#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct class{
    int rollno;
    float cgpa;
    char name[50];
    char branch[30];
};

void swap(struct class *a ,struct class *b){
    struct class temp = *a;
    *a = *b;
    *b = temp;
}

void linear_search(struct class stud[],int key,int n){   //function to search a given key using linear sort
        for(int i=0;i<n;i++){
            if(stud[i].rollno==key) {
            printf("The enrollment no has been found.\n\n");
            return;
            }
        }
        printf("The enrollment has not been found.\n\n");

}

void bubble_sort(struct class arr[],int n){   //using bubble sort function to swap using enrollment no
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j].rollno>arr[j+1].rollno){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}


// void insert_sort(struct class a[],int n) {
//     struct class key;
//     for (int i=1; i<n; i++) {
//         key.cgpa = a[i].cgpa ;
//         for (int j=i-1; j>=0; j--){
//             if (key.cgpa > a[j].cgpa){
//                  a[j+1] = a[j];
//                  a[j] = key; 
//                  }
//             else break;
//         }
//     }
//  }


void print(struct class s){
    printf("Enrollment Number: %d\n", s.rollno);
    printf("Name: %s\n", s.name);
    printf("Branch: %s\n", s.branch);
    printf("CGPA: %f\n", s.cgpa);
    printf("\n");
}


int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct class students[n];
    for (int i = 0; i<n; i++){
        printf("Enter enrollment number: ");
        scanf("%d", &(students[i].rollno));
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter branch: ");
        scanf("%s", students[i].branch);
        printf("Enter cgpa: ");
        scanf("%f", &(students[i].cgpa));
        printf("\n");
    }
    int x;
    printf("Enter student's enrollment number to search for: ");
    scanf("%d", &x);
    linear_search(students, x,n);
    printf("Bubble sorted array is: \n\n");
    bubble_sort(students,n);
    for (int i = 0; i<n; i++){
        print(students[i]);
    }    
    //binary search used here
    printf("Enter student's enrollment number to search for: ");
    scanf("%d", &x);
    int low = 0, high = n, flag = 1;
    while (low <= high){
        int mid = low + (high - low)/2;
        if (students[mid].rollno== x){
            print(students[mid]);
            flag = 0;
            printf("\n");
            break;
        }
        else{
            if (x > students[mid].rollno) low = mid+1;
            else high = mid-1;
        }
    }
    if (flag) printf("Invalid Enrollment number entered.\n\n");
    printf("Sorted using Insertion sort in order of CGPA:\n");
    //insert_sort(students,n);
    //insertion sort to sort based on CGPA
    for (int i = 0; i<n-1; i++){
        int j = i+1;
        while (j > 0){
            if (students[j].cgpa > students[j-1].cgpa){
                struct class temp = students[j];
                students[j] = students[j-1];
                students[j-1] = temp;
                j--;
            }
            else break;
        }
    }
    for (int i = 0; i<n; i++){
        print(students[i]);
    }   
    

}
    
