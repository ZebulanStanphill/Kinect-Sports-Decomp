typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_c0;
extern int fn_8262FE50();
extern int fn_8262FEC8();
extern int fn_8262FF48();
extern int fn_8263C550();
extern int fn_8263C7F0();
extern int fn_8263CA78();
extern int fn_8263CB10();
extern int fn_82647460();
extern int fn_82923B48();
extern int fn_82923C40();
extern int fn_82BA02A8();
extern unsigned int iStack_b4;
extern unsigned int uStack0000002c;
extern unsigned int uStack0000003c;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_82923DA0(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned int param_4,
                       unsigned int *param_5,unsigned int param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned int uStack0000002c;
  unsigned int uStack0000003c;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int auStack_c0 [3];
  int iStack_b4;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  
  uStack0000002c = param_4;
  uStack0000003c = param_6;
  fn_82923C40();
  fn_8263CA78(param_3,auStack_c0);
  uVar7 = uStack_a4;
  uVar3 = uStack_a8;
  if (param_5 == (unsigned int *)0x0) {
    uVar10 = 0;
    uStack_cc = 0;
    uStack_c8 = uStack_a8;
    bVar2 = false;
    uStack_c4 = uStack_a4;
    uVar11 = ~(unsigned int)param_7 & 1;
  }
  else {
    uStack_d0 = *param_5;
    uStack_cc = param_5[1];
    uStack_c8 = param_5[2];
    uStack_c4 = param_5[3];
    if (((((int)uStack_d0 < 0) || (uStack_a8 < uStack_c8)) || ((int)uStack_c8 < (int)uStack_d0)) ||
       ((((int)uStack_cc < 0 || (uStack_a4 < uStack_c4)) || ((int)uStack_c4 < (int)uStack_cc)))) {
      return 0xffffffff8876086c;
    }
    if (((uStack_d0 != 0) || (uStack_c8 != uStack_a8)) ||
       ((uStack_cc != 0 || (bVar2 = false, uStack_c4 != uStack_a4)))) {
      bVar2 = true;
    }
    uVar10 = uStack_d0;
    if (((param_7 & 1) != 0) || (bVar2)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
  }
  uVar6 = uStack_c4;
  uVar5 = uStack_c8;
  uVar4 = uStack_cc;
  uVar8 = param_3;
  if ((param_7 & 0x10000) != 0) {
    lVar14 = 0;
    if ((0x1a200011 < (int)(auStack_c0[0] & 0xfffffe3f)) &&
       ((int)(auStack_c0[0] & 0xfffffe3f) < 0x1a200015)) {
      uVar1 = uStack_a4 | uStack_a8;
      while ((uVar1 & 3) != 0) {
        lVar14 = lVar14 + 1;
        uVar1 = (uStack_a4 | uStack_a8) << ((unsigned int)lVar14 & 0x3f);
      }
    }
    puVar12 = param_1 + 4;
    fn_8262FF48(param_3,puVar12);
    uVar8 = fn_8263C7F0(uVar3 << ((unsigned int)lVar14 & 0x3f),uVar7 << ((unsigned int)lVar14 & 0x3f),1,
                              lVar14 + 1,0,auStack_c0[0],(iStack_b4 == 3) + '\x02',3);
    param_1[3] = (unsigned int)uVar8;
    uVar13 = -(unsigned __int64)(uVar8 == 0) & 0xffffffff8007000e;
    if ((__int64)uVar13 < 0) {
LAB_82923ffc:
      if (param_1[2] != 0) {
        fn_8262FEC8();
        param_1[2] = 0;
      }
      if (param_1[3] != 0) {
        fn_8262FEC8();
        param_1[3] = 0;
      }
      if (*puVar12 == 0) {
        return uVar13;
      }
      fn_82647460();
      *puVar12 = 0;
      return uVar13;
    }
    lVar14 = fn_8263C550(uVar8 & 0xffffffff,lVar14);
    param_1[2] = (unsigned int)lVar14;
    uVar13 = -(unsigned __int64)(lVar14 == 0) & 0xffffffff8007000e;
    if ((__int64)uVar13 < 0) goto LAB_82923ffc;
    if (uVar11 == 0) {
      fn_82BA02A8(1);
      iVar9 = fn_82923B48(param_3,param_1[2]);
      fn_82BA02A8(0);
      if (iVar9 < 0) {
        return 0xffffffff80004001;
      }
    }
    uVar8 = (unsigned __int64)param_1[2];
  }
  bVar2 = (bool)((auStack_c0[0] & 0x100) != 0x100 & bVar2);
  if (!bVar2) goto LAB_82924190;
  uVar3 = auStack_c0[0] & 0xfffffe3f;
  if ((int)uVar3 < 0x1a20000b) {
LAB_82924168:
    uStack_e0 = uStack_d0;
    uStack_dc = uStack_cc;
    uStack_d8 = uStack_c8;
    uStack_d4 = uStack_c4;
  }
  else {
    if ((int)uVar3 < 0x1a20000d) {
      uVar3 = uVar10 & 0xfffffffe;
      uStack_e0 = uVar10 & 0xfffffffe;
      uStack_d8 = uVar5 + 1 & 0xfffffffe;
      uStack_dc = uVar4;
      uStack_d4 = uVar6;
      if (uStack_a8 < uStack_d8) {
        uStack_d8 = uStack_a8;
      }
    }
    else {
      if (((int)uVar3 < 0x1a200012) || (0x1a200014 < (int)uVar3)) goto LAB_82924168;
      uStack_d8 = uVar5 + 3 & 0xfffffffc;
      uVar3 = uVar10 & 0xfffffffc;
      uStack_e0 = uVar10 & 0xfffffffc;
      uStack_dc = uVar4 & 0xfffffffc;
      uStack_d4 = uVar6 + 3 & 0xfffffffc;
      if (uStack_a8 < uStack_d8) {
        uStack_d8 = uStack_a8;
      }
      if (uStack_a4 < uStack_d4) {
        uStack_d4 = uStack_a4;
      }
    }
    if ((((uVar3 == 0) && (uStack_d8 == uStack_a8)) && (uStack_dc == 0)) && (uStack_d4 == uStack_a4)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
LAB_82924190:
  if ((int)(param_7 & 0x10000) == 0) {
    fn_82BA02A8(1);
    fn_8263CB10(uVar8,&uStack_f0,-(unsigned int)bVar2 & (unsigned int)&uStack_e0,(param_7 & 1) << 0x24);
    fn_82BA02A8(0);
  }
  else {
    fn_8263CB10(uVar8,&uStack_f0,-(unsigned int)bVar2 & (unsigned int)&uStack_e0,(param_7 & 1) << 0x24);
  }
  if (bVar2) {
    uStack_cc = uVar4 - uStack_dc;
    uStack_c8 = uVar5 - uStack_e0;
    uStack_c4 = uVar6 - uStack_dc;
  }
  *param_2 = uStack_ec;
  param_2[1] = auStack_c0[0];
  param_2[2] = uStack_f0;
  param_2[6] = uStack_a8;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[7] = uStack_a4;
  param_2[8] = 0;
  param_2[9] = 1;
  param_2[10] = uStack_d0;
  param_2[0xb] = uStack_cc;
  param_2[0xc] = uStack_c8;
  param_2[0xd] = uStack_c4;
  param_2[0xe] = 0;
  param_2[0xf] = 1;
  param_2[0x10] = 1;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = uStack0000003c;
  param_2[0x14] = uStack0000002c;
  param_1[1] = (unsigned int)param_3;
  *param_1 = (unsigned int)param_7;
  fn_8262FE50(param_3);
  return 0;
}

