typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82E275D0();
extern int fn_82E28460();
extern int fn_82E2D068();
extern int fn_82E32028();


int fn_82E23F08(int param_1,undefined4 *param_2,int param_3,int param_4,
                      int param_5,int param_6)

{
  int *piVar1;
  int lVar2;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int * apiStack_50;
  
  piStack_60 = (int *)0x0;
  piStack_5c = (int *)0x0;
  piStack_58 = (int *)0x0;
  piStack_54 = (int *)0x0;
  apiStack_50 = (int *)0x0;
  lVar2 = fn_82E32028(&piStack_60);
  if ((((((lVar2 >= 0) && (lVar2 = fn_82E2D068(&piStack_5c), lVar2 >= 0)) &&
        (lVar2 = fn_82E275D0(piStack_5c,param_3,param_4), lVar2 >= 0)) &&
       ((lVar2 = (*(code *)(*piStack_60 + 0x98))(piStack_60,piStack_5c,&piStack_58), lVar2 >= 0 &&
        (lVar2 = (*(code *)(*piStack_58 + 0x8c))(piStack_58,1), lVar2 >= 0)))) &&
      ((lVar2 = (*(code *)(*piStack_60 + 0x90))(piStack_60,piStack_58), lVar2 >= 0 &&
       ((lVar2 = fn_82E2D068(&piStack_54), lVar2 >= 0 &&
        (lVar2 = fn_82E28460(piStack_54,param_5,param_6,0), lVar2 >= 0)))))) &&
     ((lVar2 = (*(code *)(*piStack_60 + 0x98))(piStack_60,piStack_54,&apiStack_50), lVar2 >= 0 &&
      ((lVar2 = (*(code *)(*apiStack_50 + 0x8c))(apiStack_50,2), lVar2 >= 0 &&
       (lVar2 = (*(code *)(*piStack_60 + 0x90))(piStack_60,apiStack_50), lVar2 >= 0)))))) {
    piVar1 = piStack_60;
    piStack_60 = (int *)0x0;
    *param_2 = piVar1;
  }
  if (piStack_60 != (int *)0x0) {
    (*(code *)(*piStack_60 + 8))(piStack_60);
    piStack_60 = (int *)0x0;
  }
  if (piStack_5c != (int *)0x0) {
    (*(code *)(*piStack_5c + 8))(piStack_5c);
    piStack_5c = (int *)0x0;
  }
  if (piStack_58 != (int *)0x0) {
    (*(code *)(*piStack_58 + 8))(piStack_58);
    piStack_58 = (int *)0x0;
  }
  if (piStack_54 != (int *)0x0) {
    (*(code *)(*piStack_54 + 8))(piStack_54);
    piStack_54 = (int *)0x0;
  }
  if (apiStack_50 != (int *)0x0) {
    (*(code *)(*apiStack_50 + 8))(apiStack_50);
  }
  return lVar2;
}

