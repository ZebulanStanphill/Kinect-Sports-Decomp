typedef unsigned char bool;
extern int fn_82FA5190();
extern unsigned int lbl_832645A4;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_82FF9E88(unsigned int *param_1,unsigned int *param_2,int param_3)

{
  bool bVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned char in_xer_so;
  char in_RESERVE;
  unsigned char bVar6;
  
  param_1[5] = param_1[5] + 1;
  if (*param_1 != 0) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    return param_1;
  }
  puVar2 = (unsigned int *)param_1[2];
  bVar1 = (int)(param_1[3] - (int)puVar2) / 0xc == 0;
  bVar6 = bVar1 << 1 | in_xer_so;
  if (!bVar1) {
    uVar3 = *puVar2;
    lVar4 = (unsigned __int64)uVar3 + 0x40;
    *param_2 = puVar2[1];
    puVar2 = (unsigned int *)puVar2[2];
    param_2[1] = (unsigned int)puVar2;
    *(unsigned int *)(param_3 + 0x18) = uVar3;
    do {
      puVar5 = (unsigned int *)lVar4;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar5 + 1,0,lVar4);
        *puVar5 = uVar3;
        bVar6 = in_xer_so | 2;
      }
    } while (!(bool)(bVar6 >> 1 & 1));
    return puVar2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = param_1[5];
  param_1[5] = (unsigned int)((unsigned __int64)uVar3 - 1);
  if (((unsigned __int64)uVar3 - 1 == 0) && (*param_1 != 0)) {
    fn_82FA5190(lbl_832645A4);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return (unsigned int *)param_1[5];
}

