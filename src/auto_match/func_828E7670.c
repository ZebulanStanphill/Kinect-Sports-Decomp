typedef unsigned char bool;
extern int fn_822315A0();
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_828DF3C8();
extern int fn_828DF8D0();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_828E7670(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  if ((unsigned __int64)uVar1 != 0) {
    lVar7 = (unsigned __int64)uVar1 + 4;
    do {
      puVar8 = (unsigned int *)lVar7;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar8 + 1,0,lVar7);
        *puVar8 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  iVar3 = *(int *)(param_1 + 0x14);
  *(unsigned int *)(param_1 + 0x14) = uVar1;
  *(unsigned int *)(param_1 + 0x10) = uVar2;
  if (iVar3 != 0) {
    fn_822315A0();
  }
  uVar2 = *param_2;
  uVar5 = fn_8240D928(uVar2);
  uVar6 = fn_823AA970(uVar2);
  uVar5 = fn_828DF8D0(uVar6,uVar5);
  fn_828DF3C8(param_1,uVar5);
  return;
}

