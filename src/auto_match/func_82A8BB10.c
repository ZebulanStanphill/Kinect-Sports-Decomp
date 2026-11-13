extern int fn_82A8BA40();
extern int fn_82A8BAA0();
extern int fn_82F691F0();
extern unsigned int lbl_82027070;


void fn_82A8BB10(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  __int64 lVar4;
  
  lVar4 = 1;
  iVar3 = param_1 + 4;
  do {
    fn_82A8BAA0(iVar3);
    lVar4 = lVar4 + -1;
    iVar3 = iVar3 + 0x2bec;
  } while (-1 < lVar4);
  fn_82A8BA40(param_1 + 0x57dc);
  *(unsigned int *)(param_1 + 0x5920) = 0;
  puVar2 = (unsigned int *)(param_1 + 0x5924);
  *(unsigned int *)(param_1 + 0x5924) = 0;
  lVar4 = 5;
  do {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    *puVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(unsigned int *)(param_1 + 0x5988) = param_2;
  *(unsigned int *)(param_1 + 0x598c) = param_3;
  *(unsigned int *)(param_1 + 0x5964) = 0;
  *(unsigned int *)(param_1 + 0x5974) = 0;
  *(unsigned int *)(param_1 + 0x5978) = 0;
  uVar1 = lbl_82027070;
  *(unsigned int *)(param_1 + 0x597c) = 0;
  *(unsigned int *)(param_1 + 0x5968) = uVar1;
  *(unsigned int *)(param_1 + 0x5980) = 0;
  *(unsigned int *)(param_1 + 0x5984) = 0;
  *(unsigned int *)(param_1 + 0x5970) = 0;
  *(unsigned int *)(param_1 + 0x596c) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1,0,0x2bec);
}

