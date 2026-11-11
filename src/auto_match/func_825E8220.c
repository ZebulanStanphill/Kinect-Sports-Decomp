typedef struct Lock_825E8220 {
  int depth;
  int *target;
  void (*release)(void);
} Lock_825E8220;
extern int fn_82A1BB18(void);
extern void fn_8259C5D8(int *, int, int);
extern void fn_825E8280(void);

Lock_825E8220 *fn_825E8220(Lock_825E8220 *self, int *target)
{
  int depth = fn_82A1BB18() + 1;
  self->target = target;
  self->depth = depth;
  self->release = fn_825E8280;
  fn_8259C5D8(target, 0, depth);
  return self;
}
