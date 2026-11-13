extern int fn_82A29A38();
extern int fn_82AACF70();
extern int fn_82AAD090();
extern unsigned int lbl_83160500;
extern unsigned int lbl_83160510;


void fn_82AAE120(int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned int *apuStack_50 [20];
  
  if (0xffff01ff < param_2) {
    fn_82A29A38();
  }
  iVar1 = *param_1;
  puVar2 = (unsigned int *)*param_5;
  puVar9 = (unsigned int *)(iVar1 + 8);
  uVar3 = *(unsigned int *)(iVar1 + 4);
  if (param_2 < 0xffff0104) {
    uVar5 = 0x100;
    if ((uVar3 & 0x10000) != 0) {
      uVar5 = 0x101;
    }
    if ((uVar3 & 0x20000) != 0) {
      uVar5 = uVar5 | 4;
    }
    if ((uVar3 & 0x40000) != 0) {
      uVar5 = uVar5 | 0x10;
    }
    uVar4 = uVar3 >> 0x18;
    uVar8 = uVar4 & 0xf;
    uVar7 = 0;
    if ((uVar4 & 0xf) != 0) {
      if ((uVar4 & 8) == 0) {
        puVar6 = &lbl_83160500;
      }
      else {
        uVar8 = ~uVar8 + 1;
        puVar6 = &lbl_83160510;
      }
      uVar7 = *(int *)(puVar6 + (uVar8 & 3) * 4) << 9;
    }
    if ((uVar3 >> 0x14 & 0x700 | uVar3 & 0x1800) != 0x300) {
      fn_82A29A38();
    }
    *puVar2 = 0x47;
    puVar2[1] = uVar3 & 0x7ff | 0x510000;
    puVar2[2] = uVar7 | uVar5 | 0xc0;
    puVar2[3] = uVar3 & 0x7ff | 0x110000;
    apuStack_50[0] = puVar2 + 4;
  }
  else {
    uVar5 = *puVar9;
    puVar9 = (unsigned int *)(iVar1 + 0xc);
    if ((uVar5 >> 0x14 & 0x700 | uVar5 & 0x1800) != 0x300) {
      fn_82A29A38();
    }
    apuStack_50[0] = puVar2 + 1;
    *puVar2 = 0x47;
    fn_82AACF70(uVar3,param_4,apuStack_50);
    fn_82AAD090(uVar5,0,0,param_4,apuStack_50);
    if (param_2 != 0xffff0104) {
      fn_82A29A38();
    }
  }
  *param_5 = apuStack_50[0];
  *param_1 = (int)puVar9;
  return;
}

