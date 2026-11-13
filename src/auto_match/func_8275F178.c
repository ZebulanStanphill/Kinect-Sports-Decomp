typedef struct Obj_8275F178 Obj_8275F178;
typedef struct { void *pad[9]; char *(*f24)(Obj_8275F178 *, int *); } Vt_8275F178;
struct Obj_8275F178 {
  Vt_8275F178 *vt;
  char pad4[0x20];
  unsigned char flags;
};
typedef struct { char pad[0xc]; unsigned a; unsigned b; int c; } Q_8275F178;
typedef struct {
  char pad[0x18];
  unsigned count;
  char pad1c[8];
  Q_8275F178 **items;
} Arg_8275F178;
int fn_8275F178(Obj_8275F178 *param_1, Arg_8275F178 *param_2)
{
  int ret = -1;
  if ((param_1->flags & 0x40) != 0 && param_2->count == 1) {
    Q_8275F178 *q = *param_2->items;
    unsigned b = q->b;
    unsigned a = q->a;
    if (((int)a < 0) != ((int)b < 0) && q->c < 0) {
      unsigned idx = b;
      int n;
      char *tbl;
      unsigned char c;
      unsigned char ok;
      if ((int)a >= 0) idx = a;
      ret = idx;
      n = 0;
      tbl = param_1->vt->f24(param_1, &n);
      if ((int)idx < n) {
        c = tbl[idx * 0x28];
        ok = (c == 65 || c == 67);
        if (!ok) ret = -1;
      }
    }
  }
  return ret;
}
