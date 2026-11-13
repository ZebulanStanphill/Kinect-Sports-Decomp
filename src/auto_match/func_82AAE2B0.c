extern unsigned int *auStack_60;
extern int fn_82A29A38();
extern int fn_82AACDF0();
extern unsigned int lbl_83160520;


void fn_82AAE2B0(int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int auStack_60 [24];
  
  puVar6 = (unsigned int *)*param_1;
  puVar8 = (unsigned int *)*param_5;
  uVar5 = *puVar6;
  if ((puVar6[1] & 0x80000000) == 0) {
    fn_82A29A38();
  }
  uVar3 = puVar6[1];
  puVar7 = puVar6 + 2;
  uVar1 = auStack_60[0];
  if ((uVar5 & 0x10000000) != 0) {
    if ((*puVar7 & 0x80000000) == 0) {
      fn_82A29A38();
    }
    if (param_2 < 0xffff0200) {
      fn_82A29A38();
    }
    uVar1 = *puVar7;
    puVar7 = puVar6 + 3;
  }
  if (param_2 < 0xffff0104) {
    uVar3 = uVar3 & 0x7ff;
    uVar4 = 0x11;
  }
  else {
    uVar3 = fn_82AACDF0(uVar3,param_4,auStack_60);
    uVar4 = (unsigned __int64)auStack_60[0];
  }
  if (param_2 < 0xffff0200) {
    *puVar8 = 0x37;
    uVar5 = 0x5210;
    puVar8 = puVar8 + 1;
    *puVar8 = (unsigned int)(uVar4 << 0x10) & 0x3f0000 | 0x400000 | uVar3 & 0xffff;
  }
  else {
    if ((uVar5 & 0x10000000) != 0) {
      *puVar8 = 0x1000d;
      uVar2 = (unsigned __int64)uVar1 & 0xff0000;
      puVar8[1] = 0x40021;
      puVar6 = puVar8 + 2;
      if (uVar2 == 0xe40000) {
        *puVar6 = 0x40020;
      }
      else {
        *puVar6 = 0x440020;
        puVar6 = puVar8 + 3;
        *puVar6 = *(int *)(&lbl_83160520 + ((unsigned int)(uVar2 >> 0x14) & 0xc)) << 0xc |
                  *(int *)(&lbl_83160520 + ((unsigned int)((uVar2 >> 0x14) << 2) & 0xc)) << 8 |
                  *(int *)(&lbl_83160520 + ((unsigned int)((uVar2 >> 0x12) << 2) & 0xc)) << 4 |
                  *(unsigned int *)(&lbl_83160520 + ((unsigned int)uVar2 >> 0xe & 0xc));
      }
      uVar5 = (unsigned int)((uVar4 & 0x3f) << 0x10);
      if ((uVar1 & 0xf000000) == 0xd000000) {
        puVar6[1] = uVar5 | uVar3 & 0xffff;
        puVar6[2] = 0x410000;
        puVar6[3] = 0x5555;
      }
      else {
        puVar6[1] = 0x410000;
        puVar6[2] = 0x5555;
        puVar6[3] = uVar5 | uVar3 & 0xffff;
      }
      puVar8 = puVar6 + 4;
      uVar3 = 0x21;
      uVar4 = 4;
    }
    uVar5 = (unsigned int)(uVar4 << 0x10) & 0x3f0000 | uVar3 & 0xffff;
    *puVar8 = 0x37;
  }
  puVar8[1] = uVar5;
  *param_5 = puVar8 + 2;
  *param_1 = (int)puVar7;
  return;
}

