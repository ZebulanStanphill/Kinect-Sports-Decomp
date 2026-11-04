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
typedef struct Obj_82BECD20 { void *vt; int pad[2]; void *a; int pad2[3]; void *b; } Obj_82BECD20;
extern void fn_82BE8CF8(Obj_82BECD20 *);
extern void fn_82BE8D50(void *);
extern char lbl_820EB0DC[];
extern void (*lbl_831751CC)(void *);

void fn_82BECD20(Obj_82BECD20 *p)
{
  p->vt = lbl_820EB0DC;
  if (p->a != 0) {
    fn_82BE8D50(p->a);
    p->a = 0;
  }
  if (p->b != 0) {
    lbl_831751CC(p->b);
    p->b = 0;
  }
  fn_82BE8CF8(p);
}
