extern unsigned int *auStack_80;
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826828D8();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_826953D8();
extern int fn_826959C8();
extern int fn_82696AD0();
extern int fn_82696B20();
extern int fn_826ADE60();
extern int fn_826BCA20();
extern int fn_826BCBA0();
extern unsigned int iStack_e4;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


unsigned int * fn_82696D38(unsigned int *param_1,char *param_2,int *param_3,__int64 param_4,char param_5)

{
  unsigned short uVar1;
  int *piVar2;
  char cVar5;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar6;
  int iVar8;
  __int64 lVar7;
  unsigned int uVar9;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  int *piStack_e8;
  int iStack_e4;
  unsigned char bStack_e0;
  unsigned char abStack_d0 [16];
  unsigned char abStack_c0 [16];
  unsigned char **ppuStack_b0;
  unsigned char *pbStack_ac;
  int *piStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned char uStack_9c;
  int *piStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned char auStack_80 [128];
  
  puVar4 = (unsigned int *)(param_3 + 0x1e);
  uVar9 = *(unsigned int *)(param_3[0x1e] + 8);
  iVar8 = *(int *)(uVar9 + 8);
  *param_1 = uVar9;
  *(int *)(uVar9 + 8) = iVar8 + 1;
  switch(*param_2) {
  case '\0':
  case '\n':
    uVar9 = *(unsigned int *)(*puVar4 + 0xcc);
    break;
  case '\x01':
    uVar9 = *(unsigned int *)(*puVar4 + 0xd0);
    break;
  case '\x02':
    uVar9 = *(unsigned int *)(((param_2[4] == '\0') + 0x35) * 4 + *puVar4);
    break;
  case '\x03':
    if ((int)param_4 < 0) {
      param_4 = 10;
    }
    else {
      param_4 = -param_4;
    }
    uVar6 = fn_826BCBA0(*(unsigned __int64 *)(param_2 + 8),param_1,auStack_80,0x40,param_4);
    goto code_r0x82696dd0;
  case '\x04':
    uVar6 = fn_826BCA20(*(unsigned int *)(param_2 + 8),auStack_80,0x40);
code_r0x82696dd0:
    uStack_f0 = fn_82694700((unsigned __int64)*puVar4 + 0x254,uVar6);
    iVar8 = *(int *)(uStack_f0 + 8) + 2;
code_r0x82696dec:
    uVar9 = *param_1;
    *(int *)(uStack_f0 + 8) = iVar8;
    lVar7 = (unsigned __int64)*(unsigned int *)(uVar9 + 8) - 1;
    *(int *)(uVar9 + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8();
    }
    uVar9 = *(unsigned int *)(uStack_f0 + 8);
    *param_1 = uStack_f0;
    lVar7 = (unsigned __int64)uVar9 - 1;
    *(int *)(uStack_f0 + 8) = (int)lVar7;
    if (lVar7 != 0) {
      return param_1;
    }
    fn_826944C8(uStack_f0);
    return param_1;
  case '\x05':
    uVar9 = *(unsigned int *)(param_2 + 4);
    break;
  case '\x06':
  case '\a':
    abStack_c0[0] = 0;
    piVar2 = (int *)fn_82696AD0(param_2,param_3);
    if (((param_5 == '\0') && (piVar2 != (int *)0x0)) &&
       (cVar5 = (**(int (***)())(*piVar2 + 0x2c))(piVar2,puVar4,(unsigned __int64)*puVar4 + 0x154,abStack_c0),
       cVar5 != '\0')) {
      uVar1 = *(unsigned short *)(param_3 + 0x31);
      *(unsigned short *)(param_3 + 0x31) = uVar1 + 1;
      if (uVar1 < 0xff) {
        abStack_d0[0] = 0;
        fn_82696B20(&piStack_e8,abStack_c0,param_3);
        if (piStack_e8 != (int *)0x0) {
          uStack_90 = 0;
          pbStack_ac = abStack_d0;
          uStack_94 = 0;
          ppuStack_b0 = &lbl_8200579C;
          uStack_9c = 0;
          uStack_a4 = 0;
          uStack_a0 = 0;
          piStack_a8 = piVar2;
          piStack_98 = param_3;
          (**(int (***)())(*piStack_e8 + 0x28))(piStack_e8,&ppuStack_b0,iStack_e4,0);
          fn_826828D8(&ppuStack_b0);
        }
        fn_82696D38(&uStack_ec,abStack_d0,param_3,0xffffffffffffffff,0);
        uVar3 = uStack_ec;
        uVar9 = *param_1;
        *(int *)(uStack_ec + 8) = *(int *)(uStack_ec + 8) + 1;
        lVar7 = (unsigned __int64)*(unsigned int *)(uVar9 + 8) - 1;
        *(int *)(uVar9 + 8) = (int)lVar7;
        if (lVar7 == 0) {
          fn_826944C8();
        }
        *param_1 = uVar3;
        lVar7 = (unsigned __int64)*(unsigned int *)(uStack_ec + 8) - 1;
        *(int *)(uStack_ec + 8) = (int)lVar7;
        if (lVar7 == 0) {
          fn_826944C8(uStack_ec);
        }
        if (((bStack_e0 & 2) == 0) && (piStack_e8 != (int *)0x0)) {
          fn_826824B0();
        }
        piStack_e8 = (int *)0x0;
        if (((bStack_e0 & 1) == 0) && (iStack_e4 != 0)) {
          fn_826824B0();
        }
        iStack_e4 = 0;
        if (4 < abStack_d0[0]) {
          fn_826959C8(abStack_d0);
        }
      }
      else {
        uVar9 = *param_1;
        uVar3 = *(unsigned int *)(*puVar4 + 0x14c);
        *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1;
        lVar7 = (unsigned __int64)*(unsigned int *)(uVar9 + 8) - 1;
        *(int *)(uVar9 + 8) = (int)lVar7;
        if (lVar7 == 0) {
          fn_826944C8();
        }
        *param_1 = uVar3;
        cVar5 = (**(int (***)())(*param_3 + 4))(param_3);
        if (cVar5 != '\0') {
          fn_826ADE60(param_3,0xffffffff820061c8);
        }
      }
      *(short *)(param_3 + 0x31) = *(short *)(param_3 + 0x31) + -1;
    }
    else if (((*param_2 == '\x06') && (iVar8 = *(int *)(param_2 + 4), iVar8 != 0)) &&
            (lVar7 = (**(int (***)())(*(int *)(iVar8 + 0x10) + 4))(iVar8 + 0x10,param_3), lVar7 != 0)) {
      uVar3 = fn_82694700((unsigned __int64)*puVar4 + 0x254);
      uVar9 = *param_1;
      *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 2;
      lVar7 = (unsigned __int64)*(unsigned int *)(uVar9 + 8) - 1;
      *(int *)(uVar9 + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8();
      }
      uVar9 = *(unsigned int *)(uVar3 + 8);
      *param_1 = uVar3;
      lVar7 = (unsigned __int64)uVar9 - 1;
      *(int *)(uVar3 + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(uVar3);
      }
    }
    else {
      if ((*param_2 == '\a') && (*(int *)(param_2 + 4) != 0)) {
        puVar4 = (unsigned int *)fn_826953D8(param_2,param_3);
        uVar9 = *puVar4;
      }
      else {
        uVar9 = *(unsigned int *)(*puVar4 + 0x150);
      }
      uVar3 = *param_1;
      *(int *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1;
      lVar7 = (unsigned __int64)*(unsigned int *)(uVar3 + 8) - 1;
      *(int *)(uVar3 + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8();
      }
      *param_1 = uVar9;
    }
    if (abStack_c0[0] < 5) {
      return param_1;
    }
    fn_826959C8(abStack_c0);
    return param_1;
  case '\b':
  case '\v':
    uVar9 = *(unsigned int *)(*puVar4 + 0x148);
    break;
  case '\t':
    uVar6 = 0xffffffff820061b8;
    goto code_r0x826971a8;
  case '\f':
    uVar6 = 0xffffffff820061a4;
code_r0x826971a8:
    fn_82681728(&uStack_f0,(unsigned __int64)*puVar4 + 0x254,uVar6);
    iVar8 = *(int *)(uStack_f0 + 8) + 1;
    goto code_r0x82696dec;
  default:
    uVar9 = *(unsigned int *)(*puVar4 + 0xbc);
  }
  uVar3 = *param_1;
  *(int *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1;
  lVar7 = (unsigned __int64)*(unsigned int *)(uVar3 + 8) - 1;
  *(int *)(uVar3 + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8();
  }
  *param_1 = uVar9;
  return param_1;
}

