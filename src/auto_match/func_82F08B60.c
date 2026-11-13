typedef unsigned char bool;
extern int fn_82F079D8();
extern int fn_82F085F8();
extern int fn_82F08690();
extern unsigned int lbl_8324DBB0;
extern unsigned int uStack00000044;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


bool fn_82F08B60(int param_1,short *param_2,short *param_3,int param_4,int *param_5,int *param_6,
                  unsigned __int64 param_7)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar9;
  unsigned __int64 uVar8;
  short sVar12;
  __int64 lVar10;
  int iVar11;
  int *piVar13;
  unsigned __int64 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  unsigned __int64 uVar19;
  short *psStack0000001c;
  int *piStack0000003c;
  unsigned int uStack00000044;
  int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  int in_stack_0000006c;
  short *psStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  
  uStack00000044 = (unsigned int)param_7;
  piVar13 = (int *)(*(int *)(param_1 + 0x6d24) + in_stack_00000054 * 0x34);
  iVar17 = 0;
  uStack_ac = 0;
  psStack_b0 = (short *)0x0;
  uStack_a4 = piVar13[7];
  uVar19 = (unsigned __int64)uStack_a4;
  uStack_a0 = piVar13[9];
  uVar2 = piVar13[4];
  uVar14 = (unsigned __int64)uVar2;
  psVar7 = (short *)0x0;
  uVar3 = piVar13[5];
  sVar12 = 0;
  iVar11 = piVar13[6];
  iVar15 = 0;
  iVar4 = piVar13[8];
  iVar18 = 0;
  iVar5 = *piVar13;
  iVar16 = 0;
  psStack0000001c = param_2;
  piStack0000003c = param_6;
  if (((*(int *)(param_1 + 0x7b2c) != 0) && (-1 < in_stack_0000006c)) && (in_stack_0000006c < 4)) {
    uStack_a8 = 0;
    fn_82F085F8(param_1,*(int *)(param_1 + 0x7b2c),in_stack_0000005c,in_stack_00000064,
                      in_stack_0000006c,&uStack_ac);
    fn_82F08690(param_1,*(unsigned int *)(param_1 + 0x7b2c),in_stack_0000005c,in_stack_00000064,
                  in_stack_0000006c,uStack00000044,&psStack_b0,&uStack_a8);
    uVar19 = (unsigned __int64)uStack_a4;
    param_7 = (unsigned __int64)uStack00000044;
    psVar7 = psStack_b0;
  }
  psVar6 = (short *)0x0;
  *param_3 = 0;
  psStack_b0 = (short *)0x0;
  psVar9 = psVar7;
  piVar13 = param_5;
  if (0 < (int)param_7) {
    do {
      if (psVar7 != (short *)0x0) {
        iVar18 = (int)*psVar9 * uVar3;
        iVar16 = iVar18 * 2;
      }
      sVar1 = *(short *)(*piVar13 * 2 + param_4);
      if ((unsigned int)(sVar1 + iVar18 + iVar11) < (unsigned int)(iVar16 + iVar4)) {
        sVar12 = sVar12 + 1;
        psVar6 = (short *)((int)sVar1 * (int)sVar1 + (int)psVar6);
      }
      else {
        psStack0000001c[*param_3 + 1] = sVar12;
        sVar12 = 0;
        *param_3 = *param_3 + 2;
      }
      param_7 = param_7 - 1;
      psVar9 = psVar9 + 1;
      piVar13 = piVar13 + 1;
      psStack_b0 = psVar6;
    } while (param_7 != 0);
  }
  psVar7 = psStack0000001c;
  if (0 < *param_3) {
    do {
      sVar12 = *(short *)(param_5[psVar7[1] + iVar15] * 2 + param_4);
      lVar10 = (__int64)sVar12;
      if ((unsigned __int64)uStack_a0 < (lVar10 + uVar19 & 0xffffffff)) {
        trapWord(6,uVar14,0);
        if (sVar12 < 0) {
          uVar8 = (unsigned __int64)uVar3 - lVar10;
          sVar1 = *(short *)(&lbl_8324DBB0 + ((int)uVar8 / (int)uVar2) * 2);
          trapWord(5,uVar14 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          *psVar7 = -sVar1;
          iVar11 = -sVar1 * iVar5;
        }
        else {
          uVar8 = lVar10 + (unsigned __int64)uVar3;
          trapWord(5,uVar14 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          iVar11 = *(short *)(&lbl_8324DBB0 + ((int)uVar8 / (int)uVar2) * 2) * iVar5;
          *psVar7 = *(short *)(&lbl_8324DBB0 + ((int)uVar8 / (int)uVar2) * 2);
        }
      }
      else if (sVar12 < 0) {
        iVar11 = -iVar5;
        *psVar7 = -1;
      }
      else {
        *psVar7 = 1;
        iVar11 = iVar5;
      }
      iVar17 = iVar17 + 2;
      iVar11 = (int)sVar12 + iVar11 * -0x10;
      psStack_b0 = (short *)(iVar11 * iVar11 + (int)psStack_b0);
      iVar15 = psVar7[1] + iVar15 + 1;
      psVar7 = psVar7 + 2;
    } while (iVar17 < *param_3);
  }
  fn_82F079D8(param_1,psStack0000001c,param_3,&psStack_b0,param_4,param_5,in_stack_00000054,
                uStack_ac);
  *piStack0000003c = (int)psStack_b0 + *piStack0000003c;
  return *param_3 != 0;
}

