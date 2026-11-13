extern unsigned int *auStack_5c;
extern int fn_82A29A38();
extern int fn_82AAC770();
extern int fn_82AACDF0();
extern int fn_82AACF70();
extern unsigned int lbl_83160520;


void fn_82AAF1E8(int *param_1,unsigned int param_2,unsigned __int64 param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int *puStack_60;
  unsigned int auStack_5c [23];
  
  if (*(int *)(param_4 + 4) == 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = (unsigned int)(*(int *)(param_4 + 4) == 2);
  }
  if (0xffff0103 < param_2) {
    fn_82A29A38();
  }
  piVar1 = (int *)*param_1;
  puVar7 = (unsigned int *)*param_5;
  iVar2 = *piVar1;
  uVar4 = piVar1[1];
  uVar6 = piVar1[2];
  if ((uVar4 >> 0x14 & 0x700 | uVar4 & 0x1800) != 0x300) {
    fn_82A29A38();
  }
  puStack_60 = puVar7 + 1;
  *puVar7 = (uVar3 << 8 | uVar4 & 0xff) << 0x10 | 0x5d;
  fn_82AACF70(uVar4,param_4,&puStack_60);
  if ((uVar6 >> 0x14 & 0x700 | uVar6 & 0x1800) != 0x300) {
    fn_82A29A38();
  }
  uVar3 = fn_82AACDF0(uVar6,param_4,auStack_5c);
  uVar4 = fn_82AAC770(uVar6 & 0xf000000);
  uVar5 = (unsigned __int64)uVar6 & 0xff0000;
  if (uVar5 == 0xe40000) {
    uVar5 = 0x3210;
  }
  else {
    fn_82A29A38();
    uVar5 = ((unsigned __int64)*(unsigned int *)(&lbl_83160520 + ((unsigned int)(uVar5 >> 0x14) & 0xc)) & 0xfffff) << 0xc |
            ((unsigned __int64)*(unsigned int *)(&lbl_83160520 + ((unsigned int)((uVar5 >> 0x14) << 2) & 0xc)) & 0xffffff)
            << 8 | ((unsigned __int64)*(unsigned int *)(&lbl_83160520 + ((unsigned int)((uVar5 >> 0x12) << 2) & 0xc)) &
                   0xfffffff) << 4 |
                   (unsigned __int64)*(unsigned int *)(&lbl_83160520 + ((unsigned int)uVar5 >> 0xe & 0xc));
  }
  uVar6 = (unsigned int)uVar5;
  if (((iVar2 == 0x52) && (uVar4 == 0)) && (uVar5 == 0x3210)) {
    *puStack_60 = (auStack_5c[0] & 0x3f) << 0x10 | uVar3 & 0xffff;
    puVar7 = puStack_60 + 1;
  }
  else {
    *puStack_60 = (auStack_5c[0] & 0x3f) << 0x10 | 0x400000 | uVar3 & 0xffff;
    if (iVar2 == 0x45) {
      uVar6 = (unsigned int)(uVar5 << 4) & 0x70 | 0x3400 | uVar6 >> 0xc & 7;
    }
    else if (iVar2 == 0x46) {
      uVar6 = (unsigned int)(uVar5 >> 4) & 0x77 | 0x3400;
    }
    puVar7 = puStack_60 + 2;
    puStack_60[1] = uVar6 | uVar4;
  }
  *param_5 = (int)puVar7;
  *param_1 = (int)(piVar1 + 3);
  return;
}

