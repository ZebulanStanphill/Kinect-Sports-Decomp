extern int fn_82A3FF60();
extern int fn_82A44370();
extern int fn_82A443F0();
extern int fn_82A4F4E0();
extern int fn_82BFE128();


__int64 fn_82A464E8(int param_1,unsigned int *param_2,int *param_3)

{
  unsigned int *puVar2;
  __int64 lVar1;
  int iVar3;
  
  (**(int (***)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
  fn_82A443F0(param_1);
  puVar2 = (unsigned int *)fn_82A3FF60(0xffffffff83219d50,0x24,0x20970002,0);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    iVar3 = param_2[3] * *(int *)(param_1 + 0x40);
    puVar2[3] = iVar3 * 2;
    if (param_2[4] == 0) {
      if (param_2[7] == 0) {
        iVar3 = *(int *)(param_3[1] * 4 + *param_3 + -4) + iVar3 * -2;
      }
      else {
        iVar3 = *(int *)(param_3[1] * 4 + *param_3 + -4);
      }
    }
    else {
      iVar3 = param_2[4] * *(int *)(param_1 + 0x40) * 2;
    }
    puVar2[4] = iVar3;
    puVar2[5] = param_2[7];
    puVar2[6] = param_2[8];
    puVar2[7] = *param_3;
    puVar2[8] = param_3[1];
    lVar1 = fn_82BFE128(*(unsigned int *)(param_1 + 0x268),puVar2);
    if (lVar1 < 0) {
      fn_82A4F4E0(puVar2);
      goto LAB_82a46648;
    }
    iVar3 = fn_82A44370(param_1 + 0x94,param_2[8]);
    if (iVar3 != 0) {
      lVar1 = (**(int (***)())(**(int **)(param_1 + 0x90) + 0x34))(*(int **)(param_1 + 0x90),0x100);
      goto LAB_82a46648;
    }
  }
  lVar1 = -0x7ff8fff2;
LAB_82a46648:
  (**(int (***)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c);
  return lVar1;
}

