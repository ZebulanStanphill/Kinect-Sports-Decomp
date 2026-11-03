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
typedef struct { int *b; int *e; int *c; } Vec_8251CDF8;
typedef struct { int m0, m4, m8, mc, m10, m14, m18, m1c; Vec_8251CDF8 v; } Obj_8251CDF8;
extern void fn_822314E8(void *);
extern void fn_82231540(void *, void *);
extern void fn_8251CC50(int, int);
extern Obj_8251CDF8 *fn_8251DC28(void *);
extern void fn_825269D0(int, unsigned);
extern void *fn_8265C9E0(int);
extern void fn_8265CA20(void *);
extern unsigned lbl_832960A0[];

int fn_8251CDF8(unsigned a, unsigned *p2, int c, Vec_8251CDF8 *p4)
{
  void *m;
  Obj_8251CDF8 *o;
  Obj_8251CDF8 *old;
  Vec_8251CDF8 *v;
  if (a != 0) {
    fn_825269D0(0xf, a);
  }
  if (*p2 != 0) {
    lbl_832960A0[6] = lbl_832960A0[6] + 1;
    lbl_832960A0[7] = 0;
    lbl_832960A0[8] = 0;
  }
  if (lbl_832960A0[0] != 0) {
    fn_8251CC50(1, 1);
    lbl_832960A0[0] = 0;
  }
  lbl_832960A0[0] = *p2;
  fn_825269D0(0x10, 0);
  m = fn_8265C9E0(0x30);
  o = m ? fn_8251DC28(m) : 0;
  old = *(Obj_8251CDF8 **)&lbl_832960A0[0x3a];
  *(Obj_8251CDF8 **)&lbl_832960A0[0x3a] = o;
  if (old != 0) {
    fn_822314E8(&old->v);
    fn_8265CA20(old);
  }
  (*(Obj_8251CDF8 **)&lbl_832960A0[0x3a])->m0 = a;
  (*(Obj_8251CDF8 **)&lbl_832960A0[0x3a])->m4 = 0;
  (*(Obj_8251CDF8 **)&lbl_832960A0[0x3a])->m8 = 0;
  (*(Obj_8251CDF8 **)&lbl_832960A0[0x3a])->mc = 0;
  (*(Obj_8251CDF8 **)&lbl_832960A0[0x3a])->m10 = c;
  v = &(*(Obj_8251CDF8 **)&lbl_832960A0[0x3a])->v;
  if (v != p4) {
    if (v->b != 0) {
      fn_82231540(v->b, v->e);
      fn_8265CA20(v->b);
    }
    v->b = 0;
    v->e = 0;
    v->c = 0;
    v->b = p4->b;
    v->e = p4->e;
    v->c = p4->c;
    p4->b = 0;
    p4->e = 0;
    p4->c = 0;
  }
  (*(Obj_8251CDF8 **)&lbl_832960A0[0x3a])->m1c = 1;
  (*(Obj_8251CDF8 **)&lbl_832960A0[0x3a])->m18 = 1;
  fn_822314E8(p4);
  return 1;
}
