extern unsigned int lbl_8200E4B0;
extern unsigned int lbl_8200E530;


void fn_8268F3D8(int param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
  
  uVar1 = param_2 >> 5;
  uVar5 = (param_2 + param_3) - 1;
  uVar2 = uVar5 >> 5;
  uVar3 = (unsigned __int64)uVar5 & 0x1f;
  if (uVar1 < uVar2) {
    uVar5 = uVar1 + 1;
    *(unsigned int *)(uVar1 * 4 + param_1) =
         *(unsigned int *)(&lbl_8200E4B0 + (param_2 & 0x1f) * 4) & *(unsigned int *)(uVar1 * 4 + param_1);
    if (uVar5 < uVar2) {
      puVar4 = (unsigned int *)(uVar5 * 4 + param_1 + -4);
      for (iVar6 = uVar2 - uVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar4 = puVar4 + 1;
        *puVar4 = 0;
      }
    }
    uVar5 = *(unsigned int *)(&lbl_8200E530 + (int)(uVar3 << 2));
    uVar1 = uVar2;
  }
  else {
    uVar5 = *(unsigned int *)(&lbl_8200E4B0 + (param_2 & 0x1f) * 4) |
            *(unsigned int *)(&lbl_8200E530 + (int)(uVar3 << 2));
  }
  *(unsigned int *)(uVar1 * 4 + param_1) = uVar5 & *(unsigned int *)(uVar1 * 4 + param_1);
  return;
}

