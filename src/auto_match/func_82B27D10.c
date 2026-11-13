typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82ABE250();
extern int fn_82ACB180();
extern int fn_82AD6090();
extern int fn_82B1A538();
extern int fn_82B20868();
extern int fn_82B20920();
extern int fn_82B241A0();
extern int fn_82B271F8();
extern int fn_82B27568();
extern int fn_82B4B410();
extern int fn_82B8A3A0();
extern unsigned int iStack_98;
extern unsigned int iStack_a0;
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_9c;
extern unsigned int uStack_ac;


unsigned __int64 fn_82B27D10(int param_1,int param_2,int *param_3,unsigned __int64 param_4,unsigned int *param_5)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  bool bVar6;
  bool bVar7;
  unsigned int *puVar9;
  char cVar17;
  unsigned int *puVar10;
  int *piVar11;
  unsigned int *puVar12;
  int iVar13;
  unsigned int uVar14;
  int iVar15;
  int iVar16;
  __int64 lVar8;
  unsigned __int64 uVar18;
  double dVar19;
  double dVar20;
  struct { int first; unsigned int second; } stack_pair_b0;

  int iStack_a8;
  struct { int first; unsigned int second; } stack_pair_a0;

  int iStack_98;

  iStack_a8 = 0;
  stack_pair_b0.second = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
  uVar18 = 0;
  iVar16 = 0;
  stack_pair_b0.first = param_2;
  while( true ) {
    if ((stack_pair_b0.second == 0) || (bVar6 = false, iStack_a8 == *(int *)(stack_pair_b0.second + 8))) {
      bVar6 = true;
    }
    if (bVar6) break;
    puVar9 = (unsigned int *)fn_82ACB180(&stack_pair_b0.first);
    uVar14 = *puVar9;
    cVar17 = fn_82B20920(uVar14,*(unsigned __int64 *)param_3,(unsigned __int64)(unsigned int)param_3[2] << 0x20);
    if (cVar17 != '\0') {
      cVar17 = fn_82B20868(uVar14);
      if (cVar17 != '\0') {
        iVar16 = iVar16 + 1;
      }
      uVar18 = uVar18 + 1;
    }
  }
  if (iVar16 != 0) {
    uVar18 = uVar18 - 1;
  }
  if (1 < (uVar18 & 0xffffffff)) {
    puVar10 = (unsigned int *)fn_82ABE250(param_1,8,0x39);
    iStack_98 = 0;
    puVar10[1] = (unsigned int)puVar10 | 1;
    *puVar10 = (unsigned int)(puVar10 + 1) | 1;
    dVar19 = (double)lbl_82002AE0;
    stack_pair_a0.second = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
    dVar20 = (double)lbl_821AAD20;
    stack_pair_a0.first = param_2;
    while( true ) {
      if ((stack_pair_a0.second == 0) || (bVar6 = false, iStack_98 == *(int *)(stack_pair_a0.second + 8))) {
        bVar6 = true;
      }
      if (bVar6) break;
      piVar11 = (int *)fn_82ACB180(&stack_pair_a0.first);
      iVar16 = *piVar11;
      puVar12 = (unsigned int *)fn_82ABE250(param_1,8,0x33);
      puVar3 = puVar12 + 1;
      iStack_a8 = 0;
      puVar12[1] = (unsigned int)puVar12 | 1;
      *puVar12 = (unsigned int)puVar3 | 1;
      bVar6 = false;
      stack_pair_b0.second = -(unsigned int)((*(unsigned int *)(iVar16 + 4) & 1) == 0) & *(unsigned int *)(iVar16 + 4);
      stack_pair_b0.first = iVar16;
      while( true ) {
        if ((stack_pair_b0.second == 0) || (bVar7 = false, iStack_a8 == *(int *)(stack_pair_b0.second + 8))) {
          bVar7 = true;
        }
        if (bVar7) break;
        piVar11 = (int *)fn_82B1A538(&stack_pair_b0.first);
        if (bVar6) {
LAB_82b27ff4:
          iVar13 = *piVar11;
          iVar1 = piVar11[1];
          iVar2 = piVar11[2];
          if ((*puVar3 & 1) == 0) {
            uVar5 = *puVar12 & 0xfffffffe;
            iVar15 = uVar5 - 4;
            if ((iVar15 == 0) || (*(unsigned int *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U))
            goto LAB_82b28030;
          }
          else {
LAB_82b28030:
            iVar15 = fn_82B4B410(puVar12,1);
          }
          iVar4 = *(int *)(iVar15 + 8) * 0xc + iVar15;
          *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 1;
          *(int *)(iVar4 + 0x10) = iVar13;
          *(int *)(iVar4 + 0x14) = iVar1;
          *(int *)(iVar4 + 0x18) = iVar2;
        }
        else {
          if (((*piVar11 != *param_3) || (piVar11[1] != param_3[1])) ||
             (bVar7 = true,
             (CONCAT44(piVar11[2] ^ param_3[2],piVar11[2] ^ param_3[2]) & 0xfffffffffffffffb) != 0))
          {
            bVar7 = false;
          }
          if (!bVar7) goto LAB_82b27ff4;
          cVar17 = fn_82B20868(iVar16);
          if (cVar17 != '\0') {
            if ((*puVar3 & 1) == 0) {
              uVar5 = *puVar12 & 0xfffffffe;
              iVar13 = uVar5 - 4;
              if ((iVar13 == 0) || (*(unsigned int *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U))
              goto LAB_82b27f94;
            }
            else {
LAB_82b27f94:
              iVar13 = fn_82B4B410(puVar12,1);
            }
            iVar1 = *(int *)(iVar13 + 8);
            *(int *)(iVar13 + 8) = iVar1 + 1;
            iVar13 = iVar1 * 0xc + iVar13;
            uVar14 = fn_82B8A3A0(dVar19,dVar20,dVar20,dVar20,param_1,1);
            *(unsigned int *)(iVar13 + 0x10) = uVar14;
            *(unsigned int *)(iVar13 + 0x18) = piVar11[2] & 4;
          }
          bVar6 = true;
        }
      }
      if ((puVar10[1] & 1) == 0) {
        uVar5 = *puVar10 & 0xfffffffe;
        iVar16 = uVar5 - 4;
        if ((iVar16 == 0) || (*(unsigned int *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U)) goto LAB_82b28098;
      }
      else {
LAB_82b28098:
        iVar16 = fn_82AD6090(puVar10,1);
      }
      iVar13 = *(int *)(iVar16 + 8);
      *(int *)(iVar16 + 8) = iVar13 + 1;
      *(unsigned int **)((iVar13 + 4) * 4 + iVar16) = puVar12;
    }
    fn_82B27568(param_1,puVar10,param_4);
    uVar18 = fn_82B241A0(param_1,param_2);
    lVar8 = fn_82B241A0(param_1,puVar10);
    if ((lVar8 + 1U & 0xffffffff) < (uVar18 & 0xffffffff)) {
      *param_5 = puVar10;
      return uVar18 - lVar8;
    }
    fn_82B271F8(param_1,puVar10,*(unsigned int *)(param_1 + 0x28c));
    uVar18 = 0;
  }
  *param_5 = 0;
  return uVar18;
}
