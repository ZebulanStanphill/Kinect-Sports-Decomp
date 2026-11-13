#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82CFBB08();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64
fn_83089070(unsigned __int64 param_1,unsigned __int64 param_2,unsigned char *param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  
  bVar1 = *param_3;
  puVar2 = *(unsigned int **)(param_3 + 0x14);
  if (bVar1 < 6) {
    if (bVar1 == 0) {
      uVar3 = *puVar2;
      *puVar2 = (unsigned int)((unsigned __int64)uVar3 - 1);
      if ((unsigned __int64)uVar3 - 1 != 0) {
        return 1;
      }
      puVar2 = *(unsigned int **)(param_3 + 0x1c);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar3;
      }
    }
    else if (bVar1 == 1) {
      uVar3 = *puVar2;
      *puVar2 = (unsigned int)((unsigned __int64)uVar3 - 1);
      if ((unsigned __int64)uVar3 - 1 != 0) {
        return 1;
      }
      puVar2 = *(unsigned int **)(param_3 + 0x1c);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar3;
      }
    }
    else if (bVar1 == 2) {
      lVar4 = (unsigned __int64)*(unsigned int *)(param_3 + 0x38) + (unsigned __int64)*puVar2 + -1000000;
      *puVar2 = (unsigned int)lVar4;
      if (lVar4 != 0) {
        return 1;
      }
      puVar2 = *(unsigned int **)(param_3 + 0x1c);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar3;
      }
    }
    else if (bVar1 == 3) {
      uVar3 = *puVar2;
      *puVar2 = (unsigned int)((unsigned __int64)uVar3 - 1);
      if ((unsigned __int64)uVar3 - 1 != 0) {
        return 1;
      }
      puVar2 = *(unsigned int **)(param_3 + 0x1c);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar3;
      }
    }
    else if (bVar1 == 4) {
      uVar3 = *puVar2;
      *puVar2 = (unsigned int)((unsigned __int64)uVar3 - 1);
      if ((unsigned __int64)uVar3 - 1 != 0) {
        return 1;
      }
      puVar2 = *(unsigned int **)(param_3 + 0x1c);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar3;
      }
    }
    else {
      uVar3 = *puVar2;
      *puVar2 = (unsigned int)((unsigned __int64)uVar3 - 1);
      if ((unsigned __int64)uVar3 - 1 != 0) {
        return 1;
      }
      puVar2 = *(unsigned int **)(param_3 + 0x1c);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar3;
      }
    }
    if (*(int *)(param_3 + 0x10) != 0) {
      fn_82CFBB08(*(int *)(param_3 + 0x10),1,param_3,param_4,param_5);
    }
  }
  return 1;
}

