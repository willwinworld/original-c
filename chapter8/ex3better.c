#include <stdio.h>  
  
struct time  
{  
    int  hour;  
    int  minutes;  
    int  seconds;  
};  
  
// calculate elapsed time (assume t2 is later than t1)   
  
struct time  elapsed_time (struct time  t1, struct time  t2)  
{  
  
    struct time  result = { 0, 0, 0 };  
  
    // first subtract the seconds   
  
    result.seconds = t2.seconds - t1.seconds;  
  
    // if seconds < 0, need to borrow one minute   
  
    if (result.seconds < 0) {  
        result.seconds += 60;  
        --t2.minutes;  
    }  
  
    // now subtract the minutes   
  
    result.minutes = t2.minutes - t1.minutes;  
  
    // if minutes < 0, need to borrow one hour   
  
    if (result.minutes < 0) {  
        result.minutes += 60;  
        --t2.hour;  
  
    }  
  
    // now subtract the hours   
  
    result.hour = t2.hour - t1.hour;  
  
    // if hour < 0, need to borrow one day (crossed midnight)   
  
    if (result.hour < 0)  
        result.hour += 24;  
  
    return  result;  
}  
  
int main (void)  
{  
    struct time  elapsed_time (struct time  t1, struct time  t2);  
    struct time  t1 = { 3, 45, 15 }, t2 = { 9, 44, 03 },  
                 t3 = {22, 50, 59 }, t4 = { 7, 30,  0 };  
    struct time  result;  
  
    result = elapsed_time (t1, t2);  
    printf ("Time between %.2i:%.2i:%.2i and %.2i:%.2i:%.2i "  
        "is %.2i:%.2i:%.2i\n",  
        t1.hour, t1.minutes, t1.seconds, t2.hour, t2.minutes,       
        t2.seconds, result.hour, result.minutes, result.seconds);  
  
    result = elapsed_time (t2, t1);  
    printf ("Time between %.2i:%.2i:%.2i and %.2i:%.2i:%.2i "  
        "is %.2i:%.2i:%.2i\n",  
        t2.hour, t2.minutes, t2.seconds, t1.hour, t1.minutes,      
        t1.seconds, result.hour, result.minutes, result.seconds);  
  
    result = elapsed_time (t3, t4);  
    printf ("Time between %.2i:%.2i:%.2i and %.2i:%.2i:%.2i "  
        "is %.2i:%.2i:%.2i\n",  
        t3.hour, t3.minutes, t3.seconds, t4.hour, t4.minutes,      
        t4.seconds, result.hour, result.minutes, result.seconds);  
  
    return 0;  
}  
 
