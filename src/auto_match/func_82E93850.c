extern int fn_82E915E0();
extern int fn_82E91630();
extern int fn_82F00330();


unsigned __int64 fn_82E93850(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x4f20) == 0) || (*(int *)(param_1 + 0xaf0) == 0)) {
    *(unsigned int *)(param_1 + 0x76d0) = 0;
  }
  if (*(int *)(param_1 + 0x76d0) != 0) {
    if ((*(int *)(param_1 + 0x82c) == 1) && (*(int *)(param_1 + 0x7750) == 0)) {
      *(unsigned int *)(param_1 + 0x82c) = 0;
      *(unsigned __int64 *)(param_1 + 0x7740) = *(unsigned __int64 *)(param_1 + 0x7748);
    }
    uVar1 = *(unsigned int *)(param_1 + 0x300);
    fn_82E915E0(*(unsigned int *)(param_1 + 0x830),param_1 + 0x300,0);
    iVar2 = fn_82E91630(*(unsigned int *)(param_1 + 0x830),uVar1);
    if (iVar2 != 0) {
      return 0xffffffffffffff9c;
    }
    fn_82F00330(param_1);
    *(unsigned int *)(param_1 + 0x76d4) = 1;
  }
  return 0;
}

