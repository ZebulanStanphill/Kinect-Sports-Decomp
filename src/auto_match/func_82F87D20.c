extern unsigned int *auStack_6c;
extern int fn_82A1E658();
extern int fn_82F63BA0();
extern int fn_82F63C78();
extern int fn_82F68240();
extern int fn_82F68278();
extern int fn_82F682B0();
extern int fn_82F7BCA0();
extern int fn_82F7C4A8();
extern int fn_82F82758();
extern int fn_82F85C50();
extern int fn_82F85CD8();
extern int fn_82F85F60();
extern int fn_82F883F0();
extern int fn_82F88618();
extern int fn_82F89A88();
extern unsigned int lbl_8329F620;
extern unsigned int uRam832633a8;


unsigned int
fn_82F87D20(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned int param_4,int param_5,
             unsigned int param_6)

{
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned __int64 uVar1;
  int *piVar5;
  int iVar6;
  unsigned char bVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned char bVar10;
  unsigned __int64 uVar11;
  short asStack_70 [2];
  unsigned int auStack_6c [27];
  
  auStack_6c[0] = 0;
  bVar10 = 0;
  iVar2 = fn_82F88618(auStack_6c);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63C78(0,0,0,0,0);
  }
  if ((param_4 & 0x8000) == 0) {
    bVar10 = 0x80;
  }
  uVar4 = param_4 & 3;
  if (uVar4 == 0) {
    uVar8 = 0xffffffff80000000;
  }
  else if (uVar4 == 1) {
    uVar8 = 0x40000000;
  }
  else {
    if (2 < uVar4) goto LAB_82f87d88;
    uVar8 = 0xffffffffc0000000;
  }
  if (param_5 == 0x10) {
    bVar7 = 0;
  }
  else if (param_5 == 0x20) {
    bVar7 = 1;
  }
  else if (param_5 == 0x30) {
    bVar7 = 2;
  }
  else if (param_5 == 0x40) {
    bVar7 = 3;
  }
  else {
    if (param_5 != 0x80) goto LAB_82f87d88;
    bVar7 = (int)uVar8 == -0x80000000;
  }
  uVar4 = param_4 & 0x700;
  if (uVar4 < 0x401) {
    if ((uVar4 == 0x400) || ((param_4 & 0x700) == 0)) {
      uVar11 = 3;
    }
    else if (uVar4 == 0x100) {
      uVar11 = 4;
    }
    else {
      if (uVar4 == 0x200) goto LAB_82f87ed8;
      if (uVar4 != 0x300) goto LAB_82f87d88;
      uVar11 = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_82f87ed8:
        uVar11 = 5;
        goto LAB_82f87e84;
      }
      if (uVar4 != 0x700) {
LAB_82f87d88:
        puVar3 = (unsigned int *)fn_82F68278();
        *puVar3 = 0;
        *param_2 = 0xffffffff;
        puVar3 = (unsigned int *)fn_82F68240();
        *puVar3 = 0x16;
        fn_82F63BA0();
        return 0x16;
      }
    }
    uVar11 = 1;
  }
LAB_82f87e84:
  uVar9 = 0x80;
  if (((param_4 & 0x100) != 0) && ((param_6 & ~uRam832633a8 & 0x80) == 0)) {
    uVar9 = 1;
  }
  if ((param_4 & 0x40) != 0) {
    uVar9 = uVar9 | 0x4000000;
    uVar8 = uVar8 | 0x10000;
    bVar7 = bVar7 | 4;
  }
  if ((param_4 & 0x1000) != 0) {
    uVar9 = uVar9 | 0x100;
  }
  if ((param_4 & 0x20) == 0) {
    if ((param_4 & 0x10) != 0) {
      uVar9 = uVar9 | 0x10000000;
    }
  }
  else {
    uVar9 = uVar9 | 0x8000000;
  }
  uVar4 = fn_82F85F60();
  *param_2 = uVar4;
  if (uVar4 == 0xffffffff) {
    puVar3 = (unsigned int *)fn_82F68278();
    *puVar3 = 0;
    *param_2 = 0xffffffff;
    puVar3 = (unsigned int *)fn_82F68240();
    *puVar3 = 0x18;
    puVar3 = (unsigned int *)fn_82F68240();
    return *puVar3;
  }
  *param_1 = 1;
  uVar1 = fn_82F89A88(param_3,uVar8,bVar7,0,uVar11,uVar9,0);
  if ((int)uVar1 == -1) {
    if (((uVar8 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      uVar8 = uVar8 & 0x7fffffff;
      uVar1 = fn_82F89A88(param_3,uVar8,bVar7,0,uVar11,uVar9,0);
      if ((int)uVar1 != -1) goto LAB_82f87fe4;
    }
    iVar2 = (&lbl_8329F620)[(int)*param_2 >> 5] + (*param_2 & 0x1f) * 0x48;
    *(unsigned char *)(iVar2 + 4) = *(unsigned char *)(iVar2 + 4) & 0xfe;
    thunk_FUN_82a2b798();
    fn_82F682B0();
    goto LAB_82f87fd8;
  }
LAB_82f87fe4:
  fn_82F85C50(*param_2,uVar1);
  *(unsigned char *)((&lbl_8329F620)[(int)*param_2 >> 5] + (*param_2 & 0x1f) * 0x48 + 4) = bVar10 | 1;
  iVar2 = (&lbl_8329F620)[(int)*param_2 >> 5] + (*param_2 & 0x1f) * 0x48;
  *(unsigned char *)(iVar2 + 0x28) = *(unsigned char *)(iVar2 + 0x28) & 1;
  if ((((__int64)(char)(bVar10 | 1) & 0x80U) != 0) && ((param_4 & 2) != 0)) {
    iVar2 = fn_82F82758(*param_2,0xffffffffffffffff,2);
    if (iVar2 == -1) {
      piVar5 = (int *)fn_82F68278();
      if (*piVar5 != 0x83) {
LAB_82f88090:
        fn_82F7C4A8(*param_2);
        goto LAB_82f87fd8;
      }
    }
    else {
      asStack_70[0] = 0;
      iVar6 = fn_82F7BCA0(*param_2,asStack_70,1);
      if ((((iVar6 == 0) && (asStack_70[0] == 0x1a)) &&
          (iVar2 = fn_82F883F0(*param_2,iVar2), iVar2 == -1)) ||
         (iVar2 = fn_82F82758(*param_2,0,0), iVar2 == -1)) goto LAB_82f88090;
    }
  }
  iVar2 = (&lbl_8329F620)[(int)*param_2 >> 5] + (*param_2 & 0x1f) * 0x48;
  *(unsigned char *)(iVar2 + 0x28) = *(unsigned char *)(iVar2 + 0x28) & 1;
  iVar2 = (&lbl_8329F620)[(int)*param_2 >> 5] + (*param_2 & 0x1f) * 0x48;
  *(unsigned char *)(iVar2 + 0x28) = *(unsigned char *)(iVar2 + 0x28) & 0xfe;
  if ((param_4 & 8) != 0) {
    iVar2 = (&lbl_8329F620)[(int)*param_2 >> 5] + (*param_2 & 0x1f) * 0x48;
    *(unsigned char *)(iVar2 + 4) = *(unsigned char *)(iVar2 + 4) | 0x20;
  }
  if ((uVar8 & 0xc0000000) != 0xc0000000) {
    return 0;
  }
  if ((param_4 & 1) == 0) {
    return 0;
  }
  fn_82A1E658(uVar1);
  iVar2 = fn_82F89A88(param_3,uVar8 & 0x7fffffff,bVar7,0,3,uVar9,0);
  if (iVar2 != -1) {
    *(int *)((&lbl_8329F620)[(int)*param_2 >> 5] + (*param_2 & 0x1f) * 0x48) = iVar2;
    return 0;
  }
  thunk_FUN_82a2b798();
  fn_82F682B0();
  iVar2 = (&lbl_8329F620)[(int)*param_2 >> 5] + (*param_2 & 0x1f) * 0x48;
  *(unsigned char *)(iVar2 + 4) = *(unsigned char *)(iVar2 + 4) & 0xfe;
  fn_82F85CD8(*param_2);
LAB_82f87fd8:
  puVar3 = (unsigned int *)fn_82F68240();
  return *puVar3;
}

