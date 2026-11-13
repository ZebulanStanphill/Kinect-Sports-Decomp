extern int fn_825604A0();
extern int fn_82566E58();


void fn_8238A7E0(int param_1)

{
  *(unsigned int *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 400) != 0) {
    fn_82566E58(*(int *)(param_1 + 400),*(unsigned int *)(*(int *)(param_1 + 8) + 0x9b4));
    *(unsigned int *)(param_1 + 400) = 0;
    fn_825604A0(param_1 + 0x10);
  }
  return;
}

