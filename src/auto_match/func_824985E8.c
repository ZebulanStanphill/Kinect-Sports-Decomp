typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8248F890();
extern int fn_82497430();
extern unsigned int lbl_821BEBB4;
extern unsigned int lbl_821BEF88;
extern unsigned int lbl_821BEFA4;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_824985E8(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned int *puVar7;
  __int64 lVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned short uStack_40;
  
  *param_1 = &lbl_821BEFA4;
  param_1[2] = 0;
  param_1[1] = &lbl_821BEBB4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(unsigned char *)(param_1 + 7) = 0;
  *(unsigned char *)((int)param_1 + 0x1d) = 0;
  *(unsigned char *)((int)param_1 + 0x1e) = 0;
  *(unsigned short *)(param_1 + 0xc) = uStack_40;
  param_1[0xe] = 0;
  uVar4 = fn_8248F890(0x38);
  param_1[0xd] = uVar4;
  *(unsigned int *)uVar4 = uVar4;
  *(unsigned int *)(param_1[0xd] + 4) = param_1[0xd];
  uVar4 = lbl_821CA460;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = uVar4;
  fn_82497430(param_1 + 0xc,8);
  *param_1 = &lbl_821BEF88;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar1 = param_2[1];
  uVar4 = *param_2;
  if ((unsigned __int64)uVar1 != 0) {
    lVar5 = (unsigned __int64)uVar1 + 8;
    do {
      puVar7 = (unsigned int *)lVar5;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar7 + 1,0,lVar5);
        *puVar7 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  piVar2 = (int *)param_1[0x18];
  if (ZEXT48(piVar2) != 0) {
    lVar5 = ZEXT48(piVar2) + 8;
    do {
      puVar7 = (unsigned int *)lVar5;
      lVar6 = (unsigned __int64)*puVar7 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar6,0,lVar5);
        *puVar7 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar6 == 0) {
      (**(int (***)())(*piVar2 + 4))();
    }
  }
  param_1[0x18] = uVar1;
  param_1[0x17] = uVar4;
  param_1[0x19] = param_3;
  return param_1;
}

