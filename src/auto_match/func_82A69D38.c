extern unsigned int *auStack_7a;
extern unsigned int *auStack_7c;
extern int fn_82A6E1C0();
extern int fn_82A6E290();
extern int fn_82C31808();
extern unsigned int uStack_7e;
extern unsigned int uStack_80;


void fn_82A69D38(int param_1,short *param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  short *psVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  __int64 lVar10;
  int iVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned short uStack_80;
  unsigned short uStack_7e;
  unsigned char auStack_7c [2];
  unsigned char auStack_7a [122];
  
  uVar6 = 0x7fff;
  if (*(int *)(param_1 + 0x48) == 3) {
    fn_82C31808(param_1,param_5);
  }
  iVar7 = 0;
  if (*(short *)(param_1 + 0x22) != 0) {
    iVar9 = 0;
    iVar8 = 0;
    do {
      iVar11 = iVar8 + *(int *)(param_1 + 0x140);
      uVar13 = *(unsigned int *)(iVar9 + *(int *)(param_1 + 0x164)) & 0xffff;
      if (param_4 == 0) {
        if ((*(int *)(param_1 + 0xb0) == 0) && (*(short *)(iVar11 + 0x70) != 0x7fff)) {
          if (*(int *)(param_1 + 0x3c) < 3) {
            uVar13 = ((unsigned int)*(unsigned short *)(iVar11 + 0x84) - (unsigned int)*(unsigned short *)(iVar11 + 0x80)) + uVar13
                     & 0xffff;
          }
          else {
            uVar2 = (int)*(short *)(iVar11 + 0x7c) + (int)*(short *)(iVar11 + 0x7a);
            uVar13 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0) + uVar13 &
                     0xffff;
          }
        }
        uVar2 = *(unsigned int *)(iVar9 + *(int *)(param_1 + 0x168));
        if (0 < (int)uVar2) {
          uVar3 = uVar13;
          if ((int)uVar2 <= (int)uVar13) {
            uVar3 = uVar2;
          }
          uVar13 = uVar13 - (uVar3 & 0xffff) & 0xffff;
          *(unsigned int *)(iVar9 + *(int *)(param_1 + 0x168)) =
               *(int *)(iVar9 + *(int *)(param_1 + 0x168)) - (uVar3 & 0xffff);
        }
        *(unsigned int *)(iVar9 + *(int *)(param_1 + 0x164)) = uVar13;
      }
      else {
        lVar10 = 0;
        iVar12 = 0;
        do {
          psVar4 = (short *)(*(int *)(*(int *)(iVar11 + 0x1a8) + 8) + iVar12);
          sVar1 = *psVar4;
          fn_82A6E1C0(param_1,1,psVar4[-1],sVar1,&uStack_7e,auStack_7c);
          fn_82A6E290(param_1,1,sVar1,
                       *(unsigned short *)(*(int *)(*(int *)(iVar11 + 0x1a8) + 8) + iVar12 + 2),
                       (__int64)sVar1,&uStack_80,auStack_7a);
          if (*(int *)(param_1 + 0x3c) < 3) {
            iVar5 = (unsigned int)uStack_80 - (unsigned int)uStack_7e;
          }
          else {
            uVar2 = (int)*(short *)(*(int *)(*(int *)(iVar11 + 0x1a8) + 8) + iVar12 + -2) +
                    (int)sVar1;
            iVar5 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
          }
          uVar13 = iVar5 + uVar13 & 0xffff;
          lVar10 = sVar1 + lVar10;
          iVar12 = iVar12 + 2;
        } while ((int)lVar10 < *(int *)(param_1 + 0x100));
        uVar2 = *(unsigned int *)(iVar9 + *(int *)(param_1 + 0x168));
        if (0 < (int)uVar2) {
          if ((int)uVar13 < (int)uVar2) {
            uVar2 = uVar13;
          }
          uVar13 = uVar13 - uVar2 & 0xffff;
        }
      }
      if (uVar13 < uVar6) {
        uVar6 = uVar13;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x6f0;
      iVar9 = iVar9 + 4;
    } while (iVar7 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    *param_2 = (short)uVar6;
  }
  else {
    if (param_4 != 0) {
      uVar6 = *(unsigned int *)(param_1 + 0x100) & 0xffff;
    }
    uVar13 = *(unsigned int *)(param_1 + 0x180);
    if (uVar6 < *(unsigned int *)(param_1 + 0x180)) {
      uVar13 = uVar6;
    }
    if (param_4 == 0) {
      *param_2 = (short)uVar13 - *(short *)(param_1 + 0xd2);
    }
    else {
      *param_2 = (short)uVar13;
    }
  }
  return;
}

