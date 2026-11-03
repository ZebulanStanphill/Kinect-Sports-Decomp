typedef struct Vt_82D81950 {
  void *f0[3];
  int (*fc)(void *, int, int);
  void *f10;
  int (*f14)(void *, int);
} Vt_82D81950;
typedef struct Obj_82D81950 { Vt_82D81950 *vt; } Obj_82D81950;
typedef struct Self_82D81950 {
  char pad[0x5c];
  Obj_82D81950 *sub;
  char flag;
} Self_82D81950;
extern int fn_82DA86A0(int);

int fn_82D81950(Self_82D81950 *p, int a, int b)
{
  int r;

  r = fn_82DA86A0(*(int *)((char *)p + 8));
  if (r == 0) {
    if (p->sub != 0) {
      if (p->flag != 0) {
        p->sub->vt->fc(p->sub, a, b);
        return 0;
      }
      p->sub->vt->f14(p->sub, 0);
    }
    r = 0;
  }
  return r;
}
