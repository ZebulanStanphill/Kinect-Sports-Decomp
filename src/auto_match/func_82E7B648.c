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
//BODY
typedef struct VO_82E7B648 { void (**vt)(struct VO_82E7B648 *); } VO_82E7B648;
typedef struct Obj_82E7B648 {
  void *vt;
  int f4;
  VO_82E7B648 *f8;
  VO_82E7B648 *fc;
  int f10[4];
  VO_82E7B648 *f20;
} Obj_82E7B648;

extern void fn_82E72FB8(void *);
extern char lbl_8215F058[];

void fn_82E7B648(Obj_82E7B648 *p)
{
  p->vt = lbl_8215F058;
  if (p->f20 != 0) {
    p->f20->vt[2](p->f20);
    p->f20 = 0;
  }
  if (p->fc != 0) {
    p->fc->vt[2](p->fc);
    p->fc = 0;
  }
  if (p->f8 != 0) {
    p->f8->vt[2](p->f8);
    p->f8 = 0;
  }
  fn_82E72FB8(p->f10);
}
