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
extern void fn_82FA5190(void *, void *);
extern void fn_83008310(void *);
extern void fn_830280E8(void);
extern void *lbl_8217C60C;
extern void *lbl_831BC768;

typedef struct Ent_83028730 { void *a; int b; int c; } Ent_83028730;
typedef struct Obj_83028730 {
  void *vt; char pad[0x1c];
  Ent_83028730 e[5];
  int pad2[2]; void *p; void *q; int r;
} Obj_83028730;

static void clr(Ent_83028730 *e) {
    if (e->a != 0) {
      fn_82FA5190(lbl_831BC768, e->a);
      e->a = 0;
    }
    e->b = 0;
    e->c = 0;
}
void fn_83028730(Obj_83028730 *o)
{
  Ent_83028730 *e;
  int i;
  o->vt = &lbl_8217C60C;
  fn_830280E8();
  if (o->p != 0) {
    o->q = o->p;
    fn_82FA5190(lbl_831BC768, o->p);
    o->p = 0;
    o->q = 0;
    o->r = 0;
  }
  for (i = 0; i < 5; i++) clr(&o->e[i]);
  fn_83008310(o);
}
