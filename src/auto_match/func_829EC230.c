extern void fn_829EC538(void *);

typedef struct {
  int unk0;
  int v;
  int sub[2];
  int z;
} X;

int fn_829EC230(X *p, int v)
{
  fn_829EC538(&p->sub);
  p->v = v;
  p->z = 0;
  return v;
}
