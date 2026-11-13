extern int fn_825603C8();
extern int fn_825605B0();
extern unsigned int lbl_83280B88[];


void fn_82463958(int param_1)

{
  if (*(int *)(param_1 + 0x1b0) == 0) {
    fn_825603C8(0,param_1 + 0x30,0);
    *(unsigned int *)(param_1 + 0x1b0) = 1;
    if (lbl_83280B88[4] != param_1 + 0x30) {
      fn_825605B0(0,"WorkCamera");
    }
  }
  return;
}

