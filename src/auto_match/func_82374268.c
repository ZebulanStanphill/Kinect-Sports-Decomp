extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82365BD8();
extern int fn_82373AC0();
extern int fn_82376640();
extern int fn_82376CE0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern unsigned int iStack_78;
extern unsigned int iStack_9c;
extern unsigned int lbl_8219564C;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831E4E38;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;
extern unsigned int stack0x0000002c;
extern unsigned int stack0x00000034;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack_58;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;


int * fn_82374268(int *param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
  float fVar1;
  unsigned int *puVar2;
  int *piVar5;
  unsigned __int64 uVar3;
  int iVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar4;
  unsigned __int64 *puVar8;
  unsigned __int64 *puVar9;
  int *piVar10;
  unsigned int uVar11;
  __int64 lVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack_a0;
  struct { int first; unsigned int second; } stack_pair_9c;

  __int64 lStack_90;
  unsigned __int64 uStack_88;
  unsigned __int64 uStack_80;
  int iStack_78;
  unsigned __int64 uStack_58;
  unsigned char auStack_50 [80];
  
  uStack_a0 = 0;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  if ((param_3 == 0) || (*(int *)(param_2 + 0x1b8) == 0)) {
    stack_pair_9c.first = *(int *)(param_2 + 0x180);
  }
  else {
    piVar5 = (int *)fn_8251F720(param_2 + 0x1b8,0);
    iVar6 = 0;
    for (piVar10 = piVar5; (piVar10 != (int *)0x0 && (*piVar10 != 0));
        piVar10 = (int *)(-(unsigned int)(piVar10[1] != 0) & (unsigned int)(piVar10 + 1))) {
      iVar6 = iVar6 + 1;
    }
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar6 = (int)((float)(__int64)iVar6 *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
    lStack_90 = (__int64)iVar6;
    stack_pair_9c.first = piVar5[iVar6];
    fn_8251FA58();
    uStack_a0 = 1;
  }
  stack_pair_9c.second = *(unsigned int *)(param_2 + 0x9c);
  puVar8 = &uStack_58;
  puVar9 = &uStack_88;
  lStack_90 = (unsigned __int64)*(unsigned int *)(param_2 + 0x98) << 0x20;
  lVar12 = 5;
  uStack_80 = 0x823755f000000000;
  do {
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
    *puVar8 = *puVar9;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  iStack_78 = param_2;
  uVar3 = fn_8265C9E0(0x21b0);
  if ((uVar3 & 0xffffffff) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_82376CE0(uVar3,&stack_pair_9c.first,param_2 + 0x7e0,auStack_50,&uStack_a0,
                              &stack0x0000002c,&stack0x00000034,&lStack_90);
  }
  param_1[1] = iVar6;
  *param_1 = iVar6 + 0x10;
  puVar7 = (unsigned int *)(param_2 + 0x1a0U & 0xfffffff0);
  uVar11 = puVar7[1];
  uVar13 = puVar7[2];
  uVar14 = puVar7[3];
  puVar2 = (unsigned int *)(iVar6 + 0x1a0U & 0xfffffff0);
  *puVar2 = *puVar7;
  puVar2[1] = uVar11;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  uVar11 = ltcg_pool_0_0f;
  *(unsigned int *)(iVar6 + 0x128) = ltcg_pool_0_0f;
  *(unsigned int *)(iVar6 + 300) = uVar11;
  *(unsigned int *)(*param_1 + 0x2180) = *(unsigned int *)(param_2 + 0x26c);
  fn_82376640(param_2 + 0x184,param_1);
  iVar6 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar6 = fn_82250A18();
  }
  if (*(char *)(iVar6 + 4) != '\0') {
    piVar10 = *(int **)(*(int *)(param_2 + 0xcc) * 4 + **(int **)(param_2 + 8));
    fVar1 = *(float *)(*(int *)(piVar10[4] * 4 + *piVar10) + 0x14);
    if ((fVar1 <= lbl_831E4E38) || (uVar11 = 1, lbl_8219564C < fVar1)) {
      uVar11 = 2;
    }
    *(unsigned int *)(*param_1 + 0x2168) = uVar11;
  }
  puVar7 = (unsigned int *)fn_82373AC0(&uStack_88,param_2);
  piVar10 = (int *)*puVar7;
  iVar6 = *piVar10;
  uVar4 = fn_82365BD8(&lStack_90,param_1);
  (**(int (***)())(iVar6 + 0x1c))(piVar10,uVar4);
  if ((((unsigned __int64)(uStack_88) >> 32) & 0xFFFFFFFF) != 0) {
    fn_822315A0();
  }
  return param_1;
}

