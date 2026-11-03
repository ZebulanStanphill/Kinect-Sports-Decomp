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
typedef struct Obj_82EE9FF0 {
  char pad0[0x40];
  void *a40;
  void *a44;
  int pad48;
  int a4c;
} Obj_82EE9FF0;
extern int fn_82A1E658(void *);
extern int fn_82A29A38(void *);

void fn_82EE9FF0(Obj_82EE9FF0 *p)
{
  if (p->a4c != 0) {
    fn_82A29A38(p);
  } else {
    if (p->a40 != 0) {
      fn_82A1E658(p->a40);
      p->a40 = 0;
    }
    if (p->a44 != 0) {
      fn_82A1E658(p->a44);
      p->a44 = 0;
    }
    p->a4c = 1;
  }
}
