// Built with link-time code generation together with its "ltcg_units" (objects.json):
// the frame reserves the 8*(n+8) outgoing area LTCG gives calls to a compiled variadic function.
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
extern unsigned int *auStack_20;
extern int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CCA8();


void fn_8225FC80(undefined4 *param_1)

{
  unsigned char cVar1;
  undefined1 auStack_20 [16];
  
  cVar1 = fn_82E1CAD0(3);
  if (cVar1 != '\0') {
    fn_82526C70(auStack_20,10,"0x%08x",*param_1);
    fn_82E1CB08("Script",auStack_20,0);
    fn_82E1CCA8();
  }
  return;
}

