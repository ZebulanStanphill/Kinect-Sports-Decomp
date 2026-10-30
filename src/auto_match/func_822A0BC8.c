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
extern void fn_82299E90(int, int, void *, void *);
extern void fn_822A0AD8(int, int, float);
extern void fn_82358FD8(int, void *, int, unsigned int);
extern unsigned int lbl_82193880[];
extern unsigned int lbl_82193898[];


void fn_822A0BC8(int param_2,int param_3,int param_4,int param_5,float param_1)

{
  int iVar1;
  undefined1 auStack_1030 [2048];
  undefined1 auStack_830 [2048];
  
  if ((param_3 <= 0) || (param_3 > 5)) {
    fn_822A0AD8(param_2,param_3,param_1);
  }
  else {
    fn_82358FD8(*(undefined4 *)(param_2 + 0x1c),auStack_830,0x400,
                      lbl_82193880[param_3]);
    fn_82358FD8(*(undefined4 *)(param_2 + 0x1c),auStack_1030,0x400,
                      lbl_82193898[param_3]);
    if ((param_3 == 1) || (param_3 == 2)) {
      iVar1 = *(int *)(param_2 + 0x3c);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x40);
    }
    if (*(int *)(iVar1 + 0x1220) == 0) {
      fn_82299E90(iVar1,param_5,auStack_830,auStack_1030);
      *(float *)(iVar1 + 0x121c) = (float)param_1;
    }
  }
  return;
}

