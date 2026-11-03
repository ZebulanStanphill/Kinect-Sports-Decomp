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
typedef struct { int m0; int m4; int count; } Rc_8270FA78;
extern void fn_826944C8(Rc_8270FA78 *);
extern void fn_82694B60(void *, int);
extern void fn_82696D38(Rc_8270FA78 **, int, int, int, int);

void fn_8270FA78(char *self, int a, int b)
{
  Rc_8270FA78 *rc;
  Rc_8270FA78 *r;
  fn_82696D38(&rc, b, a, -1, 0);
  fn_82694B60(self + 0x30, rc->m0);
  r = rc;
  if (--r->count == 0) {
    fn_826944C8(r);
  }
}
