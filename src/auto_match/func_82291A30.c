typedef struct Tgt_82291A30 { char pad[0x19c]; int f19c; } Tgt_82291A30;
typedef struct Holder_82291A30 { Tgt_82291A30 *t; } Holder_82291A30;
typedef struct Blk_82291A30 { char pad[0xc]; void *fc; } Blk_82291A30;
typedef struct Obj_82291A30 {
  void *vt;
  char pad4[0x38];
  int f3c;
  void *f40;
  char *f44;
  char f48[4];
  void *f4c;
  void *f50;
  void *f54;
  void *f58;
  void *f5c;
  void *f60;
  void *f64;
  void *f68;
  void *f6c;
  void *f70;
  void *f74;
  Blk_82291A30 *f78;
} Obj_82291A30;
extern char lbl_821AA2D0[];
extern char lbl_820E975C[];
extern int lbl_82193A20[];
extern int lbl_8326B370[];
extern void fn_822315A0(void *);
extern void fn_82291F90(Obj_82291A30 *, unsigned int, int, int, int);
extern void fn_82292100(Obj_82291A30 *, unsigned int, int, int, char *, int);
extern void fn_82292450(void *, int);
extern Holder_82291A30 *fn_82555A88(char *, int);
extern void fn_8265CA20(void *);
extern int fn_8266F6B8();
extern void fn_8229AA08(Obj_82291A30 *);
extern void fn_822A3D80(void *);

void fn_82291A30(Obj_82291A30 *o)
{
  unsigned int i;
  int n;
  int *p;
  Holder_82291A30 *h;
  Blk_82291A30 *b;

  o->vt = lbl_821AA2D0;
  i = 1;
  do {
    fn_82292100(o, i, 0, 0, lbl_820E975C, fn_8266F6B8());
    fn_82291F90(o, i, 0, 0, fn_8266F6B8());
    i = i + 1;
  } while (i <= 3);
  if (o->f44 != 0) {
    n = 4;
    p = lbl_82193A20;
    do {
      if (o->f3c != 0) {
        h = fn_82555A88(o->f44 + 0x98, *p);
        if (h != 0 && h->t != 0) {
          h->t->f19c = lbl_8326B370[9];
        }
      }
      p = p + 1;
      n = n - 1;
    } while (n != 0);
  }
  b = o->f78;
  if (b != 0) {
    if (b->fc != 0) {
      fn_822315A0(b->fc);
    }
    fn_8265CA20(b);
  }
  if (o->f74 != 0) {
    fn_82292450(o->f74, 1);
  }
  if (o->f70 != 0) {
    fn_82292450(o->f70, 1);
  }
  if (o->f6c != 0) {
    fn_82292450(o->f6c, 1);
  }
  if (o->f68 != 0) {
    fn_82292450(o->f68, 1);
  }
  if (o->f64 != 0) {
    fn_82292450(o->f64, 1);
  }
  if (o->f60 != 0) {
    fn_82292450(o->f60, 1);
  }
  if (o->f5c != 0) {
    fn_82292450(o->f5c, 1);
  }
  if (o->f58 != 0) {
    fn_82292450(o->f58, 1);
  }
  if (o->f54 != 0) {
    fn_82292450(o->f54, 1);
  }
  if (o->f50 != 0) {
    fn_82292450(o->f50, 1);
  }
  if (o->f4c != 0) {
    fn_82292450(o->f4c, 1);
  }
  fn_822A3D80(o->f48);
  if (o->f40 != 0) {
    fn_822315A0(o->f40);
  }
  fn_8229AA08(o);
}
