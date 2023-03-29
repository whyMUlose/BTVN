#include <bits/stdc++.h>
//a
//b có thể tính được kích thước kiểu int
//c có thể tính được kích thước kiểu double
using namespace std;
int main()
{

//    char a[4] = "abc";
//    for (char *cp = a; (*cp) != '\0'; cp++) {
//       cout << (void*) cp << " : " << (*cp) << endl;
//    }
//    return 0;

// int a[4] = {1, 2, 3, 4};
// for (int *cp = a; cp < a+4; cp++) {
//     cout << (void*) cp << " : " << (*cp) << endl;
// }
//double a[4]={1, 2, 3, 4};
//for (double *cp = a; cp < a+4; cp+=2){
//    cout << (void*) cp << " : " << (*cp) << endl;
//}
double a[4]={1.1, 2.1, 3.1, 4.1};
for (double *cp = a; cp < a+4; cp+=2){
    cout << (void*) cp << " : " << (*cp) << endl;
}
return 0;
}
//ket qua lan 1
//0x61fdf0: 1
//0x61fdf8: 2
//0x61fe00: 3
//0x61fe08: 4


//ketqua lan 2
//0x61fdf0: 1
//0x61fe00: 3
