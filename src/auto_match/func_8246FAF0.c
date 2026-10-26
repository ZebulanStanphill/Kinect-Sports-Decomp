typedef struct {
  char pad[0x308];
  int value;
  int flag;
} G;

extern G *lbl_832766D4;

int fn_8246FAF0(int *p)
{
  G *g;
  *p = 0;
  g = lbl_832766D4;
  g->flag = 1;
  return g->value;
}
