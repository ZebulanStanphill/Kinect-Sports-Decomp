typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_28;
extern int fn_8267BE38();
extern int fn_8269A190();
extern int fn_82799E48();
extern int fn_82799E80();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_8272C5C0(unsigned __int64 param_1,int param_2,int param_3,char param_4)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  char in_RESERVE;
  unsigned char bVar7;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int auStack_28 [4];
  
  bVar7 = (param_4 == '\0') << 1;
  if (param_4 == '\0') {
    uVar3 = fn_82799E48(auStack_28,*(unsigned int *)(param_2 + 0xa0));
    fn_8269A190(param_1,(unsigned __int64)*(unsigned int *)(param_3 + 0x78) + 0x254,uVar3);
    lVar4 = ((unsigned __int64)auStack_28[0] & 0xfffffffc) + 4;
    do {
      puVar5 = (unsigned int *)lVar4;
      uVar6 = (unsigned __int64)*puVar5;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar4);
        *puVar5 = uVar1;
        bVar7 = 2;
      }
    } while (!(bool)(bVar7 >> 1 & 1));
  }
  else {
    if ((*(int **)(param_2 + 0xd0) == (int *)0x0) || (bVar2 = true, **(int **)(param_2 + 0xd0) == 0)
       ) {
      bVar2 = false;
    }
    if (bVar2) {
      fn_8269A190(param_1,(unsigned __int64)*(unsigned int *)(param_3 + 0x78) + 0x254,param_2 + 0xcc);
      return param_1;
    }
    bVar2 = (*(unsigned short *)(param_2 + 200) >> 1 & 1) == 0;
    bVar7 = bVar2 << 1;
    if (bVar2) {
      uVar3 = fn_82799E48(&uStack_2c,*(unsigned int *)(param_2 + 0xa0));
      fn_8269A190(param_1,(unsigned __int64)*(unsigned int *)(param_3 + 0x78) + 0x254,uVar3);
      lVar4 = ((unsigned __int64)uStack_2c & 0xfffffffc) + 4;
      do {
        puVar5 = (unsigned int *)lVar4;
        uVar6 = (unsigned __int64)*puVar5;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar4);
          *puVar5 = uVar1;
          bVar7 = 2;
        }
      } while (!(bool)(bVar7 >> 1 & 1));
    }
    else {
      uVar3 = fn_82799E80(&uStack_30);
      fn_8269A190(param_1,(unsigned __int64)*(unsigned int *)(param_3 + 0x78) + 0x254,uVar3);
      lVar4 = ((unsigned __int64)uStack_30 & 0xfffffffc) + 4;
      do {
        puVar5 = (unsigned int *)lVar4;
        uVar6 = (unsigned __int64)*puVar5;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar4);
          *puVar5 = uVar1;
          bVar7 = 2;
        }
      } while (!(bool)(bVar7 >> 1 & 1));
    }
  }
  if (uVar6 == 1) {
    fn_8267BE38();
  }
  return param_1;
}

