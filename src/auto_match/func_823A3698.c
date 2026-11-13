extern int fn_8229EEA0();
extern int fn_822A0E10();
extern int fn_82399BA0();
extern int fn_8239D1D0();
extern int fn_82490FC8();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_823A3698(int param_1)

{
  float fVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  fn_8229EEA0(*(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xd4) + 0x10));
  iVar4 = fn_82399BA0(*(unsigned int *)(param_1 + 8));
  if (iVar4 == 0) {
    fn_822A0E10(*(unsigned int *)(*(int *)(param_1 + 8) + 0xd4),1);
  }
  fn_8239D1D0(*(unsigned int *)(param_1 + 8));
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x2dc);
  fVar1 = *(float *)(iVar4 + 0x138);
  if (ltcg_pool_0_0f < fVar1) {
    iVar2 = *(int *)(iVar4 + 0x40);
    if (*(int *)(iVar2 + 4) != 0) {
      *(unsigned int *)(iVar2 + 0x1cc) = *(unsigned int *)(iVar4 + 0x13c);
      *(float *)(iVar2 + 0x1d0) = fVar1;
      *(unsigned int *)(iVar2 + 0x1d4) = 1;
      uVar3 = lbl_821CA460;
      *(unsigned int *)(iVar2 + 0x1d8) = lbl_821917B0;
      *(unsigned int *)(iVar2 + 0x1dc) = uVar3;
      *(unsigned int *)(iVar2 + 0x1e0) = uVar3;
    }
  }
  fn_82490FC8(*(unsigned int *)(*(int *)(param_1 + 8) + 0x94));
  return;
}

