typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8259C7E8();
extern int fn_82A1E300();
extern int fn_82A1E650();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8259C5D8(__int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int *puVar5;
  unsigned __int64 uVar4;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  
  param_2 = param_2 + 1;
  bVar3 = false;
  while (puVar5 = (unsigned int *)param_1, param_2 == 0) {
LAB_8259c6a0:
    in_cr0 = !bVar3 << 1;
    if (!bVar3) {
      lVar8 = param_1 + 0xc;
      do {
        puVar6 = (unsigned int *)lVar8;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,lVar8);
          *puVar6 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1));
      sync(1);
      do {
        uVar1 = *puVar5;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,param_1);
          *puVar5 = uVar2;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1));
      if ((unsigned __int64)uVar1 != 0) {
        uVar4 = fn_8259C7E8(param_1);
        fn_82A1E650(uVar4,0xffffffffffffffff);
      }
      do {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar6 - 1,0,lVar8);
          *puVar6 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      param_2 = 1;
    }
    if (bVar3) {
      sync(1);
      return;
    }
  }
  do {
    param_2 = param_2 + -1;
    do {
      uVar7 = (unsigned __int64)*puVar5;
      if (*puVar5 != 0) {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar7,0,param_1);
          *puVar5 = uVar1;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(param_3,0,param_1);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar7 == 0) {
      bVar3 = true;
      do {
        puVar6 = (unsigned int *)(param_1 + 4);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,param_1 + 4);
          *puVar6 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      goto LAB_8259c6a0;
    }
    if (uVar7 == (param_3 & 0xffffffff)) {
      do {
        puVar6 = (unsigned int *)(param_1 + 4);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,param_1 + 4);
          *puVar6 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      bVar3 = true;
      goto LAB_8259c6a0;
    }
    if (param_2 == 0) goto LAB_8259c6a0;
    fn_82A1E300();
  } while( true );
}

