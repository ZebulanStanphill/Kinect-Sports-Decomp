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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822A0678();
extern int fn_82672C20();


void fn_822A0600(int param_1,undefined4 param_2)

{
  struct { unsigned a, b, c; } args;
  
  args.a = 0;
  args.b = 0;
  fn_82273CD8(&args.a,5);
  args.c = param_2;
  fn_822A0678(param_1);
  fn_82672C20(*(undefined4 *)(param_1 + 4),"_root.caption.DisplayCaption",&args.a,1);
  fn_82273C88(&args.a);
  return;
}

