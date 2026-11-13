#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82AF87E0();


void fn_82AFA478(int param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  if (10 < param_3) {
    return;
  }
  if ((*(unsigned int *)(param_1 + 0x28) & 0x2000000) == 0) {
    return;
  }
  if ((*(unsigned int *)(param_2 + 0x14) & 1) != 0) {
    return;
  }
  *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(param_2 + 0x14) | 1;
  puVar1 = *(unsigned int **)(param_1 + 0x290);
  if ((puVar1[1] & 1) == 0) {
    uVar3 = *puVar1 & 0xfffffffe;
    iVar4 = uVar3 - 4;
    if ((iVar4 != 0) && (*(int *)(uVar3 + 4) + 1U <= *(unsigned int *)(uVar3 + 8))) goto LAB_82afa4f4;
  }
  iVar4 = fn_82AF87E0(puVar1,1);
LAB_82afa4f4:
  iVar2 = *(int *)(iVar4 + 8);
  *(int *)(iVar4 + 8) = iVar2 + 1;
  *(unsigned __int64 *)((iVar2 + 2) * 8 + iVar4) = CONCAT44(param_2,param_3);
  return;
}

