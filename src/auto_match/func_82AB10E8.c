extern char *pcRam83223634;
#define true 1
extern int fn_82A29A38();
extern int fn_82AB01F0();
extern int fn_82AB02A0();
extern int fn_82AB0740();
extern int fn_82AB0978();
extern int fn_82AB0DA8();
extern int fn_82AB0F30();
extern int fn_82AB0FC0();
extern unsigned int uRam83223630;


unsigned __int64 fn_82AB10E8(unsigned int *param_1,unsigned __int64 param_2,int param_3,int *param_4,int param_5,
                       unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int (**pcVar3)();
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar7;
  unsigned int uVar10;
  unsigned int *puVar11;
  unsigned int uVar12;
  unsigned int *puStack_80;
  unsigned int *apuStack_7c [31];

  *(int **)(param_3 + 0x10) = param_4 + 3;
  param_4[4] = param_5;
  apuStack_7c[0] = param_1 + 1;
  uVar1 = *param_1;
  **(unsigned int **)(param_3 + 0x10) = uVar1;
  if ((uVar1 & 0xffff0000) != 0xffff0000) {
    fn_82A29A38();
  }
  puStack_80 = (unsigned int *)*param_4;
  uVar7 = (param_2 & 0xffffffff) >> 2;
  if (puStack_80 == (unsigned int *)0x0) {
    fn_82A29A38();
  }
  uVar10 = 2;
  if (0xffff01ff < uVar1) {
    uVar10 = 0;
  }
  *puStack_80 = uVar10;
  puStack_80[1] = 0x10100;
  puStack_80 = puStack_80 + 2;
  if (uVar1 < 0xffff0200) {
    fn_82AB0DA8(param_1,uVar7,param_3);
    iVar8 = fn_82AB0F30(&puStack_80,param_4);
    if (iVar8 != 0) {
      return 1;
    }
    fn_82AB0978(uVar1,param_3,&puStack_80);
  }
  apuStack_7c[0] = param_1 + 1;
  uVar2 = *apuStack_7c[0];
  iVar8 = (int)uVar7;
  do {
    if (uVar2 == 0xffff) {
      apuStack_7c[0] = apuStack_7c[0] + 1;
      if ((int)apuStack_7c[0] - (int)param_1 >> 2 == iVar8) {
        iVar8 = fn_82AB0F30(&puStack_80,param_4);
        if (iVar8 != 0) {
          return 1;
        }
        if ((*(int *)(*(int *)(param_3 + 0x10) + 8) == 0) &&
           (uVar7 = fn_82AB0FC0(uVar1,&puStack_80,param_4,param_3), (uVar7 & 0xffffffff) != 0)) {
          return uVar7;
        }
        *puStack_80 = 0x28;
        puStack_80 = puStack_80 + 1;
        param_4[2] = (int)puStack_80 - *param_4 >> 2;
        if ((unsigned int *)param_4[1] < puStack_80) {
          fn_82A29A38();
        }
        return 0;
      }
LAB_82ab14d0:
      fn_82A29A38();
      return 2;
    }
    iVar9 = fn_82AB0F30(&puStack_80,param_4);
    puVar4 = puStack_80;
    if (iVar9 != 0) {
      return 1;
    }
    uVar2 = *apuStack_7c[0];
    uVar12 = uVar2 & 0xffff;
    if ((uVar2 & 0x80000000) == 0) {
      if (uVar12 == 0xfffe) {
        apuStack_7c[0] = apuStack_7c[0] + (uVar2 >> 0x10 & 0x7fff) + 1;
      }
      else if ((uVar12 == 0xfffd) || ((uVar2 & 0xffff) == 0)) {
        apuStack_7c[0] = apuStack_7c[0] + 1;
      }
      else if (uVar12 == 0x51) {
        if (uVar1 < 0xffff0200) {
          apuStack_7c[0] = apuStack_7c[0] + 6;
        }
        else {
          fn_82AB01F0(apuStack_7c,uVar1,&puStack_80);
        }
      }
      else if (uVar12 == 0x30) {
        fn_82AB02A0(apuStack_7c,uVar1,&puStack_80);
      }
      else if (uVar12 == 0x2f) {
        if (uVar1 < 0xffff0200) {
          fn_82A29A38();
        }
        puVar6 = apuStack_7c[0];
        puVar5 = puStack_80;
        uVar2 = apuStack_7c[0][1];
        uVar12 = uVar2 & 0x7ff;
        puVar11 = apuStack_7c[0] + 2;
        if (0xf < uVar12) {
          fn_82A29A38();
          uVar12 = 0xf;
        }
        if ((uVar2 >> 0x14 & 0x700 | uVar2 & 0x1800) != 0xe00) {
          fn_82A29A38();
        }
        *puVar5 = 0x1d;
        apuStack_7c[0] = puVar6 + 3;
        puVar5[1] = uVar12;
        puVar5[2] = (unsigned int)(*puVar11 != 0);
        puStack_80 = puVar5 + 3;
      }
      else if (uVar12 == 0x1f) {
        if (uVar1 < 0xffff0200) {
          fn_82A29A38();
        }
        uVar7 = fn_82AB0740(apuStack_7c,uVar1,param_3,&puStack_80,param_6,param_7);
        if ((uVar7 & 0xffffffff) != 0) {
          return uVar7;
        }
      }
      else {
        if (uVar12 == 0x1c) {
          if (*(int *)(*(int *)(param_3 + 0x10) + 8) != 0) goto LAB_82ab13c0;
          if (uVar1 < 0xffff0200) {
            fn_82A29A38();
          }
          uVar7 = fn_82AB0FC0(uVar1,&puStack_80,param_4,param_3);
          uVar10 = uRam83223630;
          pcVar3 = pcRam83223634;
          if ((uVar7 & 0xffffffff) != 0) {
            return uVar7;
          }
        }
        else {
          if (0x60 < uVar12) goto LAB_82ab1230;
LAB_82ab13c0:
          iVar9 = (uVar2 & 0xffff) * 8;
          uVar10 = *(unsigned int *)(iVar9 + -0x7cddcab0);
          pcVar3 = *(int (***)())(iVar9 + -0x7cddcaac);
        }
        (*pcVar3)(apuStack_7c,uVar1,uVar10,*(unsigned int *)(param_3 + 0x10),&puStack_80);
      }
    }
    else {
LAB_82ab1230:
      fn_82A29A38();
    }
    if (iVar8 < (int)apuStack_7c[0] - (int)param_1 >> 2) {
      fn_82A29A38();
      goto LAB_82ab14d0;
    }
    if (0x3ff < (int)((int)puStack_80 - (int)puVar4 & 0xfffffffcU)) {
      fn_82A29A38();
    }
    uVar2 = *apuStack_7c[0];
  } while( true );
}
