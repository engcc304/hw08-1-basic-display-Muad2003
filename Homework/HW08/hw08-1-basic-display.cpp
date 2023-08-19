/*
    เขียนโปรแกรมรับตัวเลขจากผู้ใช้ n ชุด จากนั้นทำการหาผลรวม และค่าเฉลี่ยของชุดตัวเลขเหล่านั้น (แสดงค่าเฉลี่ยเป็นทศนิยม 2 ตำแหน่ง)
    
    Test case:
        Enter value n :
            6
        Enter number 1 :
            19
        Enter number 2 :
            7
        Enter number 3 :
            23
        Enter number 4 :
            96
        Enter number 5 :
            77
        Enter number 6 :
            16
    Output:
        Sum = 238
        Avg = 39.67

*/

#include<stdio.h>

int main() {
    int input ;
    int inputvalue ;
    float sum = 0 ;
    int allsum = 0 ;
    printf ( "Enter value n :\n" ) ;
    scanf ( "%d", &input ) ;

    for ( int i = 1 ; i <= input ; i++ ) {
        printf ( "Enter number %d :\n", i ) ;
        scanf ( "%d", &inputvalue ) ;
        sum += inputvalue  ;
        allsum = sum ;
    }
    printf( "Sum = %d\n", allsum ) ;
    float avg = sum ;
    avg /= input ;
    printf ( "Avg = %1.2f", avg ) ;
    return 0 ;
}