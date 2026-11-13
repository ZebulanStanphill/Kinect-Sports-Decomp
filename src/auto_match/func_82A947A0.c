extern unsigned int *auStack_50;
extern int fn_8262FFB0();
extern int fn_8263AB38();
extern int fn_8263AC58();
extern int fn_8263B0F8();
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_821CBFB1;
extern unsigned int uStack_54;


void fn_82A947A0(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  int iVar11;
  int iVar12;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  unsigned int uStack_54;
  unsigned int auStack_50 [20];
  
  iVar1 = *(int *)(param_1 + 0x28) >> 0x1f;
  uVar2 = -iVar1;
  uVar4 = (unsigned __int64)uVar2;
  fn_8263B0F8(param_1,&iStack_60,&iStack_5c,&iStack_58);
  lVar9 = (uVar4 - LZCOUNT(iStack_60 + iVar1 * 2 + -1)) + 0x20;
  lVar8 = (uVar4 - LZCOUNT(iStack_5c + iVar1 * 2 + -1)) + 0x20;
  if ((int)lVar8 <= (int)lVar9) {
    lVar9 = lVar8;
  }
  uVar10 = lVar9 - 4;
  uVar10 = (((uVar10 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(uVar10 == 0) & uVar10;
  iVar11 = (int)uVar10;
  param_2[0xe] = iVar11;
  if ((*(unsigned int *)(param_1 + 0x30) & 0x600) == 0x400) {
    lVar9 = (uVar4 - LZCOUNT(iStack_58 + iVar1 * 2 + -1)) + 0x20;
  }
  else {
    lVar9 = 0;
  }
  param_2[2] = 1 << (((uVar2 - (int)LZCOUNT(iStack_5c + iVar1 * 2 + -1)) + 0x20) - iVar11 & 0x3f);
  lVar9 = lVar9 - uVar10;
  param_2[1] = 1 << (((uVar2 - (int)LZCOUNT(iStack_60 + iVar1 * 2 + -1)) + 0x20) - iVar11 & 0x3f);
  uVar2 = (unsigned int)lVar9;
  param_2[3] = 1 << ((-1 - ((int)uVar2 >> 0x1f)) + (unsigned int)(lVar9 == 0) & uVar2 & 0x3f);
  param_2[7] = (unsigned int)(unsigned char)(&lbl_821CBFB1)[(*(unsigned int *)(param_1 + 0x20) & 0x3f) * 2];
  fn_8263AC58(param_2 + 1,param_2 + 2,param_2 + 3,param_2[7],*(unsigned int *)(param_1 + 0x20) & 0x3f,
                    *(unsigned int *)(param_1 + 0x30) >> 9 & 3,*(unsigned int *)(param_1 + 0x1c) >> 0x1f);
  iVar1 = param_2[7];
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  iVar11 = param_2[3];
  uVar5 = uVar2 * iVar1 >> 3;
  param_2[5] = uVar5;
  iVar12 = uVar3 * uVar5;
  if ((*(unsigned int *)(param_1 + 0x30) & 0x600) == 0x400) {
    param_2[6] = iVar12;
    param_2[0xf] = iVar12 * iVar11 + 0xfffU & 0xfffff000;
  }
  else {
    uVar6 = iVar12 + 0xfffU & 0xfffff000;
    param_2[6] = uVar6;
    param_2[0xf] = uVar6 * iVar11;
  }
  fn_8263AB38(*(unsigned int *)(param_1 + 0x20) & 0x3f,auStack_50,&uStack_54);
  param_2[10] = iVar11;
  param_2[0xd] = 0;
  trapWord(6,(unsigned __int64)auStack_50[0],0);
  trapWord(6,(unsigned __int64)uStack_54,0);
  param_2[9] = (int)((((unsigned __int64)uVar3 + (unsigned __int64)uStack_54) - 1 & 0xffffffff) /
                    (unsigned __int64)uStack_54);
  param_2[5] = uVar5 * uStack_54;
  param_2[8] = (int)((((unsigned __int64)uVar2 + (unsigned __int64)auStack_50[0]) - 1 & 0xffffffff) /
                    (unsigned __int64)auStack_50[0]);
  param_2[0xb] = (int)(((__int64)(int)(iVar1 * auStack_50[0]) * (__int64)(int)uStack_54 &
                       0xffffffffU) >> 3);
  if ((unsigned int)param_2[0xe] <= (*(unsigned int *)(param_1 + 0x2c) >> 6 & 0xf)) {
    param_2[0xd] = 2;
  }
  if ((*(unsigned int *)(param_1 + 0x28) & 0x80000000) != 0) {
    param_2[0xd] = param_2[0xd] | 8;
  }
  uVar7 = fn_8262FFB0(param_1);
  *param_2 = uVar7;
  uVar2 = *(unsigned int *)(param_1 + 0x1c);
  uVar3 = *(unsigned int *)(param_1 + 0x28);
  param_2[4] = ((((((((((uVar3 >> 7 & 0x38 | uVar3 >> 7 & 7) << 3 | uVar3 >> 4 & 7) << 3 |
                      uVar3 >> 1 & 7) << 1 | uVar3 & 1) << 2 | uVar2 >> 8 & 3) << 2 | uVar2 >> 6 & 3
                   ) << 2 | uVar2 >> 4 & 3) << 2 | uVar2 >> 2 & 3) << 1 | uVar2 >> 0x1f) << 2 |
               *(unsigned int *)(param_1 + 0x20) >> 6 & 3) << 6 | *(unsigned int *)(param_1 + 0x20) & 0x3f;
  param_2[0xc] = (int)(*(unsigned int *)(param_1 + 0x28) << 0xd | *(unsigned int *)(param_1 + 0x28) >> 0x13) >> 0x1a
  ;
  return;
}

