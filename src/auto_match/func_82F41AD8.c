extern void fn_82E4FE40(void *p);

typedef struct {
  char pad[0x34];
  unsigned short s34;
  short pad36;
  void *p38;
} S;

void fn_82F41AD8(S *o)
{
  if (o->p38 != 0) {
    fn_82E4FE40(o->p38);
  }
  o->p38 = 0;
  o->s34 = 0;
}
