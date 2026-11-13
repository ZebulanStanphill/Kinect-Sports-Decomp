extern int fn_82A3FF60();
extern int fn_82A44370();
extern int fn_82A443F0();
extern int fn_82A4F4E0();
extern int fn_82BFE128();
extern int fn_82F68CC0();


__int64 fn_82A485F8(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  __int64 lVar1;
  
  (**(int (***)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
  fn_82A443F0(param_1);
  iVar2 = fn_82A3FF60(0xffffffff83219d50,0x24,0x20970002,0);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    fn_82F68CC0(iVar2,param_2,0x24);
  }
  if (iVar2 != 0) {
    if (((*(int *)(iVar2 + 0x1c) != 0) && (*(int *)(iVar2 + 0x18) == 0)) &&
       (*(int *)(iVar2 + 0x10) != 0)) {
      *(int *)(iVar2 + 0x18) =
           (*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 0x14)) + *(int *)(iVar2 + 0x10);
    }
    lVar1 = fn_82BFE128(*(unsigned int *)(param_1 + 0x1ec),iVar2);
    if (lVar1 < 0) {
      fn_82A4F4E0(iVar2);
      goto LAB_82a48704;
    }
    iVar2 = fn_82A44370(param_1 + 0x94,*(unsigned int *)(iVar2 + 0x20));
    if (iVar2 != 0) {
      lVar1 = (**(int (***)())(**(int **)(param_1 + 0x90) + 0x34))(*(int **)(param_1 + 0x90),0x100);
      goto LAB_82a48704;
    }
  }
  lVar1 = -0x7ff8fff2;
LAB_82a48704:
  (**(int (***)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c);
  return lVar1;
}

