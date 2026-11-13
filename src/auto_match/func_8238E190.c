extern int fn_8229EEA0();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8238E190(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  
  fn_8229EEA0(*(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xd4) + 0x10));
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x664);
  fVar1 = *(float *)(iVar2 + 0x200);
  if (ltcg_pool_0_0f < fVar1) {
    iVar3 = *(int *)(iVar2 + 0x1ec);
    if (*(int *)(iVar3 + 4) != 0) {
      *(unsigned int *)(iVar3 + 0x1cc) = *(unsigned int *)(iVar2 + 0x210);
      *(float *)(iVar3 + 0x1d0) = fVar1;
      *(unsigned int *)(iVar3 + 0x1d4) = 1;
      uVar4 = lbl_821CA460;
      *(unsigned int *)(iVar3 + 0x1d8) = lbl_821917B0;
      *(unsigned int *)(iVar3 + 0x1dc) = uVar4;
      *(unsigned int *)(iVar3 + 0x1e0) = uVar4;
    }
  }
  return;
}

