typedef struct Arg_func_82F8F328 {
  int unk0;
  int unk4;
  int unk8;
} Arg_func_82F8F328;

extern void fn_82F8FBE0(void *self, int value, Arg_func_82F8F328 *arg);

void *fn_82F8F328(void *self, Arg_func_82F8F328 *arg)
{
  fn_82F8FBE0(self, arg->unk8, arg);
  return self;
}
