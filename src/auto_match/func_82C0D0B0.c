struct Sub_82C0D0B0;
struct Obj_82C0D0B0;
typedef struct SubVt_82C0D0B0 {
  int pad[20];
  void (*f50)(struct Sub_82C0D0B0 *, unsigned __int64 *);
} SubVt_82C0D0B0;
typedef struct Sub_82C0D0B0 {
  SubVt_82C0D0B0 *vt;
} Sub_82C0D0B0;
typedef struct Vt_82C0D0B0 {
  int pad0[3];
  void (*fc)(struct Obj_82C0D0B0 *);
  int pad1;
  void (*f14)(struct Obj_82C0D0B0 *);
  int pad2[0x37];
  unsigned int (*ff4)(struct Obj_82C0D0B0 *);
  unsigned int (*ff8)(struct Obj_82C0D0B0 *);
} Vt_82C0D0B0;
typedef struct Obj_82C0D0B0 {
  Vt_82C0D0B0 *vt;
  int pad[10];
  Sub_82C0D0B0 *sub;
} Obj_82C0D0B0;

int fn_82C0D0B0(Obj_82C0D0B0 *o, unsigned int *a, unsigned int *b, unsigned int *c)
{
  unsigned __int64 v;
  o->vt->fc(o);
  if (a != 0) {
    *a = o->vt->ff4(o);
  }
  if (b != 0) {
    *b = o->vt->ff8(o);
  }
  o->vt->f14(o);
  if (c != 0) {
    o->sub->vt->f50(o->sub, &v);
    *c = (unsigned int)v;
  }
  return 0;
}
