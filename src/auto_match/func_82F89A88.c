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
extern char *fn_82F6EBC8(char *dst, const char *src, unsigned int n);
extern void fn_82A29DE8(char *buf, int a, int b, int c, int d, int e, int f);

void fn_82F89A88(const char *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
{
  char buf[0x104];

  buf[0] = 0;
  fn_82F6EBC8(buf, param_1, 0x104);
  buf[0x103] = 0;
  fn_82A29DE8(buf, param_2, param_3, param_4, param_5, param_6, param_7);
}
