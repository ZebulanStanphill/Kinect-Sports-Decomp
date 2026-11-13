extern unsigned int *auStack_d0;
extern unsigned int *auStack_f8;
extern int fn_82E2AC98();
extern int fn_82E2C2D0();
extern int fn_82E2C398();
extern unsigned int lbl_8215358C;
extern unsigned int lbl_82153590;
extern unsigned int lbl_82153594;
extern unsigned int lbl_8215359C;
extern unsigned int lbl_821535A0;
extern unsigned int lbl_821535A4;
extern unsigned int lbl_821536DC;
extern unsigned int lbl_821536E0;
extern unsigned int lbl_821536E4;
extern unsigned int uStack_100;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_fc;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82E2C490(int *param_1,int *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int *puVar3;
  int iVar7;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned int *puStack00000024;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int auStack_f8 [2];
  unsigned char abStack_f0 [16];
  unsigned char abStack_e0 [16];
  unsigned char auStack_d0 [4];
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  
  *param_3 = 0;
  uStack_fc = 0;
  auStack_f8[0] = 0;
  uStack_100 = 0;
  puStack00000024 = param_3;
  iVar7 = (**(int (***)())(*param_1 + 0x84))(param_1,abStack_f0);
  if ((iVar7 < 0) || (iVar7 = (**(int (***)())(*param_2 + 0x84))(param_2,abStack_e0), iVar7 < 0)) {
    return 0xffffffff80070057;
  }
  pbVar9 = abStack_f0;
  pbVar8 = abStack_e0;
  do {
    bVar1 = *pbVar9;
    bVar2 = *pbVar8;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar9 = pbVar9 + 1;
    pbVar8 = pbVar8 + 1;
  } while (pbVar9 != abStack_e0);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    *param_3 = *param_3 | 1;
  }
  uVar4 = (**(int (***)())(*param_1 + 0x28))(param_1,0xffffffff82153488,abStack_f0);
  iVar7 = (**(int (***)())(*param_2 + 0x28))(param_2,0xffffffff82153488,abStack_e0);
  if (((int)((uVar4 & 0xffffffff) >> 0x1f) != 1) || (-1 < iVar7)) {
    pbVar9 = abStack_f0;
    pbVar8 = abStack_e0;
    do {
      bVar1 = *pbVar9;
      bVar2 = *pbVar8;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar9 = pbVar9 + 1;
      pbVar8 = pbVar8 + 1;
    } while (pbVar9 != abStack_e0);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) goto LAB_82e2c5e8;
  }
  *param_3 = *param_3 | 2;
LAB_82e2c5e8:
  uStack_cc = lbl_821536DC;
  uStack_c8 = lbl_821536E0;
  uStack_c4 = lbl_821536E4;
  uStack_bc = lbl_8215359C;
  uStack_b8 = lbl_821535A0;
  uStack_b4 = lbl_821535A4;
  uStack_ac = lbl_8215358C;
  uStack_a8 = lbl_82153590;
  uStack_a4 = lbl_82153594;
  uVar5 = fn_82E2C398(param_1,param_2,4,auStack_d0,3,&uStack_100);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  if (uStack_100 != 0) {
    lVar6 = fn_82E2C2D0(param_1,param_2,0xffffffff82153588);
    uStack_100 = -(unsigned int)(lVar6 != 0) & uStack_100;
    lVar6 = fn_82E2C2D0(param_1,param_2,0xffffffff82153598);
    uStack_100 = -(unsigned int)(lVar6 != 0) & uStack_100;
    if (uStack_100 != 0) {
      *puStack00000024 = *puStack00000024 | 4;
    }
  }
  puVar3 = puStack00000024;
  iVar7 = (**(int (***)())(*param_1 + 0x38))(param_1,0xffffffff821536d8,&uStack_fc);
  uStack_fc = -(iVar7 >> 0x1f) - 1U & uStack_fc;
  uVar5 = (**(int (***)())(*param_2 + 0x38))(param_2,0xffffffff821536d8,auStack_f8);
  if ((int)uVar5 < 0) {
    auStack_f8[0] = 0;
    uVar5 = 0;
  }
  if (uStack_fc == auStack_f8[0]) {
    if (uStack_fc == 0) {
      uStack_100 = 1;
    }
    else {
      lVar6 = fn_82E2AC98(param_1,0xffffffff821536d8);
      if (lVar6 == 0) {
        return 0xffffffff8000ffff;
      }
      uVar5 = (**(int (***)())(*param_2 + 0x14))(param_2,0xffffffff821536d8,lVar6,&uStack_100);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
    if (uStack_100 != 0) {
      *puVar3 = *puVar3 | 8;
    }
  }
  if ((-1 < (int)uVar5) && (*puVar3 != 0xf)) {
    uVar5 = 1;
  }
  return uVar5;
}

