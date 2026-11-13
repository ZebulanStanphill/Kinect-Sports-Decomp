typedef unsigned char bool;
extern int fn_822315A0();
extern int fn_8265CA20();
extern int fn_827D50B8();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_825BF360(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar6 = (unsigned __int64)*(unsigned int *)(param_2 + 0x138);
  iVar1 = *(int *)(param_2 + 0x134);
  if (uVar6 != 0) {
    do {
      puVar5 = (unsigned int *)(uVar6 + 4);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar5 + 1,0,uVar6 + 4);
        *puVar5 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  *(int *)(iVar1 + 0x224) = *(int *)(iVar1 + 0x224) + 1;
  iVar3 = fn_827D50B8(*param_1);
  if ((iVar3 != 0) && (uVar4 = fn_827D50B8(*param_1), *(int *)(iVar1 + 0x228) == 0)) {
    *(unsigned int *)(iVar1 + 0x228) = uVar4;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x138) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(param_2);
  }
  if (uVar6 != 0) {
    fn_822315A0(uVar6);
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

