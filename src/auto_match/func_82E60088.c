typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_8c;
extern int fn_82E5E1F0();
extern int fn_82E5E6C0();
extern int fn_82E5E7D8();
extern int fn_82E5FD40();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_821537B8;
extern unsigned int lbl_821537C8;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_a0;


__int64 fn_82E60088(int *param_1,unsigned int *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  bool bVar3;
  bool bVar4;
  __int64 lVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  unsigned char *pbVar9;
  unsigned int uVar10;
  unsigned char *pbVar11;
  short sVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned int uStack_a0;
  int *piStack_9c;
  int *piStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int auStack_8c [3];
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  
  if ((param_1 == (int *)0x0) || (param_2 == (unsigned int *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  piStack_98 = (int *)0x0;
  piStack_9c = (int *)0x0;
  uStack_94 = 0;
  lVar5 = (**(int (***)())(*param_1 + 0x84))(param_1,&uStack_94);
  piVar7 = piStack_9c;
  piVar8 = piStack_98;
  if (lVar5 < 0) goto LAB_82e6047c;
  uVar14 = 0;
  bVar3 = true;
  bVar4 = false;
  uVar13 = 0;
  sVar12 = 0;
  uVar15 = 0;
  if (uStack_94 != 0) {
    bVar3 = true;
    do {
      uStack_a0 = uStack_a0 & 0xffff;
      lVar5 = (**(int (***)())(*param_1 + 0x88))(param_1,uVar15,&uStack_a0,&piStack_98);
      piVar7 = piStack_9c;
      piVar8 = piStack_98;
      if ((lVar5 < 0) ||
         (lVar5 = (**(int (***)())(*piStack_98 + 0x90))(piStack_98,&piStack_9c), piVar7 = piStack_9c,
         piVar8 = piStack_98, lVar5 < 0)) goto LAB_82e6047c;
      if (piStack_9c == (int *)0x0) {
        lVar5 = -0x3ff2c945;
        piVar7 = (int *)0x0;
        break;
      }
      uStack_90 = 0;
      lVar5 = (**(int (***)())(*piStack_9c + 0x88))(piStack_9c,&uStack_90);
      piVar7 = piStack_9c;
      piVar8 = piStack_98;
      if (lVar5 < 0) goto LAB_82e6047c;
      uStack_80 = lbl_8202E618;
      uStack_7c = lbl_8202E61C;
      uStack_78 = lbl_8202E620;
      uStack_74 = lbl_8202E624;
      bVar3 = (bool)(uStack_90 == 0 & bVar3);
      lVar5 = (**(int (***)())(*piStack_9c + 0x84))(piStack_9c,&uStack_80);
      piVar7 = piStack_9c;
      piVar8 = piStack_98;
      if (lVar5 < 0) goto LAB_82e6047c;
      pbVar9 = (unsigned char *)&uStack_80;
      pbVar11 = &lbl_821537B8;
      do {
        bVar1 = *pbVar11;
        bVar2 = *pbVar9;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar9 = pbVar9 + 1;
      } while (pbVar11 != &lbl_821537C8);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        bVar4 = true;
      }
      auStack_8c[0] = 0;
      iVar6 = fn_82E5FD40(piStack_9c,auStack_8c);
      if (iVar6 != 0) {
        lVar5 = fn_82E5E6C0(piStack_98);
        if ((uVar13 & 0xffffffff) < (lVar5 + (unsigned __int64)auStack_8c[0] & 0xffffffff)) {
          uVar13 = lVar5 + (unsigned __int64)auStack_8c[0];
        }
        sVar12 = sVar12 + 1;
      }
      if (piStack_9c != (int *)0x0) {
        (**(int (***)())(*piStack_9c + 8))();
        piStack_9c = (int *)0x0;
      }
      auStack_8c[0] = 0;
      lVar5 = fn_82E5E1F0(piStack_98,0xffffffff8214c2a0,auStack_8c,0);
      piVar7 = piStack_9c;
      piVar8 = piStack_98;
      if (lVar5 < 0) goto LAB_82e6047c;
      uVar14 = auStack_8c[0] + uVar14;
      if (piStack_98 != (int *)0x0) {
        (**(int (***)())(*piStack_98 + 8))(piStack_98);
        piStack_98 = (int *)0x0;
      }
      piVar8 = (int *)0x0;
      uVar15 = uVar15 + 1;
      piVar7 = piStack_9c;
    } while ((uVar15 & 0xffffffff) < (unsigned __int64)uStack_94);
  }
  if ((int)lVar5 < 0) goto LAB_82e6047c;
  *param_2 = uVar14 / 0x50;
  if (uVar14 / 0x50 < 400) {
    *param_2 = 400;
  }
  if ((bVar3) && (bVar4)) {
    *param_2 = 64000;
    goto LAB_82e6047c;
  }
  auStack_8c[0] = 0;
  lVar5 = fn_82E5E7D8(param_1,auStack_8c);
  piVar7 = piStack_9c;
  piVar8 = piStack_98;
  if (lVar5 < 0) goto LAB_82e6047c;
  if (auStack_8c[0] < 0x55731) {
    if (0x5a4 < *param_2) {
      uVar10 = 0x5a4;
      goto LAB_82e60390;
    }
  }
  else if (8000 < *param_2) {
    uVar10 = 8000;
LAB_82e60390:
    *param_2 = uVar10;
  }
  if (auStack_8c[0] < uVar14) {
    *param_2 = *param_2 << 1;
  }
  uStack_90 = 0;
  iVar6 = (**(int (***)())(*param_1 + 0x1c))(param_1,0xffffffff8214c280,&uStack_90);
  if ((iVar6 == 0) && (uStack_90 < *param_2)) {
    *param_2 = uStack_90;
  }
  if ((unsigned __int64)*param_2 < (uVar13 + 0x1d & 0xffffffff)) {
    *param_2 = (unsigned int)(uVar13 + 0x1d);
  }
  uStack_a0 = 0;
  iVar6 = (**(int (***)())(*param_1 + 0x1c))(param_1,0xffffffff8214c270,&uStack_a0);
  if ((iVar6 == 0) && (*param_2 < uStack_a0)) {
    *param_2 = uStack_a0;
  }
  piVar7 = piStack_9c;
  piVar8 = piStack_98;
  if ((uStack_94 == 1) && (sVar12 == 1)) {
    uVar13 = uVar13 + 0x11;
    trapWord(6,uVar13,0);
    *param_2 = (int)((unsigned __int64)(*param_2 - 0xc) / (uVar13 & 0xffffffff)) * (int)uVar13 + 0xc;
  }
LAB_82e6047c:
  if (piVar8 != (int *)0x0) {
    (**(int (***)())(*piVar8 + 8))(piVar8);
    piStack_98 = (int *)0x0;
    piVar7 = piStack_9c;
  }
  if (piVar7 != (int *)0x0) {
    (**(int (***)())(*piVar7 + 8))();
  }
  return lVar5;
}

