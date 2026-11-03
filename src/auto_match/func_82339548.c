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
extern void fn_822315A0(void *);
extern void *fn_82341008(void *, int, int, int);
extern void *fn_82346520(void *, void *, void *);
extern void *fn_82365BD8(void *, int);
extern void *fn_8265C9E0(int);
extern char lbl_821AD588[];
extern char lbl_821B1B20[];

typedef struct Rp { int a; void *rep; } Rp;
typedef struct Sub { void *vt; int x; int y; int z; void *obj; } Sub;
typedef struct P { void *vt; int a; int b; Sub s; } P;

P *fn_82339548(P *p, int p2, int p3, int p4, int p5)
{
  Sub *s;
  Rp t50, t48;
  Rp *r2, *r3;
  void *mem;
  void *obj;
  p->a = 1;
  p->vt = lbl_821AD588;
  p->b = 1;
  s = &p->s;
  if (s != 0) {
    r2 = (Rp *)fn_82365BD8(&t50, p5);
    r3 = (Rp *)fn_82365BD8(&t48, p4);
    fn_82341008(s, p2, p3, 6);
    s->vt = lbl_821B1B20;
    mem = fn_8265C9E0(0x5c);
    if (mem != 0) obj = fn_82346520(mem, r3, r2); else obj = 0;
    s->obj = obj;
    if (r3->rep != 0) fn_822315A0(r3->rep);
    if (r2->rep != 0) fn_822315A0(r2->rep);
  }
  return p;
}
