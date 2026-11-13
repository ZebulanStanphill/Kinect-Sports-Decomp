extern int fn_826824B0();
extern int fn_826C2EA0();
extern unsigned int lbl_82010454;


void fn_82721C28(int param_1)

{
  if (((*(unsigned char *)(param_1 + 0x50) & 2) == 0) && (*(int *)(param_1 + 0x48) != 0)) {
    fn_826824B0();
  }
  *(int *)(param_1 + 0x48) = 0;
  if (((*(unsigned char *)(param_1 + 0x50) & 1) == 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    fn_826824B0();
  }
  *(unsigned int *)(param_1 + 0x4c) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_826824B0();
  }
  *(unsigned char ***)(param_1 + 0x34) = &lbl_82010454;
  fn_826C2EA0(param_1);
  return;
}

