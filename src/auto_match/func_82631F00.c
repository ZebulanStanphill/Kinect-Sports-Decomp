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
extern void *memset(void *, int, unsigned int);

int * fn_82631F00(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                   unsigned int param_5)
{
  *param_1 = (int)param_4;
  param_1[2] = (int)param_5;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_4 != 0) {
    memset((void *)param_4, 0, param_5);
  }
  param_1[5] = (int)param_2;
  param_1[7] = (int)param_3;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (param_2 != 0) {
    memset((void *)param_2, 0, param_3);
  }
  return param_1;
}
