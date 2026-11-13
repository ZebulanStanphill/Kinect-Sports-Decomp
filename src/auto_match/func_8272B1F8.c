typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8267C498();
extern int fn_8268C510();
extern int fn_8272AE80();
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


/* WARNING: Type propagation algorithm not settling */

void fn_8272B1F8(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_40;
  int aiStack_3c [3];
  unsigned int *puStack_30;
  int *piStack_2c;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    aiStack_3c[1] = 2;
    puVar2 = (unsigned int *)fn_8267BED0(param_1,4,aiStack_3c + 1);
    in_cr0 = (puVar2 == (unsigned int *)0x0) << 1;
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      *puVar2 = 0;
    }
    *(unsigned int **)(param_1 + 0xec) = puVar2;
  }
  if (param_3 != 0) {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  aiStack_3c[0] = param_3;
  fn_8268C510(&uStack_40,param_2);
  puStack_30 = &uStack_40;
  piStack_2c = aiStack_3c;
  fn_8272AE80(*(unsigned int *)(param_1 + 0xec),*(unsigned int *)(param_1 + 0xec),&puStack_30);
  lVar3 = ((unsigned __int64)uStack_40 & 0xfffffffc) + 4;
  do {
    puVar4 = (unsigned int *)lVar3;
    uVar5 = (unsigned __int64)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
      *puVar4 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  if (aiStack_3c[0] != 0) {
    fn_8267C498();
  }
  return;
}

