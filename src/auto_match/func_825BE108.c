typedef unsigned char bool;
extern int fn_8259BB38();
extern int fn_827D96A0();
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_825BE108(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_30;
  int aiStack_2c [11];
  
  iVar2 = fn_827D96A0(param_1 + 0x1f8);
  iVar3 = fn_827D96A0(param_2);
  if (iVar3 == iVar2) {
    uStack_30 = fn_827D96A0(param_3);
    fn_8259BB38(aiStack_2c,param_1 + 0x5c,&uStack_30);
    if (aiStack_2c[0] != *(int *)((int)param_1 + 0x60)) {
      do {
        puVar4 = (unsigned int *)(param_1 + 0x1dc);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar4 - 1,0,param_1 + 0x1dc);
          *puVar4 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      return 1;
    }
  }
  return 0;
}

