extern int fn_82F54688();
extern unsigned int lbl_821AAD20;


void fn_82F547C8(int param_1)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  __int64 lVar3;
  double dVar4;
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  
  dVar4 = (double)lbl_821AAD20;
  *(float *)(param_1 + 4) = lbl_821AAD20;
  fn_82F54688(param_1 + 0x40);
  *(float *)(param_1 + 0x10) = (float)dVar4;
  iVar2 = param_1 + 0x20;
  *(unsigned char *)(param_1 + 8) = 0;
  lVar3 = 2;
  do {
    puVar1 = (unsigned int *)(in_r0 + iVar2 & 0xfffffff0);
    *puVar1 = in_register_00010000;
    puVar1[1] = in_ACC;
    puVar1[2] = in_register_00010008;
    puVar1[3] = in_vr0;
    iVar2 = iVar2 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

