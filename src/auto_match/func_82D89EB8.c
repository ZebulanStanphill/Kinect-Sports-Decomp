extern int fn_82CEF0B8();
extern int fn_82CFF928();
extern int fn_82D93550();
extern char lbl_8323CF30[];
extern char lbl_8323E200[];
struct Ar_82D89EB8;
typedef struct {
  int p0[3];
  void (*f0c)(struct Ar_82D89EB8 *, const char *, void *, int);
  int p1;
  void (*f14)(struct Ar_82D89EB8 *, int, const char *, void *, int, int);
} ArVt_82D89EB8;
typedef struct Ar_82D89EB8 { ArVt_82D89EB8 *vt; } Ar_82D89EB8;
typedef struct { void *a; unsigned short b; unsigned short c; } Lst_82D89EB8;
typedef struct { Lst_82D89EB8 act; Lst_82D89EB8 ent; } Ext_82D89EB8;
typedef struct {
  char pad0[0xb4];
  void *a_b4; int a_b8; int a_bc;
  char pad1[0x1f8 - 0xc0];
  void *a_1f8; char pad2[4]; void *a_200; unsigned short a_204; unsigned short a_206;
  char pad3[0x214 - 0x208];
  Ext_82D89EB8 *a_214;
} Obj_82D89EB8;

void fn_82D89EB8(Obj_82D89EB8 *o, Ar_82D89EB8 *ar)
{
  Ext_82D89EB8 *x;
  ar->vt->f14(ar, 3, "constraintsSlave", o->a_b4, o->a_b8 << 2, o->a_bc << 2);
  fn_82CEF0B8(o, lbl_8323CF30, ar);
  if ((o->a_206 & 0x8000) == 0) {
    ar->vt->f14(ar, 3, "CollisionListnr", o->a_200, o->a_204 << 2, (o->a_206 & 0x3fff) << 2);
  }
  if (o->a_214 != 0) {
    fn_82CFF928(ar, "ExtendedListenersStruct", o->a_214, 0x10, 0);
    x = o->a_214;
    if ((x->ent.c & 0x8000) == 0) {
      ar->vt->f14(ar, 3, "EntityListeners", x->ent.a, x->ent.b << 2, (x->ent.c & 0x3fff) << 2);
    }
    x = o->a_214;
    if ((x->act.c & 0x8000) == 0) {
      ar->vt->f14(ar, 3, "ActivatonListners", x->act.a, x->act.b << 2, (x->act.c & 0x3fff) << 2);
    }
  }
  ar->vt->f0c(ar, "SavedMotion", o->a_1f8, 0);
  fn_82D93550(o, ar, lbl_8323E200);
}
