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
extern int *fn_828B0DB8(void);
extern void *fn_828B0ED0(int a, int b, int c);
extern int fn_828C8058(int a, int b);
extern unsigned char fn_828D8FD8(int a, int b);
extern int fn_82A4AAA8(void);

void fn_828D9438(int param_1)
{
  int *obj;
  int iVar2;

  obj = fn_828B0DB8();
  if (obj != 0 && *(unsigned char *)((int)obj + 0x26) == 0) {
    iVar2 = (*(code *)(*obj + 0xc))(obj);
    if (fn_82A4AAA8() == 1 &&
        fn_828B0ED0(*(int *)(iVar2 + 0x4c) + 0x38, 2, 0) != 0 &&
        fn_828D8FD8(param_1, 1) == 0) {
      fn_828C8058(*(int *)(param_1 + 0x14), 0xb);
    }
  }
}
