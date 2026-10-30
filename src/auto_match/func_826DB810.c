struct Tgt_826DB810;
typedef struct TgtVT_826DB810 { char pad[0x40]; void *(*f40)(struct Tgt_826DB810 *); } TgtVT_826DB810;
typedef struct Tgt_826DB810 { TgtVT_826DB810 *vt; char pad[0x1c]; struct { char pad[0x28]; int f28; } *f20; } Tgt_826DB810;
typedef struct Sub_826DB810 { char a[0xc]; char cs[0x20]; } Sub_826DB810;
typedef struct Tail_826DB810 { int f7c; void *f80; void *f84; int f88; unsigned char f8c; } Tail_826DB810;
typedef struct Head_826DB810 { struct Tgt_826DB810 *fc; int f10; } Head_826DB810;
typedef struct Obj_826DB810 {
  void *vt;
  int ref;
  void *f8;
  Tgt_826DB810 *fc;
  int f10;
  int f14;
  Sub_826DB810 s18;
  int f44;
  int f48, f4c, f50;
  char sub54[0x1c];
  int f70, f74, f78, f7c;
  void *f80;
  void *f84;
  int f88;
  unsigned char f8c;
} Obj_826DB810;
extern char lbl_8200C69C[];
extern char *lbl_831E7E64;
extern void fn_8267C4C8(void *);
extern void fn_8267C4F0(void *);
extern void fn_826F3030(void *, void *);
extern void fn_8267ADA8(void *, int);
extern void *fn_8267B890(char *, int, int);
extern void *fn_826D8C80(void);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

Obj_826DB810 *fn_826DB810(Obj_826DB810 *o, void *a, Tgt_826DB810 *b, int c, int d, unsigned char flag)
{
  void *r;
  Sub_826DB810 *sp;
  Head_826DB810 *h = (Head_826DB810 *)&o->fc;
  Tail_826DB810 *t = (Tail_826DB810 *)&o->f7c;
  o->f8 = a;
  o->ref = 1;
  o->vt = lbl_8200C69C;
  if (b != 0) {
    fn_8267C4C8(b);
  }
  h->fc = b;
  h->f10 = c;
  sp = &o->s18;
  fn_826F3030(sp, a);
  r = 0;
  o->f48 = 0;
  o->f4c = 0;
  o->f50 = 0;
  fn_8267ADA8(o->sub54, 0);
  o->f70 = 0;
  o->f74 = 0;
  o->f78 = 0;
  o->f80 = 0;
  RtlEnterCriticalSection(sp->cs);
  o->f44 = c;
  RtlLeaveCriticalSection(sp->cs);
  t->f8c = 0;
  t->f84 = 0;
  t->f88 = 0;
  o->f14 = d;
  t->f7c = 0;
  if (fn_8267B890(lbl_831E7E64, 0x24, 0) != 0) {
    r = fn_826D8C80();
  }
  if (o->f80 != 0) {
    fn_8267C4F0(o->f80);
  }
  o->f80 = r;
  if (flag != 0) {
    o->f84 = o->fc->vt->f40(o->fc);
    o->f88 = o->fc->f20->f28;
  }
  return o;
}
