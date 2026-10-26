typedef unsigned int (*code)(void *);

unsigned int fn_827F3AB0(int *param_1)
{
  return ((*(code *)(*param_1 + 0x10))(param_1) + 0xf) & 0xfffffff0;
}
