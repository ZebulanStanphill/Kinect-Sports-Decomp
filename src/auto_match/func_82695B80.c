typedef struct { int pad0; int pad4; unsigned int cnt; } Rc_82695B80;
typedef struct { Rc_82695B80 *p; unsigned int q; unsigned char flag; } Sub_82695B80;
typedef struct { int *vt; int a; int b; int pad; Sub_82695B80 s1; Sub_82695B80 s2; } Obj_82695B80;
extern int fn_826C3378(Sub_82695B80 *, unsigned int, int);
extern unsigned int lbl_82006138;

static __forceinline void SubCopy_82695B80(Sub_82695B80 *d, Sub_82695B80 *s)
{
  Rc_82695B80 *r;
  d->flag = 0;
  r = s->p;
  d->p = r;
  if (r != 0) {
    r->cnt = (r->cnt + 1) & 0x8fffffff;
  }
  d->q = 0;
  if (s->q != 0) {
    fn_826C3378(d, s->q, s->flag & 1);
  }
}

Obj_82695B80 *fn_82695B80(Obj_82695B80 *param_1, int param_2, Sub_82695B80 *param_3, Sub_82695B80 *param_4)
{
  param_1->a = param_2;
  param_1->vt = (int *)&lbl_82006138;
  param_1->b = 1;
  SubCopy_82695B80(&param_1->s1, param_3);
  SubCopy_82695B80(&param_1->s2, param_4);
  return param_1;
}
