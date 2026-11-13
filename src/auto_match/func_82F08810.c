typedef unsigned char bool;
extern int fn_82F079D8();
extern int fn_82F085F8();
extern int fn_82F08690();
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int lbl_8324DBB0;
extern unsigned int uStack00000044;
extern unsigned int uStack_ac;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


bool fn_82F08810(int param_1, short *param_2, short *param_3, int param_4, int *param_5, int *param_6, unsigned __int64 param_7, unsigned __int64 unused_arg_8, int in_stack_00000054, unsigned int in_stack_0000005c, unsigned int in_stack_00000064, int in_stack_0000006c)

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
  int iVar14;
  unsigned __int64 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  unsigned __int64 uVar20;
  short *psStack0000001c;
  int *piStack0000003c;
  unsigned int uStack00000044;




  short *psStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  int iStack_b0;
  unsigned int uStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  uStack00000044 = (unsigned int)param_7;
  piVar13 = (int *)(*(int *)(param_1 + 0x6d24) + in_stack_00000054 * 0x34);
  iVar18 = 0;
  uStack_b4 = piVar13[7];
  uVar20 = (unsigned __int64)uStack_b4;
  uStack_ac = piVar13[9];
  iStack_b0 = piVar13[1];
  psVar7 = (short *)0x0;
  iStack_a8 = piVar13[2];
  sVar12 = 0;
  iStack_a4 = piVar13[3];
  iVar16 = 0;
  uVar2 = piVar13[4];
  uVar15 = (unsigned __int64)uVar2;
  iVar19 = 0;
  uVar3 = piVar13[5];
  iVar17 = 0;
  iVar11 = piVar13[6];
  iVar4 = piVar13[8];
  iVar5 = *piVar13;
  uStack_bc = 0;
  psStack_c0 = (short *)0x0;
  psStack0000001c = param_2;
  piStack0000003c = param_6;
  if (((*(int *)(param_1 + 0x7b2c) != 0) && (-1 < in_stack_0000006c)) && (in_stack_0000006c < 4)) {
    uStack_b8 = 0;
    fn_82F085F8(param_1,*(int *)(param_1 + 0x7b2c),in_stack_0000005c,in_stack_00000064,
                      in_stack_0000006c,&uStack_bc);
    fn_82F08690(param_1,*(unsigned int *)(param_1 + 0x7b2c),in_stack_0000005c,in_stack_00000064,
                  in_stack_0000006c,uStack00000044,&psStack_c0,&uStack_b8);
    uVar20 = (unsigned __int64)uStack_b4;
    param_7 = (unsigned __int64)uStack00000044;
    psVar7 = psStack_c0;
  }
  psVar6 = (short *)0x0;
  *param_3 = 0;
  psStack_c0 = (short *)0x0;
  psVar9 = psVar7;
  piVar13 = param_5;
  if (0 < (int)param_7) {
    do {
      if (psVar7 != (short *)0x0) {
        iVar19 = (int)*psVar9 * uVar3;
        iVar17 = iVar19 * 2;
      }
      iVar14 = (int)*(short *)(*piVar13 * 2 + param_4);
      if ((unsigned int)(iVar14 + iVar19 + iVar11) < (unsigned int)(iVar17 + iVar4)) {
        sVar12 = sVar12 + 1;
        psVar6 = (short *)(iVar14 * iVar14 + (int)psVar6);
      }
      else {
        psStack0000001c[*param_3 + 1] = sVar12;
        sVar12 = 0;
        *param_3 = *param_3 + 2;
      }
      param_7 = param_7 - 1;
      psVar9 = psVar9 + 1;
      piVar13 = piVar13 + 1;
      psStack_c0 = psVar6;
    } while (param_7 != 0);
  }
  psVar7 = psStack0000001c;
  if (0 < *param_3) {
    do {
      sVar12 = *(short *)(param_5[psVar7[1] + iVar16] * 2 + param_4);
      lVar10 = (__int64)sVar12;
      if ((unsigned __int64)uStack_ac < (lVar10 + uVar20 & 0xffffffff)) {
        trapWord(6,uVar15,0);
        if (sVar12 < 0) {
          uVar8 = lVar10 + (unsigned __int64)uVar3;
          trapWord(5,uVar15 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          sVar1 = *(short *)(&lbl_8324DBB0 + ((int)uVar8 / (int)uVar2) * -2);
          *psVar7 = -sVar1;
          iVar11 = -sVar1 * iVar5 - iStack_b0;
        }
        else {
          uVar8 = lVar10 - (unsigned __int64)uVar3;
          sVar1 = *(short *)(&lbl_8324DBB0 + ((int)uVar8 / (int)uVar2) * 2);
          trapWord(5,uVar15 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          *psVar7 = sVar1;
          iVar11 = sVar1 * iVar5 + iStack_b0;
        }
      }
      else if (sVar12 < 0) {
        *psVar7 = -1;
        iVar11 = iStack_a4;
      }
      else {
        *psVar7 = 1;
        iVar11 = iStack_a8;
      }
      iVar18 = iVar18 + 2;
      iVar11 = (int)sVar12 + iVar11 * -0x10;
      psStack_c0 = (short *)(iVar11 * iVar11 + (int)psStack_c0);
      iVar16 = psVar7[1] + iVar16 + 1;
      psVar7 = psVar7 + 2;
    } while (iVar18 < *param_3);
  }
  fn_82F079D8(param_1,psStack0000001c,param_3,&psStack_c0,param_4,param_5,in_stack_00000054,
                uStack_bc);
  *piStack0000003c = (int)psStack_c0 + *piStack0000003c;
  return *param_3 != 0;
}

