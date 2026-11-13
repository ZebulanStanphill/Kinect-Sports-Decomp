extern unsigned int *auStack_30;
extern unsigned int fStack_2c;
extern int fn_822843E0();
extern int fn_82284448();
extern unsigned int lbl_82191F78;
extern unsigned int ltcg_pool_0_0f;


void fn_82265CC8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  int *piVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char auStack_30 [4];
  float fStack_2c;
  
  if ((*(int *)(param_1 + 0x50c) != 2) && (*(int *)(param_1 + 0x624) != 0)) {
    iVar1 = *(int *)(param_1 + 0x520);
    puVar3 = (unsigned int *)(*(int *)(param_1 + 0xdc) + 0x50U & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    fStack_2c = fStack_2c + lbl_82191F78;
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x51c) == 0) {
        piVar5 = (int *)(iVar1 + 0x24);
        uVar6 = 0;
        do {
          if (*piVar5 == 0) {
            *(unsigned int *)((int)uVar6 * 0x234 + iVar1 + 0x24) = 1;
            goto LAB_82265d64;
          }
          uVar6 = uVar6 + 1;
          piVar5 = piVar5 + 0x8d;
        } while ((uVar6 & 0xffffffff) < 6);
        uVar6 = 0;
LAB_82265d64:
        uVar2 = *(unsigned int *)(param_1 + 0x44);
        *(int *)(param_1 + 0x540) = (int)uVar6;
        fn_822843E0((double)ltcg_pool_0_0f,*(unsigned int *)(param_1 + 0x520),
                          ((unsigned __int64)uVar2 +
                          ((__int64)((int)uVar2 >> 1) +
                           (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 1) != 0) & 0x7fffffff) * -2) *
                          0x18 + -0x7de6c2e8,param_1 + 0x5a4,(__int64)((int)uVar2 >> 1),uVar6);
        *(unsigned int *)(param_1 + 0x51c) = 1;
      }
      fn_82284448(*(unsigned int *)(param_1 + 0x520),auStack_30,*(unsigned int *)(param_1 + 0x540)
                       );
    }
  }
  return;
}

