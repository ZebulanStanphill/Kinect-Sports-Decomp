typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_8c;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_bf;
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CFC058();
extern int fn_82D909F0();
extern int fn_82D92F30();
extern int fn_82DA0238();
extern int fn_82DBC620();
extern unsigned int iStack_ac;
extern unsigned int lbl_82142544;
extern unsigned int uStack_76;
extern unsigned int uStack_78;
extern unsigned int uStack_7a;
extern unsigned int uStack_7c;


void fn_82DBC148(unsigned __int64 param_1,int *param_2)

{
  short sVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char *pcVar6;
  int iVar7;
  unsigned char bVar9;
  int iVar8;
  unsigned __int64 uVar10;
  int *piVar11;
  __int64 lVar12;
  int iVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  int *piVar16;
  unsigned int *puVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned char bStack_c0;
  unsigned char auStack_bf [7];
  unsigned int auStack_b8 [2];
  unsigned char auStack_b0 [4];
  int iStack_ac;
  short *psStack_a0;
  short sStack_9a;
  int *piStack_90;
  unsigned int auStack_8c [2];
  short *psStack_84;
  short sStack_80;
  unsigned char bStack_7e;
  unsigned char bStack_7d;
  unsigned short uStack_7c;
  unsigned short uStack_7a;
  unsigned short uStack_78;
  unsigned char uStack_76;
  bool bStack_75;
  
  fn_82CE4040(param_2);
  (**(int (***)())(*(int *)param_2[3] + 0x3c))((int *)param_2[3],auStack_b0);
  auStack_8c[0] = param_2[5];
  auStack_8c[1] = param_2[6];
  psStack_84 = (short *)param_2[4];
  if (psStack_84 == (short *)0x0) {
    psStack_84 = psStack_a0;
    sStack_80 = sStack_9a;
  }
  else {
    sStack_80 = psStack_84[8];
  }
  bStack_7d = *(unsigned char *)(param_2 + 7);
  piStack_90 = param_2;
  if (((*(char *)(auStack_8c[0] + 0xe8) != '\x05') && (*(char *)(auStack_8c[1] + 0xe8) != '\x05'))
     && (*(int *)(auStack_8c[0] + 0xcc) != *(int *)(auStack_8c[1] + 0xcc))) {
    fn_82D909F0(*(unsigned int *)(auStack_8c[0] + 8));
  }
  uStack_76 = *(char *)(auStack_8c[0] + 0xe8) == '\x05';
  uVar5 = auStack_8c[(unsigned char)uStack_76];
  iVar7 = *(int *)(uVar5 + 0xcc);
  param_2[2] = iVar7;
  *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x1c) + 1;
  sVar1 = *psStack_84;
  bStack_75 = true;
  bStack_7e = 0;
  if (sVar1 == 1) {
    bStack_7e = 2;
    pcVar6 = (char *)(**(int (***)())(*(int *)param_2[3] + 0x34))(auStack_bf);
    if (*pcVar6 != '\0') {
      bStack_7e = bStack_7e | 4;
    }
    iVar7 = (**(int (***)())(*param_2 + 0x18))(param_2);
    bStack_75 = iVar7 == 0;
  }
  else if (sVar1 == 0x14) {
    bStack_7e = 2;
  }
  bStack_c0 = 0;
  if (param_2[4] != 0) {
    bVar9 = fn_82DA0238(param_2[4],auStack_b0,&bStack_c0);
    bStack_7e = bVar9 | bStack_7e;
  }
  if (sVar1 == 0x16) {
    bVar9 = *(unsigned char *)(param_2[6] + 0xd2) | *(unsigned char *)(param_2[5] + 0xd2);
    iStack_ac = (unsigned int)*(unsigned short *)(&lbl_82142544 + ((unsigned int)bVar9 - (unsigned int)(bVar9 & bStack_c0) & 7) * 2)
                + iStack_ac;
  }
  uStack_7a = 0;
  uStack_78 = 0;
  uStack_7c = 0;
  param_2[0xc] = (int)&piStack_90;
  fn_82D92F30(param_2[2],param_2,auStack_b0);
  uVar2 = *(unsigned short *)(uVar5 + 0xb0);
  uVar10 = (unsigned __int64)uVar2;
  piVar16 = (int *)(uVar5 + 0xac);
  uVar15 = 0;
  if (uVar2 != 0) {
    piVar11 = (int *)*piVar16;
    do {
      if ((bStack_7d < *(unsigned char *)((int)piVar11 + 0x13)) ||
         ((bStack_7d <= *(unsigned char *)((int)piVar11 + 0x13) &&
          (((unsigned int)piStack_90[0xd] < *(unsigned int *)(*piVar11 + 0x34) ||
           (((unsigned int)piStack_90[0xd] <= *(unsigned int *)(*piVar11 + 0x34) &&
            (*(unsigned int *)((uVar5 ^ auStack_8c[1] ^ auStack_8c[0]) + 0xd4) <
             *(unsigned int *)((piVar11[1] ^ piVar11[2] ^ uVar5) + 0xd4))))))))) break;
      uVar15 = uVar15 + 1;
      piVar11 = piVar11 + 0xc;
    } while ((int)uVar15 < (int)(unsigned int)uVar2);
  }
  uVar20 = (unsigned __int64)*(unsigned short *)(uVar5 + 0xb2) & 0x3fff;
  uVar19 = -(unsigned __int64)(uVar10 < uVar20);
  uVar18 = uVar19 & uVar15;
  fn_82DBC620(piVar16,uVar15,&piStack_90,1,uVar19,uVar10,uVar10 - uVar20);
  if ((int)uVar18 < (int)(unsigned int)*(unsigned short *)(uVar5 + 0xb0)) {
    lVar14 = (uVar18 + (uVar18 & 0x7fffffff) * 2 & 0xfffffff) << 4;
    do {
      uVar18 = uVar18 + 1;
      piVar11 = (int *)(*piVar16 + (int)lVar14);
      lVar14 = lVar14 + 0x30;
      *(int **)(*piVar11 + 0x30) = piVar11;
    } while ((int)uVar18 < (int)(unsigned int)*(unsigned short *)(uVar5 + 0xb0));
  }
  piVar11 = (int *)param_2[0xc];
  (**(int (***)())(**(int **)(*piVar11 + 0xc) + 0x24))
            (*(int **)(*piVar11 + 0xc),*(unsigned char *)((int)param_2 + 0x1d),auStack_b8);
  uVar10 = (unsigned __int64)auStack_b8[0] + 0xf & 0xfffffff0;
  auStack_b8[0] = (unsigned int)uVar10;
  *(short *)(piVar11 + 8) = (short)uVar10;
  if (auStack_b8[0] == 0) {
    piVar11[7] = 0;
  }
  else {
    puVar17 = (unsigned int *)(uVar5 + 0xc0);
    uVar3 = *(unsigned int *)(uVar5 + 0xc4);
    uVar4 = *puVar17;
    lVar14 = uVar3 + uVar10;
    iVar7 = fn_82CE5410();
    if ((int)(*(unsigned int *)(uVar5 + 200) & 0x3fffffff) < (int)lVar14) {
      fn_82CE6310(*(unsigned int *)(iVar7 + 0x10),puVar17,lVar14,1);
    }
    uVar19 = (unsigned __int64)*puVar17;
    lVar14 = uVar19 - uVar4;
    *(unsigned int *)(uVar5 + 0xc4) = uVar3 + auStack_b8[0];
    uVar10 = 0;
    if (0 < (int)uVar15) {
      iVar7 = 0;
      uVar20 = uVar15;
      do {
        iVar8 = *piVar16 + iVar7;
        if ((unsigned __int64)*(unsigned int *)(iVar8 + 0x1c) != 0) {
          lVar12 = lVar14 + (unsigned __int64)*(unsigned int *)(iVar8 + 0x1c);
          *(int *)(iVar8 + 0x1c) = (int)lVar12;
          uVar19 = (unsigned __int64)*(unsigned short *)(iVar8 + 0x20) + lVar12;
        }
        iVar7 = iVar7 + 0x30;
        uVar20 = uVar20 - 1;
        uVar10 = uVar15;
      } while (uVar20 != 0);
    }
    fn_82CFC058(uVar19 + *(unsigned short *)(piVar11 + 8),uVar19,
                    ((*puVar17 - uVar19) - (unsigned __int64)*(unsigned short *)(piVar11 + 8)) +
                    (unsigned __int64)*(unsigned int *)(uVar5 + 0xc4));
    uVar2 = *(unsigned short *)(piVar11 + 8);
    uVar10 = uVar10 + 1;
    piVar11[7] = (int)uVar19;
    if ((int)uVar10 < (int)(unsigned int)*(unsigned short *)(uVar5 + 0xb0)) {
      lVar12 = (uVar10 + (uVar10 & 0x7fffffff) * 2 & 0xfffffff) << 4;
      do {
        iVar8 = *piVar16 + (int)lVar12;
        iVar7 = *(int *)(iVar8 + 0x1c);
        iVar13 = (unsigned int)uVar2 + (int)lVar14 + iVar7;
        if (iVar7 == 0) {
          iVar13 = 0;
        }
        uVar10 = uVar10 + 1;
        *(int *)(iVar8 + 0x1c) = iVar13;
        lVar12 = lVar12 + 0x30;
      } while ((int)uVar10 < (int)(unsigned int)*(unsigned short *)(uVar5 + 0xb0));
    }
  }
  (**(int (***)())(**(int **)(*piVar11 + 0xc) + 0x2c))
            (*(int **)(*piVar11 + 0xc),param_2,piVar11[7],*(unsigned short *)(piVar11 + 8));
  iVar7 = piVar11[2 - (unsigned int)*(unsigned char *)((int)piVar11 + 0x1a)];
  *(short *)((int)piVar11 + 0x22) = (short)*(unsigned int *)(iVar7 + 0xb8);
  iVar8 = fn_82CE5410();
  if (*(unsigned int *)(iVar7 + 0xb8) != (*(unsigned int *)(iVar7 + 0xbc) & 0x3fffffff)) {
    *(int **)(*(int *)(iVar7 + 0xb8) * 4 + *(int *)(iVar7 + 0xb4)) = param_2;
    *(int *)(iVar7 + 0xb8) = *(int *)(iVar7 + 0xb8) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),(int *)(iVar7 + 0xb4),4);
}

