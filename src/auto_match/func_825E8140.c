typedef unsigned char bool;
extern unsigned int *auStack_30;
extern int fn_825E8220();
extern int fn_82A1E7D8();
extern int fn_82A1E968();
extern unsigned int lbl_82195518;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_825E8140(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char auStack_30 [8];
  int (**pcStack_28)();
  
  fn_825E8220(auStack_30,param_1 + 0x18);
  do {
    piVar4 = (int *)param_1;
  } while (*piVar4 != 0);
  for (puVar5 = (unsigned int *)piVar4[1]; puVar5 != (unsigned int *)piVar4[2]; puVar5 = puVar5 + 1) {
    fn_82A1E7D8(*(unsigned int *)*puVar5);
    uVar1 = *puVar5;
    do {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0xffffffffffffffff,0,(unsigned __int64)uVar1 + 0xc);
        *(unsigned int *)((unsigned __int64)uVar1 + 0xc) = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  do {
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(0,0,param_1 + 0x28);
      *(unsigned int *)(param_1 + 0x28) = uVar2;
      in_cr0 = 2;
    }
    uVar3 = lbl_82195518;
  } while (!(bool)(in_cr0 >> 1 & 1));
  *(unsigned __int64 *)(piVar4 + 0xe) = lbl_82195518;
  *(unsigned __int64 *)(piVar4 + 0x10) = uVar3;
  fn_82A1E968(param_1 + 0x30);
  (*pcStack_28)(auStack_30);
  return;
}

