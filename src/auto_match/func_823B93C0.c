typedef unsigned char bool;
#define true 1
extern unsigned __int64 storeWordConditionalIndexed();


void fn_823B93C0(int *param_1,__int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  int *piVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar4 = param_2 + 0x68;
  if ((int)param_2 == 0) {
    uVar4 = 0;
  }
  uVar5 = (unsigned __int64)(unsigned int)param_1[2];
  if ((uVar4 & 0xffffffff) == uVar5) {
    return;
  }
  if (uVar5 != 0) {
    lVar6 = uVar5 + 0xc;
LAB_823b93f4:
    do {
      puVar7 = (unsigned int *)lVar6;
      uVar1 = *puVar7;
      if (uVar1 == 0) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(1,0,lVar6);
          *puVar7 = uVar3;
          in_cr0 = 2;
        }
        if (!(bool)(in_cr0 >> 1 & 1)) goto LAB_823b93f4;
      }
      else if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar6);
        *puVar7 = uVar3;
        in_cr0 = 2;
      }
    } while (uVar1 != 0);
    sync(1);
    *(int *)(*param_1 + 4) = param_1[1];
    *(int *)param_1[1] = *param_1;
    sync(1);
    *puVar7 = 0;
  }
  param_1[2] = (int)uVar4;
  if ((uVar4 & 0xffffffff) == 0) {
    return;
  }
  lVar6 = uVar4 + 0xc;
LAB_823b9464:
  do {
    puVar7 = (unsigned int *)lVar6;
    uVar1 = *puVar7;
    if (uVar1 == 0) {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(1,0,lVar6);
        *puVar7 = uVar3;
        in_cr0 = 2;
      }
      if (!(bool)(in_cr0 >> 1 & 1)) goto LAB_823b9464;
    }
    else if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar6);
      *puVar7 = uVar3;
      in_cr0 = 2;
    }
    if (uVar1 == 0) {
      sync(1);
      piVar8 = (int *)(param_1[2] + 4);
      iVar2 = *piVar8;
      param_1[1] = (int)piVar8;
      *param_1 = iVar2;
      *(int **)(*piVar8 + 4) = param_1;
      *piVar8 = (int)param_1;
      sync(1);
      *puVar7 = 0;
      return;
    }
  } while( true );
}

