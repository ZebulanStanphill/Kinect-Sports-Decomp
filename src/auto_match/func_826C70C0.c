extern int fn_8267C498();
extern int fn_826992B8();
extern int fn_8269D548();
typedef unsigned char (*bfn)(int *);

void fn_826C70C0(int *param_1,unsigned int *param_2)

{
  if (param_1 != (int *)0x0) {
    param_1[1] = param_1[1] + 1;
  }
  if ((*param_2 == 8) && (*(unsigned int *)(param_1[0x28] + 0x9d4) > 0)) {
    fn_8269D548(param_1);
  }
  if ((*(bfn *)(*param_1 + 8))(param_1)) {
    fn_826992B8(param_1 + 0x2a,param_2);
    (*(int (**)())(*param_1 + 0x6c))(param_1,param_2);
  }
  fn_8267C498(param_1);
  return;
}
