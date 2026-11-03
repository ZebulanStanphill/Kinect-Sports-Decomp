typedef struct Obj_8272FDD0 Obj_8272FDD0;
typedef struct Vt_8272FDD0 {
  char pad0[0x40];
  int (*f40)(Obj_8272FDD0 *);
  char pad1[0x154 - 0x44];
  void (*f154)(Obj_8272FDD0 *, int, int);
} Vt_8272FDD0;
typedef struct C_8272FDD0 {
  int pad0;
  int pad00;
  int f8;
  char pad1[0x68 - 0xc];
  unsigned short pad2 : 14;
  unsigned short b1 : 1;
  unsigned short b0 : 1;
} C_8272FDD0;
typedef struct B_8272FDD0 { char pad0[8]; int f8; char pad1[0x114 - 0xc]; int f114; } B_8272FDD0;
typedef struct A_8272FDD0 {
  char pad[0x50];
  unsigned short pad2 : 10;
  unsigned short b5 : 1;
  unsigned short b4 : 1;
  unsigned short b3 : 1;
  unsigned short pad3 : 3;
} A_8272FDD0;
struct Obj_8272FDD0 {
  Vt_8272FDD0 *vt;
  char pad0[0x9c - 4];
  A_8272FDD0 *a;
  B_8272FDD0 *b;
  char pad1[0xc8 - 0xa4];
  unsigned short flags;
};
#define CC(x) ((C_8272FDD0 *)(x))
extern int fn_827912D8();
extern void fn_827A27B0();
extern void fn_8279C658();
extern void fn_827A2800();
extern void fn_8272CBE8();
extern void fn_8269F918();
extern void fn_8272F9D8();

void fn_8272FDD0(Obj_8272FDD0 *p, int a2, int a3, int a4)
{
  int c;
  int r;
  unsigned o;
  unsigned char t;

  c = p->b->f114;
  if (c != 0) {
    t = (unsigned char)CC(c)->b1;
  } else {
    t = (unsigned char)p->a->b5;
  }
  if (t != 0) {
    if (a2 == 1) {
      if (((unsigned char)(p->flags >> 10) & 1) == 0 && a4 != 1) {
        r = fn_827912D8(p->b->f8);
        p->vt->f154(p, 0, r);
      }
      if (p->b->f114 == 0) goto L1;
      fn_827A27B0(p->b->f114);
    } else {
      if (a2 != 0 || c == 0) goto L1;
      if (((unsigned char)(p->flags >> 9) & 1) == 0) {
        fn_8279C658(CC(c)->f8, 0, 0);
      }
      fn_827A2800(p->b->f114);
    }
    o = (unsigned)p->vt->f40(p);
    if (o != 0) {
      *(unsigned *)(o + 0xb00) = *(unsigned *)(o + 0xb00) | 0x400;
    }
  }
L1:
  c = p->b->f114;
  if (c != 0) {
    t = (unsigned char)CC(c)->b0;
  } else {
    t = (unsigned char)p->a->b3;
  }
  if (t != 0) {
    if (c != 0) {
      t = (unsigned char)CC(c)->b1;
    } else {
      t = (unsigned char)p->a->b5;
    }
    if (t == 0) {
      return;
    }
  }
  if (a2 == 1) {
    fn_8272CBE8(p, 1, 1);
  }
  fn_8269F918(p, a2, a3, a4);
  if (p->b->f114 != 0 && CC(p->b->f114)->b0 == 0) {
    p->flags = p->flags | 0x4000;
    o = (unsigned)p->vt->f40(p);
    fn_8272F9D8(p, o);
  }
}
