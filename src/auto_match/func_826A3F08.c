typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_80;
extern int fn_826826A8();
extern int fn_826828D8();
extern int fn_82683270();
extern int fn_82693A98();
extern int fn_82693B78();
extern int fn_826944C8();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_826A1928();
extern unsigned int iStack_50;
extern unsigned int iStack_58;
extern unsigned int lbl_82005710;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;


unsigned __int64 fn_826A3F08(unsigned int *param_1,char *param_2,char *param_3)

{
  int iVar1;
  unsigned int uVar2;
  bool bVar3;
  char cVar5;
  char cVar6;
  unsigned __int64 uVar4;
  unsigned char *pbVar7;
  unsigned int uVar8;
  unsigned char *pbVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  double dVar13;
  double dVar14;
  unsigned int *puStack_b0;
  unsigned int *puStack_ac;
  unsigned int *puStack_a8;
  unsigned int *puStack_a4;
  double dStack_a0;
  double dStack_98;
  char acStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char **ppuStack_70;
  unsigned char *puStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned char uStack_5c;
  int iStack_58;
  unsigned int uStack_54;
  int iStack_50;
  
  uVar10 = 0;
  acStack_90[0] = '\0';
  if (param_2 == (char *)0x0) {
    param_2 = acStack_90;
  }
  if (param_3 == (char *)0x0) {
    param_3 = acStack_90;
  }
  if (param_1[2] == 0) {
    cVar5 = '\0';
    cVar6 = '\0';
    dStack_a0 = lbl_82005710;
    dStack_98 = lbl_82005710;
    dVar13 = lbl_82005710;
    dVar14 = lbl_82005710;
    if ((param_1[1] & 0x10) != 0) {
      if ((*param_2 == '\x03') || (bVar3 = false, *param_2 == '\x04')) {
        bVar3 = true;
      }
      if (bVar3) {
        dVar14 = (double)fn_826972E0(param_2,param_1[5]);
        cVar5 = '\x01';
      }
      else {
        fn_82696D38(&puStack_a8,param_2,param_1[5],0xffffffffffffffff,0);
        cVar5 = fn_826A1928(*puStack_a8,&dStack_a0);
        uVar8 = puStack_a8[2];
        puStack_a8[2] = (int)((unsigned __int64)uVar8 - 1);
        dVar14 = dStack_a0;
        if ((unsigned __int64)uVar8 - 1 == 0) {
          fn_826944C8(puStack_a8);
          dVar14 = dStack_a0;
        }
      }
      if ((*param_3 == '\x03') || (bVar3 = false, *param_3 == '\x04')) {
        bVar3 = true;
      }
      if (bVar3) {
        dVar13 = (double)fn_826972E0(param_3,param_1[5]);
        cVar6 = '\x01';
      }
      else {
        fn_82696D38(&puStack_a4,param_3,param_1[5],0xffffffffffffffff,0);
        cVar6 = fn_826A1928(*puStack_a4,&dStack_98);
        uVar8 = puStack_a4[2];
        puStack_a4[2] = (int)((unsigned __int64)uVar8 - 1);
        dVar13 = dStack_98;
        if ((unsigned __int64)uVar8 - 1 == 0) {
          fn_826944C8(puStack_a4);
          dVar13 = dStack_98;
        }
      }
    }
    if ((cVar5 == '\0') || (cVar6 == '\0')) {
      fn_82696D38(&puStack_ac,param_2,param_1[5],0xffffffffffffffff,0);
      fn_82696D38(&puStack_b0,param_3,param_1[5],0xffffffffffffffff,0);
      uVar8 = param_1[1];
      if ((uVar8 & 0x400) == 0) {
        if ((uVar8 & 1) == 0) {
          pbVar9 = (unsigned char *)*puStack_ac;
          pbVar7 = (unsigned char *)*puStack_b0;
          do {
            uVar10 = (unsigned __int64)*pbVar9 - (unsigned __int64)*pbVar7;
            if (*pbVar9 == 0) break;
            pbVar9 = pbVar9 + 1;
            pbVar7 = pbVar7 + 1;
          } while ((int)uVar10 == 0);
        }
        else {
          uVar10 = thunk_FUN_82f65ac0(*puStack_ac,*puStack_b0);
        }
      }
      else {
        uVar2 = *puStack_b0;
        uVar4 = fn_82693A98(&puStack_b0);
        uVar10 = fn_82693B78(&puStack_ac,uVar2,uVar4,~uVar8 & 1);
      }
      uVar12 = -uVar10;
      if ((param_1[1] & 2) == 0) {
        uVar12 = uVar10;
      }
      uVar8 = puStack_b0[2];
      puStack_b0[2] = (int)((unsigned __int64)uVar8 - 1);
      if ((unsigned __int64)uVar8 - 1 == 0) {
        fn_826944C8(puStack_b0);
      }
      uVar8 = puStack_ac[2];
      puStack_ac[2] = (int)((unsigned __int64)uVar8 - 1);
      if ((unsigned __int64)uVar8 - 1 == 0) {
        fn_826944C8(puStack_ac);
      }
    }
    else {
      if (dVar14 < dVar13) {
        uVar10 = 0xffffffffffffffff;
      }
      if (dVar13 < dVar14) {
        uVar10 = 1;
      }
      uVar12 = -uVar10;
      if ((param_1[1] & 2) == 0) {
        uVar12 = uVar10;
      }
    }
  }
  else {
    iVar1 = param_1[5];
    auStack_80[0] = 0;
    puVar11 = (unsigned int *)(iVar1 + 8);
    uVar8 = *(int *)(iVar1 + 8) + 0x10;
    *puVar11 = uVar8;
    if (*(unsigned int *)(iVar1 + 0x10) <= uVar8) {
      fn_826826A8(puVar11);
    }
    if (*puVar11 != 0) {
      fn_82695DA0(*puVar11,param_3);
    }
    iVar1 = param_1[5];
    puVar11 = (unsigned int *)(iVar1 + 8);
    uVar8 = *(int *)(iVar1 + 8) + 0x10;
    *puVar11 = uVar8;
    if (*(unsigned int *)(iVar1 + 0x10) <= uVar8) {
      fn_826826A8(puVar11);
    }
    if (*puVar11 != 0) {
      fn_82695DA0(*puVar11,param_2);
    }
    iStack_58 = param_1[5];
    uStack_68 = *param_1;
    puStack_6c = auStack_80;
    ppuStack_70 = &lbl_8200579C;
    uStack_5c = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    iStack_50 = (*(int *)(iStack_58 + 8) - *(int *)(iStack_58 + 0xc) >> 4) +
                *(int *)(iStack_58 + 0x1c) * 0x20 + -0x20;
    uStack_54 = 2;
    (**(int (***)())(*(int *)param_1[2] + 0x28))((int *)param_1[2],&ppuStack_70,param_1[3],0);
    fn_82683270((unsigned __int64)(unsigned int)param_1[5] + 8,2);
    if (puStack_6c == (unsigned char *)0x0) {
      fn_826828D8(&ppuStack_70);
      fn_82696330(auStack_80);
      fn_82696330(acStack_90);
      return 0;
    }
    dVar13 = (double)fn_826972E0(puStack_6c,param_1[5]);
    uVar8 = (unsigned int)dVar13;
    dStack_98 = (double)(__int64)(int)uVar8;
    uVar12 = -(unsigned __int64)uVar8;
    if ((param_1[1] & 2) == 0) {
      uVar12 = (unsigned __int64)uVar8;
    }
    fn_826828D8(&ppuStack_70);
    fn_82696330(auStack_80);
  }
  fn_82696330(acStack_90);
  return uVar12;
}

