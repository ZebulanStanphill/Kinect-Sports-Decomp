typedef unsigned char bool;
#define true 1
extern int fn_8267C4F0();
extern int fn_82686C38();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82686CA8(int *param_1)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (*param_1 == 1) {
    uVar2 = param_1[1];
    do {
      puVar6 = (unsigned int *)((unsigned __int64)uVar2 + 4);
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,(unsigned __int64)uVar2 + 4);
        *puVar6 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar5 = (unsigned __int64)(unsigned int)param_1[1];
  }
  else {
    if (*param_1 != 4) {
      iVar3 = param_1[1];
      uVar5 = fn_82686C38(iVar3);
      bVar1 = uVar5 == 0;
      if (!bVar1) {
        param_1[1] = (int)uVar5;
        *param_1 = 1;
        do {
          puVar6 = (unsigned int *)(uVar5 + 4);
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,uVar5 + 4);
            *puVar6 = uVar2;
            bVar1 = true;
          }
        } while (!bVar1);
        fn_8267C4F0(iVar3);
        return uVar5;
      }
      *param_1 = 4;
    }
    uVar5 = 0;
  }
  return uVar5;
}

