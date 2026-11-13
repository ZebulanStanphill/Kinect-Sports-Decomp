extern int fn_82A29A38();
extern int fn_82AAC8C0();
extern int fn_82AAD090();


void fn_82AAF4B0(int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned int * apuStack_60;
  
  if (0xffff0103 < param_2) {
    fn_82A29A38();
  }
  iVar2 = *param_1;
  puVar3 = (unsigned int *)*param_5;
  uVar6 = *(unsigned int *)(iVar2 + 4);
  uVar4 = *(unsigned int *)(iVar2 + 8);
  uVar5 = uVar6 & 0x7ff;
  uVar1 = *(unsigned short *)(iVar2 + 0xe);
  uVar8 = ((unsigned __int64)(uVar6 >> 0x14) & 0x700 | (unsigned __int64)uVar6 & 0x1800) >> 8;
  lVar7 = (unsigned __int64)uVar1 - 0x49;
  lVar7 = lVar7 - (((unsigned __int64)uVar1 - 0x4a) + (unsigned __int64)(lVar7 == 0));
  if (lVar7 == 0) {
    uVar1 = *(unsigned short *)(iVar2 + 0x1a);
  }
  if (uVar8 != 3) {
    fn_82A29A38();
  }
  uVar6 = fn_82AAC8C0(uVar8,((int)lVar7 == 0) + 1 + uVar5,param_4,&apuStack_60);
  *puVar3 = 0x22;
  puVar3[1] = ((unsigned int)apuStack_60 & 0x3f) << 0x10 | 0x400000 | uVar6 & 0xffff;
  iVar9 = (-(unsigned int)(lVar7 != 0) & 3) + 1;
  puVar3[2] = iVar9;
  puVar3[3] = uVar5 | 0x110000;
  apuStack_60 = puVar3 + 4;
  fn_82AAD090(uVar4,0,0,param_4,&apuStack_60);
  if ((unsigned int)LZCOUNT(uVar1 - 0x4d) >> 5 != 0) {
    *apuStack_60 = 0x47;
    apuStack_60[1] = 0x44000e;
    apuStack_60[2] = iVar9;
    apuStack_60[3] = uVar5 | 0x510000;
    apuStack_60[4] = 0x3333;
    apuStack_60 = apuStack_60 + 5;
  }
  *param_5 = apuStack_60;
  *param_1 = iVar2 + 0xc;
  return;
}

