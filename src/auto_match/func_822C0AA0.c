extern unsigned int *auStack_18c;
extern unsigned int *auStack_190;
extern unsigned int *auStack_22c;
extern unsigned int *auStack_230;
extern unsigned int *auStack_2cc;
extern unsigned int *auStack_2d0;
extern unsigned int *auStack_36c;
extern unsigned int *auStack_370;
extern unsigned int *auStack_40c;
extern unsigned int *auStack_410;
extern unsigned int *auStack_450;
extern unsigned int *auStack_ec;
extern unsigned int *auStack_f0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223DFF0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_822C8C08();
extern int fn_82320BE0();
extern int fn_82321138();
extern int fn_82321A10();
extern int fn_8232B210();
extern int fn_8234B0C8();
extern int fn_8234EFA8();
extern int fn_827F5708();
extern int fn_82F63108();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821AFBA4;
extern unsigned int lbl_821AFBC0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_45c;
extern unsigned int uStack_47c;
extern unsigned int uStack_49c;
extern unsigned int uStack_4bc;
extern unsigned int uStack_4dc;
extern unsigned int uStack_4fc;


void fn_822C0AA0(int param_1,unsigned int param_2,unsigned int *param_3)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  char *pcVar6;
  unsigned char *puVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar7;
  unsigned int *******pppppppuVar10;
  char *pcVar12;
  __int64 lVar11;
  double dVar13;
  unsigned int ******appppppuStack_510 [5];
  unsigned int uStack_4fc;
  unsigned int ******appppppuStack_4f0 [5];
  unsigned int uStack_4dc;
  unsigned int ******appppppuStack_4d0 [5];
  unsigned int uStack_4bc;
  unsigned int ******appppppuStack_4b0 [5];
  unsigned int uStack_49c;
  unsigned int ******appppppuStack_490 [5];
  unsigned int uStack_47c;
  unsigned int ******appppppuStack_470 [5];
  unsigned int uStack_45c;
  unsigned char auStack_450 [32];
  unsigned int *****apppppuStack_430 [8];
  unsigned char auStack_410 [4];
  unsigned char auStack_40c [156];
  unsigned char auStack_370 [4];
  unsigned char auStack_36c [156];
  unsigned char auStack_2d0 [4];
  unsigned char auStack_2cc [156];
  unsigned char auStack_230 [4];
  unsigned char auStack_22c [156];
  unsigned char auStack_190 [4];
  unsigned char auStack_18c [156];
  unsigned char auStack_f0 [4];
  unsigned char auStack_ec [236];
  
  uVar2 = *param_3;
  puVar4 = (&lbl_821AFBA4)[uVar2];
  puVar5 = (&lbl_821AFBC0)[uVar2];
  dVar13 = (double)ltcg_pool_0_0f;
  if (*(int *)(*(int *)(param_1 + 0x118) + 0x2e4) != 0) {
    fn_827F5708(dVar13);
  }
  switch(param_2) {
  case 0:
  case 1:
  case 9:
    uVar3 = *(unsigned int *)(param_1 + 0x118);
    puVar9 = (unsigned int *)fn_82321A10(auStack_450,(unsigned __int64)uVar2,param_2);
    if (0xf < (unsigned int)puVar9[5]) {
      puVar9 = (unsigned int *)*puVar9;
    }
    fn_8234EFA8((unsigned __int64)uVar3 + 0x328,puVar9);
    fn_82230300(auStack_450,1,0);
    pcVar6 = (&lbl_821AFBA4)[uVar2];
    uVar7 = fn_82230110(apppppuStack_430,0xffffffff821acce4);
    pcVar12 = pcVar6;
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    puVar9 = (unsigned int *)fn_8223DFF0(uVar7,pcVar6,pcVar12 + (-1 - (int)pcVar6));
    if (0xf < (unsigned int)puVar9[5]) {
      puVar9 = (unsigned int *)*puVar9;
    }
    fn_8234B0C8((double)lbl_8218E8E8,(unsigned __int64)*(unsigned int *)(param_1 + 0x118) + 0x2c0,puVar9);
    pppppppuVar10 = (unsigned int *******)apppppuStack_430;
    goto code_r0x822c0fc0;
  case 2:
    fn_8223CFC0(auStack_370,2,1);
    uVar7 = fn_82240158(auStack_370,0xffffffff821acc30);
    uVar7 = fn_82240158(uVar7,puVar4);
    fn_82240158(uVar7,puVar5);
    fn_822403C8(appppppuStack_4d0,auStack_36c);
    if (uStack_4bc < 0x10) {
      appppppuStack_4d0[0] = appppppuStack_4d0;
    }
    fn_822C8C08(*(unsigned int *)(param_1 + 0x114),appppppuStack_4d0[0]);
    fn_82230300(appppppuStack_4d0,1,0);
    puVar8 = auStack_370;
    break;
  case 3:
  case 4:
    if (*(int *)(param_1 + 0x7a0) == 0) {
LAB_822c0e40:
      *(float *)(param_1 + 0x7c8) = (float)dVar13;
    }
    else {
      if (*(float *)(param_1 + 0x20c) <= *(float *)(param_1 + 0x7c8)) {
        return;
      }
      if (*(float *)(param_1 + 0x210) <= *(float *)(param_1 + 0x7cc)) {
        return;
      }
      if (*(int *)(param_1 + 2000) == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x7a0) == 0) goto LAB_822c0e40;
    }
    lVar11 = (unsigned __int64)uVar2 - 6;
    *(float *)(param_1 + 0x7cc) = (float)dVar13;
    *(unsigned int *)(param_1 + 2000) = (int)lVar11 - ((uVar2 - 7) + (unsigned int)(lVar11 == 0));
    fn_8223CFC0(auStack_f0,2,1);
    uVar7 = fn_82240158(auStack_f0,0xffffffff821accf4);
    uVar7 = fn_82240158(uVar7,puVar4);
    fn_82240158(uVar7,puVar5);
    fn_822403C8(appppppuStack_4b0,auStack_ec);
    if (uStack_49c < 0x10) {
      appppppuStack_4b0[0] = appppppuStack_4b0;
    }
    fn_822C8C08(*(unsigned int *)(param_1 + 0x114),appppppuStack_4b0[0]);
    fn_82230300(appppppuStack_4b0,1,0);
    *(float *)(param_1 + 0x794) = (float)dVar13;
    *(unsigned int *)(param_1 + 0x7a0) = 1;
    if (*(int *)(param_1 + 0x7d4) != 0) {
      fn_82320BE0(*(int *)(param_1 + 0x7d4),0);
    }
    fn_8232B210(param_1 + 0x5c0);
    if (*(int *)(param_1 + 0x718) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(int (***)())(**(int **)(param_1 + 0x718) + 4))(*(int **)(param_1 + 0x718),1);
    fn_82321138(param_1 + 0x538,param_1);
    puVar8 = auStack_f0;
    goto code_r0x822c0ba4;
  case 5:
    fn_8223CFC0(auStack_230,2,1);
    fn_82240158(auStack_230,0xffffffff821acbf0);
    fn_822403C8(appppppuStack_4f0,auStack_22c);
    if (uStack_4dc < 0x10) {
      appppppuStack_4f0[0] = appppppuStack_4f0;
    }
    fn_822C8C08(*(unsigned int *)(param_1 + 0x114),appppppuStack_4f0[0]);
    fn_82230300(appppppuStack_4f0,1,0);
    *(unsigned int *)(param_1 + 0x26c) = *(unsigned int *)(param_1 + 0x1fc);
    *(unsigned int *)(param_1 + 0x268) = 1;
    *(unsigned int *)(param_1 + 0x7a0) = 1;
    fn_8232B210(param_1 + 0x5c0);
    if (*(int *)(param_1 + 0x718) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(int (***)())(**(int **)(param_1 + 0x718) + 4))(*(int **)(param_1 + 0x718),1);
    fn_82321138(param_1 + 0x538,param_1);
    puVar8 = auStack_230;
    goto code_r0x822c0ba4;
  case 6:
    fn_8223CFC0(auStack_2d0,2,1);
    uVar7 = fn_82240158(auStack_2d0,0xffffffff821acce8);
    uVar7 = fn_82240158(uVar7,puVar4);
    fn_82240158(uVar7,puVar5);
    fn_822403C8(appppppuStack_510,auStack_2cc);
    if (uStack_4fc < 0x10) {
      appppppuStack_510[0] = appppppuStack_510;
    }
    fn_822C8C08(*(unsigned int *)(param_1 + 0x114),appppppuStack_510[0]);
    fn_82230300(appppppuStack_510,1,0);
    puVar8 = auStack_2d0;
    *(unsigned int *)(param_1 + 0x7a4) = 1;
    break;
  case 7:
    fn_8223CFC0(auStack_190,2,1);
    uVar7 = fn_82240158(auStack_190,0xffffffff821acc30);
    uVar7 = fn_82240158(uVar7,puVar4);
    fn_82240158(uVar7,puVar5);
    fn_822403C8(appppppuStack_490,auStack_18c);
    if (uStack_47c < 0x10) {
      appppppuStack_490[0] = appppppuStack_490;
    }
    fn_822C8C08(*(unsigned int *)(param_1 + 0x114),appppppuStack_490[0]);
    fn_82230300(appppppuStack_490,1,0);
    puVar8 = auStack_190;
    break;
  case 8:
    fn_8223CFC0(auStack_410,2,1);
    puVar4 = (&lbl_821AFBA4)[uVar2];
    pcVar6 = (&lbl_821AFBC0)[uVar2];
    uVar7 = fn_82240158(auStack_410,0xffffffff821afb68);
    fn_82240158(uVar7,puVar4);
    if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
      uVar7 = fn_82240158(auStack_410,0xffffffff821ac4b4);
      fn_82240158(uVar7,pcVar6);
    }
    fn_822403C8(appppppuStack_470,auStack_40c);
    fn_8223DCC8(auStack_410);
    if (uStack_45c < 0x10) {
      appppppuStack_470[0] = appppppuStack_470;
    }
    fn_8234EFA8((unsigned __int64)*(unsigned int *)(param_1 + 0x118) + 0x328,appppppuStack_470[0]);
    pppppppuVar10 = appppppuStack_470;
code_r0x822c0fc0:
    fn_82230300(pppppppuVar10,1,0);
  default:
    goto switchD_822c0b24_default;
  }
  *(unsigned int *)(param_1 + 0x268) = 1;
  *(unsigned int *)(param_1 + 0x26c) = *(unsigned int *)(param_1 + 0x1fc);
code_r0x822c0ba4:
  fn_8223DCC8(puVar8);
switchD_822c0b24_default:
  return;
}

