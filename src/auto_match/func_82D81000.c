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
typedef struct Msg_82D81000 { unsigned char tag; int a; unsigned short b; unsigned char c; } Msg_82D81000;
extern void fn_82DA6530(int, Msg_82D81000 *);

void fn_82D81000(int param_1, int param_2, unsigned param_3, unsigned param_4)
{
  Msg_82D81000 m;

  if (*(int *)(param_1 + 0x94) != 0) {
    m.a = param_2;
    m.tag = 0x17;
    m.b = param_3;
    m.c = param_4;
    fn_82DA6530(*(int *)(param_1 + 0x88), &m);
    return;
  }
  (*(void (**)(int, int, unsigned, int, unsigned))(**(int **)(param_1 + 8) + 0x30))(*(int *)(param_1 + 8), param_2, param_3, param_1, param_4);
}
