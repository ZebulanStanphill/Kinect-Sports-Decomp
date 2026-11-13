typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_80;
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82ABF768();
extern int fn_82AD6090();
extern int fn_82B16ED0();
extern int fn_82B207C8();
extern int fn_82B24828();
extern int fn_82B248C0();
extern int fn_82B271F8();
extern int fn_82B4B410();
extern unsigned int lbl_82005710;


unsigned int * fn_82B2A0D8(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int iVar10;
  char cVar13;
  unsigned int *puVar11;
  unsigned int uVar12;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned int auStack_80;
  
  puVar7 = (unsigned int *)fn_82ABE250(param_1,8,0x39);
  puVar5 = puVar7 + 1;
  puVar7[1] = (unsigned int)puVar7 | 1;
  *puVar7 = (unsigned int)puVar5 | 1;
  puVar8 = (unsigned int *)fn_82ABE250(param_1,8,0x33);
  auStack_80 = 0xffffffff;
  puVar8[1] = (unsigned int)puVar8 | 1;
  *puVar8 = (unsigned int)(puVar8 + 1) | 1;
  uVar17 = 0;
  uVar19 = lbl_82005710;
  uVar12 = param_2;
LAB_82b2a158:
  uVar15 = *(unsigned int *)(uVar12 + 8) >> 7 & 0x7f;
  if (uVar15 == 1) {
    fn_82B248C0(param_1,uVar12,0,param_3,puVar7,puVar8,&auStack_80);
    uVar14 = 1;
  }
  else {
    if (uVar15 == 0xc) {
      puVar11 = (unsigned int *)fn_82ABE250(param_1,8,0x33);
      puVar11[1] = (unsigned int)puVar11 | 1;
      *puVar11 = (unsigned int)(puVar11 + 1) | 1;
      if ((*puVar5 & 1) == 0) {
        uVar15 = *puVar7 & 0xfffffffe;
        iVar10 = uVar15 - 4;
        if ((iVar10 == 0) || (*(unsigned int *)(uVar15 + 8) < *(int *)(uVar15 + 4) + 1U)) goto LAB_82b2a2c8;
      }
      else {
LAB_82b2a2c8:
        iVar10 = fn_82AD6090(puVar7,1);
      }
      iVar1 = *(int *)(iVar10 + 8);
      *(int *)(iVar10 + 8) = iVar1 + 1;
      *(unsigned int **)((iVar1 + 4) * 4 + iVar10) = puVar11;
      fn_82B24828(param_1,puVar11,uVar12,param_3,param_2,&auStack_80);
    }
    else {
      if ((uVar15 < 0x10) || (0x12 < uVar15)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      puVar11 = *(unsigned int **)(uVar12 + 0x2c);
      uVar18 = 0;
      if ((*puVar11 & 0xe000000) != 0) {
        do {
          puVar9 = (unsigned int *)fn_82ABE250(param_1,8,0x33);
          puVar9[1] = (unsigned int)puVar9 | 1;
          *puVar9 = (unsigned int)(puVar9 + 1) | 1;
          if ((*puVar5 & 1) == 0) {
            uVar15 = *puVar7 & 0xfffffffe;
            iVar10 = uVar15 - 4;
            if ((iVar10 == 0) || (*(unsigned int *)(uVar15 + 8) < *(int *)(uVar15 + 4) + 1U))
            goto LAB_82b2a1ec;
          }
          else {
LAB_82b2a1ec:
            iVar10 = fn_82AD6090(puVar7,1);
          }
          iVar1 = *(int *)(iVar10 + 8);
          *(int *)(iVar10 + 8) = iVar1 + 1;
          *(unsigned int **)((iVar1 + 4) * 4 + iVar10) = puVar9;
          fn_82B24828(param_1,puVar9,uVar12,uVar18,param_2,&auStack_80);
          uVar18 = uVar18 + 1;
        } while ((uVar18 & 0xffffffff) < ((unsigned __int64)(*puVar11 >> 0x19) & 7));
      }
      uVar15 = auStack_80;
      uVar2 = auStack_80;
      if (((*(unsigned int *)(uVar12 + 8) & 0x3f80) != 0x900) ||
         (cVar13 = fn_82ABF768(uVar19,*(unsigned int *)(uVar12 + 0x34)), uVar15 = auStack_80,
         uVar2 = auStack_80, cVar13 != '\0')) goto LAB_82b2a354;
    }
    uVar14 = 2;
  }
  fn_82B248C0(param_1,uVar12,uVar14,param_3,puVar7,puVar8,&auStack_80);
  uVar15 = auStack_80;
  uVar2 = auStack_80;
LAB_82b2a354:
  uVar16 = uVar2;
  auStack_80 = uVar15;
  uVar12 = puVar8[1];
  if (((uVar12 & 1) != 0) || (uVar12 == 0)) {
    return puVar7;
  }
  uVar17 = uVar17 + 1;
  if (3000 < uVar17) {
    fn_82B271F8(param_1,puVar7,0);
    fn_82B207C8(puVar8);
    return (unsigned int *)0x0;
  }
  puVar11 = (unsigned int *)(*puVar8 & 0xfffffffe);
  puVar9 = puVar11 + -1;
  uVar15 = puVar11[1];
  uVar12 = puVar9[uVar15 * 3 + 1];
  uVar2 = puVar9[uVar15 * 3 + 2];
  param_3 = (unsigned __int64)uVar2;
  uVar3 = puVar9[uVar15 * 3 + 3];
  puVar11[1] = uVar15 - 1;
  if (uVar15 - 1 == 0) {
    *(unsigned int *)(*puVar11 & 0xfffffffe) = *puVar9;
    *(unsigned int *)(*puVar9 & 0xfffffffe) = *puVar11;
    fn_82AA6648(puVar8,puVar9,(unsigned __int64)puVar11[2] * 0xc + 0x10);
  }
  if (uVar3 == 0) {
    uVar15 = *(unsigned int *)(uVar12 + 8);
    uVar6 = uVar15 >> 7 & 0x7f;
    if ((uVar6 == 1) || (bVar4 = false, uVar6 == 0xc)) {
      bVar4 = true;
    }
    if (((bVar4) && ((uVar15 >> 6 & 1) == 0)) && ((uVar15 >> 0x19 & 1) == 0)) goto LAB_82b2a158;
  }
  puVar11 = (unsigned int *)fn_82ABE250(param_1,8,0x33);
  puVar11[1] = (unsigned int)puVar11 | 1;
  *puVar11 = (unsigned int)(puVar11 + 1) | 1;
  if ((*puVar5 & 1) == 0) {
    uVar15 = *puVar7 & 0xfffffffe;
    iVar10 = uVar15 - 4;
    if ((iVar10 == 0) || (*(unsigned int *)(uVar15 + 8) < *(int *)(uVar15 + 4) + 1U)) goto LAB_82b2a474;
  }
  else {
LAB_82b2a474:
    iVar10 = fn_82AD6090(puVar7,1);
  }
  iVar1 = *(int *)(iVar10 + 8);
  *(int *)(iVar10 + 8) = iVar1 + 1;
  *(unsigned int **)((iVar1 + 4) * 4 + iVar10) = puVar11;
  if ((puVar11[1] & 1) == 0) {
    uVar15 = *puVar11 & 0xfffffffe;
    iVar10 = uVar15 - 4;
    if ((iVar10 == 0) || (*(unsigned int *)(uVar15 + 8) < *(int *)(uVar15 + 4) + 1U)) goto LAB_82b2a4c8;
  }
  else {
LAB_82b2a4c8:
    iVar10 = fn_82B4B410(puVar11,1);
  }
  iVar1 = *(int *)(iVar10 + 8) * 0xc + iVar10;
  *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
  *(unsigned int *)(iVar1 + 0x10) = uVar12;
  *(unsigned int *)(iVar1 + 0x14) = uVar2;
  *(unsigned int *)(iVar1 + 0x18) = uVar3;
  uVar12 = fn_82B16ED0(uVar12,param_3);
  uVar15 = uVar12;
  uVar2 = uVar12;
  if ((uVar16 != 0xffffffff) && (uVar15 = auStack_80, uVar2 = uVar16, uVar16 != uVar12)) {
    uVar15 = 0xfffffffe;
    uVar2 = 0xfffffffe;
  }
  goto LAB_82b2a354;
}

