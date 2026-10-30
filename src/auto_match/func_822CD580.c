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
extern int fn_822315A0(void *);
extern int fn_822B5CE8(void *);
extern int fn_82359C18(void *);
extern unsigned int lbl_821AD4D4;
extern unsigned int lbl_821C7FB8;
typedef struct Sub_822CD580 { void *vt; int pad; int member[1]; } Sub_822CD580;
typedef struct Obj_822CD580 { void *vt; char pad0[0x1a8]; void *p1ac; char pad1[4]; void *p1b4; char pad2[0x1a0]; Sub_822CD580 sub; } Obj_822CD580;

void fn_822CD580(Obj_822CD580 *p)
{
  Sub_822CD580 *s;
  p->vt = &lbl_821AD4D4;
  s = &p->sub;
  fn_82359C18(&s->member);
  s->vt = &lbl_821C7FB8;
  if (p->p1b4 != 0) {
    fn_822315A0(p->p1b4);
  }
  if (p->p1ac != 0) {
    fn_822315A0(p->p1ac);
  }
  fn_822B5CE8(p);
}
