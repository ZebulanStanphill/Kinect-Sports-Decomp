typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_30;
extern int fn_822BE6D0();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8240D950(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned int *puVar8;
  __int64 lVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char auStack_30 [4];
  int *piStack_2c;
  
  *(int *)(param_1 + 8) = (int)param_3;
  *(unsigned int *)(param_1 + 4) = param_2;
  puVar5 = (unsigned int *)fn_822BE6D0(auStack_30,param_3);
  uVar1 = puVar5[1];
  uVar2 = *puVar5;
  if ((unsigned __int64)uVar1 != 0) {
    lVar6 = (unsigned __int64)uVar1 + 8;
    do {
      puVar8 = (unsigned int *)lVar6;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar8 + 1,0,lVar6);
        *puVar8 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (ZEXT48(piVar3) != 0) {
    lVar6 = ZEXT48(piVar3) + 8;
    do {
      puVar8 = (unsigned int *)lVar6;
      lVar7 = (unsigned __int64)*puVar8 - 1;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(lVar7,0,lVar6);
        *puVar8 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(int (***)())(*piVar3 + 4))();
    }
  }
  *(unsigned int *)(param_1 + 0x10) = uVar1;
  *(unsigned int *)(param_1 + 0xc) = uVar2;
  if (ZEXT48(piStack_2c) != 0) {
    lVar6 = ZEXT48(piStack_2c) + 8;
    do {
      puVar8 = (unsigned int *)lVar6;
      lVar7 = (unsigned __int64)*puVar8 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar7,0,lVar6);
        *puVar8 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(int (***)())(*piStack_2c + 4))();
    }
  }
  return;
}

