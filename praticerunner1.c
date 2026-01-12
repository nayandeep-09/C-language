#include <stdio.h>
typedef struct datecomp
{
    int date;
    int month;
    int year;
}comp;

int compare(comp d1, comp d2){
    if(d1.year == d2.year && d1.month == d2.month && d1.date == d2.date){
        return 0;
    }else if(d1.year > d2.year){
        return 1;
    }else if(d1.month > d2.month){
        return 1;
    }else if (d1.date > d2.date){
        return 1;
    }else {
        return -1;
    }
}

int main(){
    comp d1 = {12, 01 , 2026};
    comp d2 = {11, 01 , 2026};

printf("%d", compare(d1,d2));
    return 0;
}