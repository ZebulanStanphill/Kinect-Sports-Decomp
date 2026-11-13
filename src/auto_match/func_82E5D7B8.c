typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EE3DA8();
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_8214C2F0;
extern unsigned int lbl_8214C300;
extern unsigned int lbl_8214C310;
extern unsigned int lbl_8214C320;
extern unsigned int lbl_8214C330;
extern unsigned int lbl_821549D8;
extern unsigned int lbl_82154A6C;
extern unsigned int lbl_82154A70;
extern unsigned int lbl_82154A74;
extern unsigned int lbl_82154A78;
extern unsigned int lbl_82154B58;
extern unsigned int lbl_82154B68;
extern unsigned int lbl_82154B78;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__int64 fn_82E5D7B8(int *param_1,int *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  bool bVar3;
  int *piVar4;
  bool bVar5;
  __int64 lVar6;
  int iVar7;
  unsigned char *puVar8;
  unsigned char *puVar9;
  unsigned char *pbVar10;
  unsigned char *pbVar11;
  unsigned char *pbVar12;
  unsigned short *puVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  unsigned short auStack_a0 [2];
  unsigned int uStack_9c;
  int *piStack_98;
  unsigned int uStack_94;
  unsigned int auStack_90 [4];
  unsigned char abStack_80 [4];
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned char abStack_70 [16];
  unsigned char auStack_60 [4];
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (unsigned int *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_3 = 0;
  piStack_98 = (int *)0x0;
  iVar7 = 0;
  uStack_9c = 0;
  uStack_7c = lbl_8202E61C;
  uStack_78 = lbl_8202E620;
  uStack_94 = 1;
  uStack_74 = lbl_8202E624;
  lVar6 = (**(int (***)())(*param_1 + 0xc))(param_1,abStack_70);
  if (-1 < lVar6) {
    pbVar12 = abStack_70;
    pbVar10 = &lbl_8214C2F0;
    do {
      bVar1 = *pbVar10;
      bVar2 = *pbVar12;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar10 = pbVar10 + 1;
      pbVar12 = pbVar12 + 1;
    } while (pbVar10 != &lbl_8214C300);
    pbVar12 = &lbl_82154B68;
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      puVar8 = &lbl_82154B58;
LAB_82e5d920:
      uStack_7c = *(unsigned int *)(puVar8 + 4);
      uStack_78 = *(unsigned int *)(puVar8 + 8);
      uStack_74 = *(unsigned int *)(puVar8 + 0xc);
    }
    else {
      pbVar10 = abStack_70;
      pbVar11 = &lbl_8214C300;
      do {
        bVar1 = *pbVar11;
        bVar2 = *pbVar10;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar10 = pbVar10 + 1;
      } while (pbVar11 != &lbl_8214C310);
      pbVar10 = pbVar12;
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
        pbVar10 = abStack_70;
        pbVar11 = (unsigned char *)&lbl_8214C320;
        do {
          bVar1 = *pbVar11;
          bVar2 = *pbVar10;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar11 = pbVar11 + 1;
          pbVar10 = pbVar10 + 1;
        } while (pbVar11 != (unsigned char *)&lbl_8214C330);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
          puVar8 = &lbl_82154B78;
          goto LAB_82e5d920;
        }
        pbVar10 = abStack_70;
      }
      uStack_7c = *(unsigned int *)(pbVar10 + 4);
      uStack_78 = *(unsigned int *)(pbVar10 + 8);
      uStack_74 = *(unsigned int *)(pbVar10 + 0xc);
    }
    bVar3 = false;
    lVar6 = (**(int (***)())(*param_1 + 0x14))(param_1,&uStack_9c);
    if (-1 < lVar6) {
      uVar14 = 0;
      bVar5 = false;
      if (uStack_9c == 0) {
LAB_82e5da04:
        bVar3 = bVar5;
        if ((int)lVar6 < 0) goto LAB_82e5dc60;
      }
      else {
        do {
          auStack_90[0] = 0;
          lVar6 = (**(int (***)())(*param_1 + 0x18))(param_1,uVar14,0,auStack_90);
          if ((lVar6 < 0) && ((int)lVar6 != -0x3ff2c94f)) goto LAB_82e5da04;
          lVar6 = 0;
          if (1 < auStack_90[0]) {
            bVar5 = true;
            goto LAB_82e5da04;
          }
          uVar14 = uVar14 + 1;
        } while ((uVar14 & 0xffffffff) < (unsigned __int64)uStack_9c);
      }
      uStack_5c = lbl_82154A6C;
      uStack_58 = lbl_82154A70;
      uStack_54 = lbl_82154A74;
      if (bVar3) {
        puVar9 = &lbl_821549D8;
LAB_82e5da90:
        uStack_5c = *(unsigned int *)(puVar9 + 4);
        uStack_58 = *(unsigned int *)(puVar9 + 8);
        uStack_54 = *(unsigned int *)(puVar9 + 0xc);
      }
      else {
        pbVar10 = abStack_80;
        do {
          bVar1 = *pbVar12;
          bVar2 = *pbVar10;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar12 = pbVar12 + 1;
          pbVar10 = pbVar10 + 1;
        } while (pbVar12 != &lbl_82154B78);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
          puVar9 = &lbl_82154A78;
          goto LAB_82e5da90;
        }
      }
      lVar6 = (**(int (***)())(*param_2 + 0x1c))(param_2,auStack_60,&piStack_98);
      piVar4 = piStack_98;
      if (((-1 < lVar6) &&
          (lVar6 = (**(int (***)())(*piStack_98 + 0x30))(piStack_98,abStack_80), -1 < lVar6)) &&
         (lVar6 = (**(int (***)())(*param_1 + 0x14))(param_1,&uStack_9c), -1 < lVar6)) {
        uVar14 = 0;
        if (uStack_9c != 0) {
          do {
            if (iVar7 != 0) {
              fn_82E4FE40(iVar7);
            }
            iVar7 = 0;
            lVar6 = (**(int (***)())(*param_1 + 0x18))(param_1,uVar14,0,&uStack_94);
            if (lVar6 < 0) goto LAB_82e5dc60;
            lVar6 = ((unsigned __int64)uStack_94 & 0x7fffffff) << 1;
            if (0x7fffffff < uStack_94) {
              lVar6 = -1;
            }
            iVar7 = fn_82E50BE8(lVar6,0,0,0,0);
            if (iVar7 == 0) {
              lVar6 = -0x7ff8fff2;
              break;
            }
            lVar6 = (**(int (***)())(*param_1 + 0x18))(param_1,uVar14,iVar7,&uStack_94);
            if (lVar6 < 0) goto LAB_82e5dc60;
            uVar15 = 0;
            puVar13 = (unsigned short *)(iVar7 + -2);
            do {
              if (uStack_94 <= uVar15) break;
              lVar6 = fn_82EE3DA8(piVar4,auStack_a0);
              if (lVar6 < 0) goto LAB_82e5dc60;
              puVar13 = puVar13 + 1;
              lVar6 = (**(int (***)())(*piVar4 + 0x34))(piVar4,auStack_a0[0],*puVar13);
              uVar15 = uVar15 + 1;
            } while (-1 < lVar6);
            if ((int)lVar6 < 0) goto LAB_82e5dc60;
            uVar14 = uVar14 + 1;
          } while ((uVar14 & 0xffffffff) < (unsigned __int64)uStack_9c);
        }
        if (-1 < (int)lVar6) {
          *param_3 = piStack_98;
          if (piStack_98 == (int *)0x0) goto LAB_82e5dc80;
          (**(int (***)())(*piStack_98 + 4))();
        }
      }
    }
  }
LAB_82e5dc60:
  if (piStack_98 != (int *)0x0) {
    (**(int (***)())(*piStack_98 + 8))();
    piStack_98 = (int *)0x0;
  }
LAB_82e5dc80:
  if (iVar7 != 0) {
    fn_82E4FE40(iVar7);
  }
  return lVar6;
}

