extern int fn_8263FB88();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8248B6D8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  puVar4 = (unsigned int *)fn_8263FB88(param_1,0xd,4,0x10);
  uVar3 = ltcg_pool_0_0f;
  uVar2 = lbl_821CA460;
  uVar1 = lbl_82192734;
  *puVar4 = lbl_82192734;
  puVar4[1] = uVar2;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  puVar4[4] = uVar2;
  puVar4[5] = uVar2;
  puVar4[6] = uVar3;
  puVar4[7] = uVar3;
  puVar4[8] = uVar2;
  puVar4[9] = uVar1;
  puVar4[10] = uVar3;
  puVar4[0xb] = uVar2;
  puVar4[0xc] = uVar1;
  puVar4[0xd] = uVar1;
  puVar4[0xe] = uVar2;
  puVar4[0xf] = uVar2;
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x3554);
  return;
}

