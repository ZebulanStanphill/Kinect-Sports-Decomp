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
extern void fn_8280AD30(int, float *, float *);
extern void fn_82810360(int *, float *);

typedef struct V4_8285AD58 { float x, y, z, w; } V4_8285AD58;

int fn_8285AD58(int param_1, int param_2, float *param_3)
{
  int *piVar1;
  unsigned int count;
  int i;
  float *p;
  V4_8285AD58 lo;
  V4_8285AD58 hi;
  float afStack_50[4];

  param_2 = *(int *)(param_1 + 100) + param_2;
  count = 0;
  if (*(unsigned int *)(param_2 + 0x94) != 0) {
    fn_8280AD30(param_2 + 0x10, param_3, afStack_50);
    p = afStack_50;
  } else {
    p = param_3;
  }
  i = 0;
  if (*(unsigned short *)(param_1 + 0x44) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x40) + i * 4);
      if (*piVar1 != -1) {
        fn_82810360(piVar1 + 1, &lo.x);
        fn_82810360(piVar1 + 4, &hi.x);
        if (p[0] >= lo.x && p[0] <= hi.x && p[1] >= lo.y &&
            p[1] <= hi.y && p[2] >= lo.z && p[2] <= hi.z) {
          count = count + 1;
        }
      }
      i = i + 1;
    } while (i < (int)*(unsigned short *)(param_1 + 0x44));
  }
  if (*(unsigned int *)(param_2 + 0x90) != 0 && count == 0) {
    count = 1;
  }
  return count;
}
