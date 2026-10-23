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
extern int fn_82810208();
extern int fn_8305F7A0();
extern int fn_83060570();

typedef struct {
  char pad[0x28];
  int a28;
  int *a2c;
  int n30;
} S;

void fn_8305D740(S *param_1,undefined8 param_2)
{
  int i;
  undefined1 buf [16];

  for (i = 0; i < param_1->n30; i++) {
    fn_82810208(fn_8305F7A0(param_1->a28, param_1->a2c[i]), param_2, buf);
    param_1->a2c[i] = fn_83060570(param_1->a28, buf);
  }
}
