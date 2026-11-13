extern int fn_8265C9E0();
extern unsigned int lbl_821BE9C4;
extern unsigned int lbl_821BEA3C;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83297724;


unsigned int * fn_8248A420(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  puVar2 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821BEA3C;
    puVar2[2] = 1;
    if (puVar2 + 3 != (unsigned int *)0x0) {
      puVar2[7] = iVar1;
      puVar2[3] = &lbl_821BE9C4;
      puVar2[4] = ltcg_pool_0_0f;
      puVar2[5] = lbl_83297724;
      lbl_83297724 = lbl_83297724 + 1;
      if (*(int *)(iVar1 + 0x20) == *(int *)(iVar1 + 0x24)) {
        iVar3 = *(int *)(iVar1 + 0x30);
        *(int *)(iVar1 + 0x30) = iVar3 + 1;
      }
      else {
        iVar3 = *(int *)(*(int *)(iVar1 + 0x24) + -4);
        if (*(int *)(iVar1 + 0x20) != *(int *)(iVar1 + 0x24)) {
          *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -4;
        }
      }
      puVar2[6] = iVar3;
    }
  }
  param_1[1] = puVar2;
  *param_1 = puVar2 + 3;
  return param_1;
}

