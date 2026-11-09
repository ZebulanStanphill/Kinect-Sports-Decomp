typedef struct Arg_func_82F8F608 {
  int unk0;
  int unk4;
  int unk8;
} Arg_func_82F8F608;

extern void fn_82F8FBE0(void *self, int value, Arg_func_82F8F608 *arg);

void *fn_82F8F608(void *self, Arg_func_82F8F608 *arg)
{
  fn_82F8FBE0(self, arg->unk4, arg);
  return self;
}
