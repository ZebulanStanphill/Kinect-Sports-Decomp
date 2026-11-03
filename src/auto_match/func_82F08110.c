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


extern void *memcpy(void *, const void *, unsigned int);

unsigned int fn_82F08110(int param_1,int param_2,int param_3,short *param_4,short *param_5)
{
  if (*(int *)(param_2 + 0x1c) != 0 && *(int *)((param_3 + 7) * 4 + param_2) == 1) {
    memcpy(param_4 + 1, param_5 + 1, 14);
    return *(unsigned int *)(param_1 + 0x23c);
  }
  if (*(int *)(param_2 + 0x1c) != 0 && *(int *)((param_3 + 7) * 4 + param_2) == 0) {
    param_4[8] = param_5[1];
    param_4[0x10] = param_5[2];
    param_4[0x18] = param_5[3];
    param_4[0x20] = param_5[4];
    param_4[0x28] = param_5[5];
    param_4[0x30] = param_5[6];
    param_4[0x38] = param_5[7];
    return *(unsigned int *)(param_1 + 0x240);
  }
  return *(unsigned int *)(param_1 + 0x238);
}
