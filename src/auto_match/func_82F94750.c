typedef struct Arg_func_82F94750 {
  int unk0;
  int unk4;
  int unk8;
} Arg_func_82F94750;

extern void fn_82F95C80(void *self, int value, Arg_func_82F94750 *arg);

void *fn_82F94750(void *self, Arg_func_82F94750 *arg)
{
  fn_82F95C80(self, arg->unk4, arg);
  return self;
}
