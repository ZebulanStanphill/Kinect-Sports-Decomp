typedef unsigned char bool;
#define TBLr 0
extern unsigned int *auStack_3a0;
extern unsigned int *auStack_3b0;
extern unsigned int fStack_3a4;
extern int fn_829C67A0();
extern int fn_829C6880();
extern int fn_829CA268();
extern int fn_829CB078();
extern int fn_829CB790();
extern int fn_829D08F0();
extern int fn_829D0A28();
extern int fn_829D25A8();
extern int fn_829D2868();
extern int fn_829D2980();
extern int fn_829D29A0();
extern int fn_829D2F18();
extern int fn_829D6F40();
extern int fn_829DA5B8();
extern int fn_829F4EE0();
extern int fn_82A1DDC0();
extern unsigned int lbl_82006848;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83214FEC;
extern unsigned int lbl_83214FF0;
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215008;
extern unsigned int lbl_83215020;
extern unsigned int lbl_83215060;
extern unsigned int lbl_832154D4;
extern unsigned int lbl_83215A40;
extern unsigned int lbl_83215A5C;
extern unsigned int lbl_83215A60;
extern unsigned int lbl_83215A70;
extern unsigned int lbl_83215A90;
extern unsigned int lbl_83215A98;
extern unsigned int lbl_83215A9C;
extern unsigned int lbl_83215AA0;
extern unsigned int lbl_83215AAC;
extern unsigned int lbl_83216540;
extern unsigned int lbl_832170E0;
extern unsigned int lbl_83217134;
extern unsigned int lbl_83217148;
extern unsigned int lbl_8321715C;
extern unsigned int lbl_83217160;
extern unsigned int lbl_83217164;
extern unsigned int lbl_83217168;
extern unsigned int lbl_83217170;
extern unsigned int lbl_83217174;
extern unsigned int lbl_83217270;


void fn_829CBC38(int param_1,int *param_2)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  int iVar5;
  int in_r0;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 *puVar11;
  double dVar12;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned char auStack_3b0 [1];
  float fStack_3a4;
  unsigned char auStack_3a0 [928];
  
  iVar5 = lbl_83217160;
  iVar6 = *(int *)(param_1 + 0x114);
  if (iVar6 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(iVar6 + 0x78);
  }
  if ((lbl_83217160 != 0) &&
     ((((lbl_83215A40 != 0 || ((lbl_83215000 & 0x80000000) == 0)) && (iVar10 == 1)) &&
      (iVar6 = RtlCompareMemory(iVar6 + 0x6c,0xffffffff83215898,0xc), iVar6 == 0xc)))) {
    lbl_83217160 = 0;
    lbl_83217164 = 0;
    lbl_83217174 = 1;
    sync(0);
  }
  bVar1 = iVar10 == 1;
  uVar3 = TBLr;
  param_2[0x10] = (int)uVar3;
  if (param_2[5] != 0) {
    *(unsigned __int64 *)(param_2[5] + 8) = *(unsigned __int64 *)(*(int *)(param_1 + 0x110) + 0x50);
    *(unsigned int *)(param_2[5] + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x48);
  }
  if (param_2[4] != 0) {
    *(unsigned __int64 *)(param_2[4] + 8) = *(unsigned __int64 *)(*(int *)(param_1 + 0x110) + 0x50);
    *(unsigned int *)(param_2[4] + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x48);
  }
  if (param_2[3] != 0) {
    *(unsigned __int64 *)(param_2[3] + 8) = *(unsigned __int64 *)(*(int *)(param_1 + 0x110) + 0x50);
    *(unsigned int *)(param_2[3] + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x48);
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x114) + 0x48) =
         *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x48);
    if (param_2[1] != 0) {
      *(unsigned __int64 *)(param_2[1] + 8) = *(unsigned __int64 *)(*(int *)(param_1 + 0x114) + 0x50);
      *(unsigned int *)(param_2[1] + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x48);
      iVar6 = *(int *)(param_1 + 0x114);
      iVar10 = param_2[1];
      *(unsigned int *)(iVar10 + 0x24) = *(unsigned int *)(iVar6 + 0x6c);
      *(unsigned int *)(iVar10 + 0x28) = *(unsigned int *)(iVar6 + 0x70);
      *(unsigned int *)(iVar10 + 0x2c) = *(unsigned int *)(iVar6 + 0x74);
    }
    if (*param_2 != 0) {
      *(unsigned __int64 *)(*param_2 + 8) = *(unsigned __int64 *)(*(int *)(param_1 + 0x114) + 0x50);
      *(unsigned int *)(*param_2 + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x48);
      iVar6 = *(int *)(param_1 + 0x114);
      iVar10 = *param_2;
      *(unsigned int *)(iVar10 + 0x24) = *(unsigned int *)(iVar6 + 0x6c);
      *(unsigned int *)(iVar10 + 0x28) = *(unsigned int *)(iVar6 + 0x70);
      *(unsigned int *)(iVar10 + 0x2c) = *(unsigned int *)(iVar6 + 0x74);
    }
  }
  iVar6 = 0;
  if ((lbl_832154D4 == 0) && (lbl_83215020 != 0x32)) {
    fn_829CA268(*(unsigned int *)(param_1 + 0x114),*(unsigned int *)(param_1 + 0x110));
  }
  lbl_83215A5C = lbl_83215A60 ^ 1;
  if (lbl_83215008 == 1) {
    iVar10 = param_1 + 0x20;
    fn_829F4EE0(iVar10,(unsigned __int64)lbl_83217270 + 4,(unsigned __int64)(unsigned int)param_2[5] + 0x30,
                      auStack_3a0,auStack_3b0);
    if ((lbl_832170E0 == 0) && (lbl_83215060 == 0)) {
      fn_829CB078(iVar10,0xffffffff832177b4);
    }
    uVar3 = TBLr;
    param_2[0x11] = (int)uVar3;
    *(unsigned int *)(param_2[5] + 0x70) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x5c);
    fn_829D0A28((unsigned __int64)*(unsigned int *)(param_1 + 0x110) + 0x48,param_2[5]);
    if ((lbl_83215A40 != 0) || ((lbl_83215000 & 0x80000000) == 0)) {
      iVar9 = lbl_83215A5C * 0xae0;
      dVar12 = (double)lbl_821AAD20;
      puVar11 = (unsigned __int64 *)(&lbl_83215A90 + iVar9);
      *(unsigned int *)(&lbl_83215A9C + iVar9) = *(unsigned int *)(&lbl_83215A9C + iVar9) & 0xfffffffd;
      if (((double)fStack_3a4 == dVar12) && ((lbl_83215000 & 0x800) != 0)) {
        fn_829C6880();
        puVar4 = (unsigned int *)((unsigned int)(auStack_3b0 + in_r0) & 0xfffffff0);
        *puVar4 = in_register_00010010;
        puVar4[1] = in_register_00010014;
        puVar4[2] = in_register_00010018;
        puVar4[3] = in_vr1;
        if ((double)fStack_3a4 != dVar12) {
          *(unsigned int *)(&lbl_83215AA0 + iVar9) = in_register_00010010;
          *(unsigned int *)(iVar9 + -0x7cdea55c) = in_register_00010014;
          *(unsigned int *)(iVar9 + -0x7cdea558) = in_register_00010018;
          *(unsigned int *)(&lbl_83215AAC + iVar9) = in_vr1;
          *(unsigned int *)(&lbl_83215A9C + iVar9) = *(unsigned int *)(&lbl_83215A9C + iVar9) | 2;
        }
      }
      else {
        puVar4 = (unsigned int *)((unsigned int)(auStack_3b0 + in_r0) & 0xfffffff0);
        in_register_00010010 = *puVar4;
        in_register_00010014 = puVar4[1];
        in_register_00010018 = puVar4[2];
        in_vr1 = puVar4[3];
      }
      *(unsigned int *)(&lbl_83215AA0 + iVar9) = in_register_00010010;
      *(unsigned int *)(iVar9 + -0x7cdea55c) = in_register_00010014;
      *(unsigned int *)(iVar9 + -0x7cdea558) = in_register_00010018;
      *(unsigned int *)(&lbl_83215AAC + iVar9) = in_vr1;
      *(float *)(&lbl_83215AAC + iVar9) = *(float *)(&lbl_83215AAC + iVar9) * lbl_82006848;
      fn_829C67A0(iVar9 + -0x7cdea550);
      fn_829D25A8(iVar9 + -0x7cdea540,auStack_3a0,iVar10);
      *puVar11 = *(unsigned __int64 *)(*(int *)(param_1 + 0x110) + 0x50);
      *(unsigned int *)(&lbl_83215A98 + iVar9) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x48);
      *(unsigned int *)(&lbl_83215A70 + iVar9) = (lbl_83215060 == 0 ^ 1) + 1;
      if (lbl_83217148 != 0) {
        fn_829D6F40(puVar11);
      }
      fn_829D29A0(puVar11);
      fn_829D2980(puVar11);
      fn_829D2F18(puVar11,iVar10);
      *(unsigned int *)(&lbl_83216540 + iVar9) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x5c);
      uVar3 = TBLr;
      param_2[0x12] = (int)uVar3;
      fn_829D2868(1);
      if (lbl_83217174 == 1) {
        fn_82A1DDC0(lbl_83217168,puVar11,0xab0);
      }
    }
  }
  else {
    uVar3 = TBLr;
    param_2[0x11] = (int)uVar3;
    if (param_2[5] != 0) {
      *(unsigned int *)(param_2[5] + 0x70) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x5c);
    }
  }
  if (param_2[4] != 0) {
    *(unsigned __int64 *)(param_2[4] + 8) = *(unsigned __int64 *)(*(int *)(param_1 + 0x110) + 0x50);
    *(unsigned int *)(param_2[4] + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x48);
    *(unsigned int *)(param_2[4] + 0x70) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x5c);
    fn_829D08F0(0,param_2[4],0);
    param_2[4] = 0;
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x118) + 0x70) =
         *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x5c);
    iVar6 = *(int *)(param_1 + 0x118);
    *(unsigned __int64 *)(iVar6 + 8) = *(unsigned __int64 *)(*(int *)(param_1 + 0x110) + 0x50);
    *(unsigned int *)(iVar6 + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x48);
    *(unsigned int *)(param_1 + 0x118) = 0;
    fn_829D08F0(4,iVar6,0);
  }
  if (param_2[3] != 0) {
    *(unsigned int *)(param_2[3] + 0x70) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x5c);
    *(unsigned __int64 *)(param_2[3] + 8) = *(unsigned __int64 *)(*(int *)(param_1 + 0x110) + 0x50);
    *(unsigned int *)(param_2[3] + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x48);
    fn_829D08F0(1,param_2[3],0);
    param_2[3] = 0;
  }
  if (*(int *)(param_1 + 0x114) == 0) goto LAB_829cc324;
  if ((param_2[6] & 2U) != 0) {
    if (lbl_83217174 == 1) {
      if (param_2[1] == 0) {
        if (*param_2 != 0) {
          uVar8 = (__int64)lbl_83214FEC * (__int64)lbl_83214FF0;
          uVar2 = *(unsigned int *)(lbl_83217170 + 100);
          uVar7 = ((unsigned __int64)*(unsigned int *)(lbl_83217134 + 0x74) & 0x3fffffff) * 4 +
                  (unsigned __int64)*(unsigned int *)(lbl_83217134 + 0x3c);
          goto LAB_829cc1c8;
        }
      }
      else {
        uVar7 = (unsigned __int64)*(unsigned int *)(param_2[1] + 100);
        uVar2 = *(unsigned int *)(lbl_83217170 + 100);
        uVar8 = (__int64)lbl_83214FEC * (__int64)lbl_83214FF0;
LAB_829cc1c8:
        fn_82A1DDC0(uVar2,uVar7,(uVar8 & 0x3fffffff) << 2);
        fn_829CB790(lbl_83217170 + 0x30);
      }
      *(unsigned __int64 *)(lbl_83217170 + 8) = *(unsigned __int64 *)(*(int *)(param_1 + 0x114) + 0x50);
      *(unsigned int *)(lbl_83217170 + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x114) + 0x48);
      iVar9 = lbl_83217170;
      iVar10 = *(int *)(param_1 + 0x114);
      *(unsigned int *)(lbl_83217170 + 0x24) = *(unsigned int *)(iVar10 + 0x6c);
      *(unsigned int *)(iVar9 + 0x28) = *(unsigned int *)(iVar10 + 0x70);
      *(unsigned int *)(iVar9 + 0x2c) = *(unsigned int *)(iVar10 + 0x74);
    }
    if ((*param_2 != 0) && ((param_2[6] & 4U) != 0)) {
      *(unsigned int *)(*param_2 + 0x70) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x5c);
      *(unsigned __int64 *)(*param_2 + 8) = *(unsigned __int64 *)(*(int *)(param_1 + 0x114) + 0x50);
      *(unsigned int *)(*param_2 + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x114) + 0x48);
      fn_829D08F0(3,*param_2,bVar1);
      *param_2 = 0;
    }
    if (param_2[1] != 0) {
      *(unsigned int *)(param_2[1] + 0x70) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x5c);
      *(unsigned __int64 *)(param_2[1] + 8) = *(unsigned __int64 *)(*(int *)(param_1 + 0x114) + 0x50);
      *(unsigned int *)(param_2[1] + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x114) + 0x48);
      fn_829D08F0(2,param_2[1],bVar1);
      param_2[1] = 0;
    }
  }
  if ((param_2[2] != 0) && ((param_2[6] & 0x100U) != 0)) {
    *(unsigned int *)(param_2[2] + 0x70) = *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x5c);
    *(unsigned __int64 *)(param_2[2] + 8) = *(unsigned __int64 *)(*(int *)(param_1 + 0x114) + 0x50);
    *(unsigned int *)(param_2[2] + 0x10) = *(unsigned int *)(*(int *)(param_1 + 0x114) + 0x48);
    fn_829D08F0(5,param_2[2],bVar1);
    param_2[2] = 0;
  }
LAB_829cc324:
  if (((lbl_83215000 & 0x80000000) == 0) && (iVar6 != 0)) {
    fn_829DA5B8((unsigned __int64)lbl_83215A5C * 0xae0 + -0x7cdea570,iVar6 + 8,
                      (unsigned __int64)(unsigned int)param_2[5] + 8);
  }
  if (lbl_83217174 == 1) {
    lbl_83217174 = 0;
    lbl_8321715C = 0;
    sync(0);
    KeSetEvent(iVar5,1,0);
  }
  param_2[5] = 0;
  return;
}

