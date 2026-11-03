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
extern int lbl_8326AF58[];
extern void fn_82A93C18(int, int, int, int, int, int, int, int, int, int, int, int);
extern void fn_82A93F70(int, int);
int fn_82544718(int p1, int p2, int p3, int p4, int p5, int p6)
{
  fn_82A93C18(p2, p3, 1, 0, p4, 0, 0, -1, 0, p1, p6, 0);
  fn_82A93F70(p1, lbl_8326AF58[0xf0] + p5);
  return p1;
}
