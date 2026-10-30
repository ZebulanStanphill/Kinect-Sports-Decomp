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
extern int fn_82FA5190(unsigned int, unsigned int);
extern unsigned int lbl_831BC768;
typedef struct { char pad[0x3c]; unsigned int f3c; unsigned int f40; unsigned int f44; unsigned int f48; } O_83027208;

void fn_83027208(O_83027208 *param_1)
{
  if (param_1->f3c != 0) {
    fn_82FA5190(lbl_831BC768, param_1->f3c);
    param_1->f3c = 0;
  }
  if (param_1->f44 != 0) {
    fn_82FA5190(lbl_831BC768, param_1->f44);
    param_1->f44 = 0;
  }
  param_1->f40 = 0;
  param_1->f48 = 0;
}
