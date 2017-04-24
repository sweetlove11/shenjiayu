#include "include/xingzhuang.h"


void xin1() {  
    for (float y = 1.5f; y > -1.5f; y -= 0.1f) {  
        for (float x = -1.5f; x < 1.5f; x += 0.05f) {  
            float a = x * x + y * y - 1;  
            putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');  
        }  
        putchar('\n');  
    }  
}  

void xin2() {  
    for (float y = 1.5f; y > -1.5f; y -= 0.1f) {  
        for (float x = -1.5f; x < 1.5f; x += 0.05f) {  
            float z = x * x + y * y - 1;  
            float f = z * z * z - x * x * y * y * y;  
            putchar(f <= 0.0f ? ".:-=+*#%@"[(int)(f * -8.0f)] : ' ');  
        }  
        putchar('\n');  
    }  
}  


  

