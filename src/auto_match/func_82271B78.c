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
extern int fn_822315A0(unsigned int);
extern int fn_82671E20(unsigned int, unsigned int);
extern int fn_82671F28(unsigned int, unsigned int);
extern unsigned int lbl_8326B370[];

void fn_82271B78(unsigned int *param_1,unsigned int *param_2,int param_3,int param_4,unsigned int param_5)
{
  if (*param_1 != 0) {
    if (param_3 != 0) {
      fn_82671E20(*param_2, *param_1 + 0x198);
      if (param_4 != 0) {
        *(unsigned int *)(*param_1 + 0x1a0) = lbl_8326B370[9];
      }
      param_1[0x32] = param_5;
    }
    else {
      fn_82671F28(*param_2, *param_1 + 0x198);
      if (param_4 != 0) {
        *(unsigned int *)(*param_1 + 0x19c) = lbl_8326B370[9];
      }
      param_1[0x33] = param_5;
    }
  }
  if (param_2[1] != 0) {
    fn_822315A0(param_2[1]);
  }
}
