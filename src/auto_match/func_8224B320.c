typedef struct { void *px; int *rep; } SP_8224B320;
extern unsigned char fn_8223AAC0(int *);
extern int fn_8224B7A0(void *, SP_8224B320 *, SP_8224B320 *, SP_8224B320 *, SP_8224B320 *, SP_8224B320 *, SP_8224B320 *);
extern char lbl_821AD588[];

static __forceinline void Lock_8224B320(SP_8224B320 *d, SP_8224B320 *s)
{
  int *rep = s->rep;
  void *px = s->px;
  d->px = 0;
  d->rep = 0;
  if (rep != 0 && fn_8223AAC0(rep) != 0) {
    d->rep = rep;
    d->px = px;
  }
}

unsigned int *fn_8224B320(unsigned int *self, SP_8224B320 *p2, SP_8224B320 *p3, SP_8224B320 *p4,
                          SP_8224B320 *p5, SP_8224B320 *p6, SP_8224B320 *p7)
{
  SP_8224B320 l[6];
  void *obj;

  self[1] = 1;
  self[0] = (unsigned int)lbl_821AD588;
  self[2] = 1;
  obj = self + 3;
  if (obj != 0) {
    Lock_8224B320(&l[0], p7);
    Lock_8224B320(&l[1], p6);
    Lock_8224B320(&l[2], p5);
    Lock_8224B320(&l[3], p4);
    Lock_8224B320(&l[4], p3);
    Lock_8224B320(&l[5], p2);
    fn_8224B7A0(obj, &l[5], &l[4], &l[3], &l[2], &l[1], &l[0]);
  }
  return self;
}
