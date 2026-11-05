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
extern int fn_82F68B6C();


extern int fn_83089FA0();
extern int fn_82DA7D50();

void fn_82DA7E68(unsigned *param_1)
{
  int *p;
  int *e;
  int t;

  p = (int *)param_1[0];
  e = p + param_1[1] * 2;
  for (; p < e; p += 2) {
    t = p[0];
    if (*(int *)((int)*(char *)(t + 5) + t + 0x14) >
        *(int *)((int)*(char *)(p[1] + 5) + p[1] + 0x14)) {
      int *q = p + 1;
      *p = *q;
      *q = t;
    }
  }
  if ((int)param_1[1] <= 1) {
    return;
  }
  fn_83089FA0(param_1[0], 0, param_1[1] - 1, fn_82DA7D50);
}
