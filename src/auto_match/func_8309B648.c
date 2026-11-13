#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define TBLr 0
extern unsigned int *auStack_d0;
extern unsigned int fStack_114;
extern unsigned int fStack_118;
extern unsigned int fStack_184;
extern unsigned int fStack_188;
extern int fn_82CE5410();
extern int fn_82CE8B30();
extern int fn_82CFBAD8();
extern int fn_8309ACD0();
extern unsigned int iStack_12c;
extern unsigned int iStack_198;
extern unsigned int iStack_1a0;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_104;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_130;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_14a;
extern unsigned int uStack_14c;
extern unsigned int uStack_14e;
extern unsigned int uStack_14f;
extern unsigned int uStack_150;
extern unsigned int uStack_154;
extern unsigned int uStack_158;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_168;
extern unsigned int uStack_16c;
extern unsigned int uStack_174;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_18c;
extern unsigned int uStack_190;
extern unsigned int uStack_194;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1ba;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1be;
extern unsigned int uStack_1bf;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1d0;
extern unsigned int uStack_1d8;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1ec;
extern unsigned int uStack_1f0;
extern unsigned int uStack_1f4;
extern unsigned int uStack_1f8;
extern unsigned int uStack_1fc;
extern unsigned int uStack_200;
extern unsigned int uStack_204;
extern unsigned int uStack_208;
extern unsigned int uStack_20c;
extern unsigned int uStack_210;
extern unsigned int uStack_dc;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_8309B648(double param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                  unsigned __int64 param_9,int *param_10)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  int *piVar12;
  unsigned __int64 uVar13;
  int *piStack0000004c;
  unsigned int in_stack_00000054;
  char in_stack_0000005f;
  unsigned int uStack_210;
  unsigned int uStack_20c;
  unsigned int uStack_208;
  unsigned int uStack_204;
  unsigned int uStack_200;
  struct { unsigned int first; unsigned int second; } stack_pair_1fc;

  unsigned int uStack_1f4;
  unsigned int uStack_1f0;
  unsigned int uStack_1ec;
  unsigned int uStack_1e8;
  unsigned int uStack_1e4;
  unsigned int *puStack_1e0;
  unsigned __int64 uStack_1d8;
  unsigned int uStack_1d0;
  unsigned char uStack_1c0;
  unsigned char uStack_1bf;
  unsigned char uStack_1be;
  unsigned short uStack_1bc;
  unsigned short uStack_1ba;
  unsigned int uStack_1b0;
  unsigned int uStack_1ac;
  unsigned int uStack_1a8;
  int iStack_1a0;
  int iStack_198;
  unsigned int uStack_194;
  unsigned int uStack_190;
  unsigned int uStack_18c;
  float fStack_188;
  float fStack_184;
  unsigned int uStack_180;
  unsigned int uStack_17c;
  unsigned int uStack_174;
  unsigned int uStack_16c;
  unsigned int uStack_168;
  unsigned int uStack_164;
  unsigned int uStack_160;
  unsigned int uStack_15c;
  unsigned int uStack_158;
  unsigned int uStack_154;
  unsigned char uStack_150;
  unsigned char uStack_14f;
  unsigned char uStack_14e;
  unsigned short uStack_14c;
  unsigned short uStack_14a;
  unsigned int uStack_140;
  unsigned int uStack_13c;
  unsigned int uStack_138;
  unsigned int uStack_130;
  int iStack_12c;
  unsigned int uStack_128;
  unsigned int uStack_124;
  unsigned int uStack_120;
  unsigned int uStack_11c;
  float fStack_118;
  float fStack_114;
  unsigned int uStack_110;
  unsigned int uStack_10c;
  unsigned int uStack_104;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned int uStack_dc;
  unsigned char auStack_d0 [208];

  uVar10 = (unsigned int)param_5;
  iVar5 = (int)param_8;
  piStack0000004c = param_10;
  if (in_stack_0000005f != '\0') {
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar6 = *(unsigned int **)(iVar4 + 4);
    if (puVar6 < *(unsigned int **)(iVar4 + 0xc)) {
      *puVar6 = "LtAutoJob";
      puVar6[3] = "StAddJobs";
      uVar2 = TBLr;
      puVar6[1] = (int)uVar2;
      *(unsigned int **)(iVar4 + 4) = puVar6 + 4;
    }
    uVar13 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x24);
    uVar11 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x2c);
    iVar5 = 0;
    do {
      iVar4 = (int)param_8;
      uStack_fc = *(unsigned int *)(iVar4 + 0x1c);
      fStack_118 = (float)param_1;
      uStack_f8 = *(unsigned int *)(iVar4 + 0x14);
      fStack_114 = (float)param_2;
      uStack_f4 = *(unsigned int *)(iVar4 + 0x10);
      uStack_f0 = *(unsigned int *)(iVar4 + 0x34);
      uStack_ec = *(unsigned int *)(iVar4 + 0x38);
      uStack_e8 = *(unsigned int *)(iVar4 + 0x3c);
      uStack_e4 = *(unsigned int *)(iVar4 + 0x40);
      uStack_150 = 7;
      uStack_14f = 3;
      uStack_14c = 0x70;
      uStack_14a = 0xffff;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_14e = 1;
      uStack_13c = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_110 = in_stack_00000054;
      uStack_10c = (unsigned int)uVar13;
      uStack_104 = (unsigned int)uVar11;
      uStack_1d8 = param_8;
      iStack_12c = iVar5;
      uStack_124 = (int)param_3;
      uStack_120 = (int)param_4;
      uStack_11c = uVar10;
      fn_82CE8B30(param_9,&uStack_150,1);
      uVar2 = uStack_1d8;
      piVar12 = piStack0000004c;
      iVar5 = iVar5 + 1;
      uVar13 = (param_5 & 0x3ffffff) * 0x40 + uVar13;
      uVar11 = (param_5 & 0xffffff) * 0x100 + uVar11;
      param_8 = uStack_1d8;
    } while (iVar5 < 8);
    (**(int (***)())(*piStack0000004c + 0xc))(piStack0000004c,param_9,0xb);
    iVar5 = KeTlsGetValue(lbl_8323B4A0);
    puVar6 = *(unsigned int **)(iVar5 + 4);
    if (puVar6 < *(unsigned int **)(iVar5 + 0xc)) {
      *puVar6 = "StWaitThreads";
      uVar3 = TBLr;
      puVar6[1] = (int)uVar3;
      *(unsigned int **)(iVar5 + 4) = puVar6 + 3;
    }
    (**(int (***)())(*piVar12 + 0x10))(piVar12);
    iVar5 = KeTlsGetValue(lbl_8323B4A0);
    puVar6 = *(unsigned int **)(iVar5 + 4);
    if (puVar6 < *(unsigned int **)(iVar5 + 0xc)) {
      *puVar6 = &lbl_8202CF7C;
      uVar3 = TBLr;
      puVar6[1] = (int)uVar3;
      *(unsigned int **)(iVar5 + 4) = puVar6 + 3;
    }
    fn_82CFBAD8(*(unsigned int *)((int)uVar2 + 0x10));
    return;
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar6 = *(unsigned int **)(iVar4 + 4);
  if (puVar6 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar6 = "TtCPUSplit";
    uVar2 = TBLr;
    puVar6[1] = (int)uVar2;
    *(unsigned int **)(iVar4 + 4) = puVar6 + 3;
  }
  uStack_1f4 = uVar10;
  if (uVar10 == 0) {
    uStack_20c = 0;
LAB_8309b8ec:
    uStack_200 = 0x80000000;
  }
  else {
    iVar4 = fn_82CE5410();
    uStack_20c = (**(int (***)())(**(int **)(iVar4 + 0x10) + 0xc))
                           (*(int **)(iVar4 + 0x10),&uStack_1f4,0x10);
    if (uStack_1f4 == 0) goto LAB_8309b8ec;
    uStack_200 = uStack_1f4;
  }
  uStack_1ec = uVar10;
  if (uVar10 == 0) {
    uStack_210 = 0;
  }
  else {
    iVar4 = fn_82CE5410();
    uStack_210 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 0xc))
                           (*(int **)(iVar4 + 0x10),&uStack_1ec,0x10);
    uStack_204 = uStack_1ec;
    if (uStack_1ec != 0) goto LAB_8309b938;
  }
  uStack_204 = 0x80000000;
LAB_8309b938:
  stack_pair_1fc.first = 8;
  iVar4 = fn_82CE5410();
  puVar6 = (unsigned int *)
           (**(int (***)())(**(int **)(iVar4 + 0x10) + 0xc))(*(int **)(iVar4 + 0x10),&stack_pair_1fc.first,0xc);
  uVar11 = (unsigned __int64)stack_pair_1fc.first;
  uStack_208 = stack_pair_1fc.first;
  if (stack_pair_1fc.first == 0) {
    uStack_208 = 0x80000000;
  }
  uStack_dc = stack_pair_1fc.first;
  puVar8 = puVar6;
  if (0 < (int)stack_pair_1fc.first) {
    do {
      if (puVar8 != (unsigned int *)0x0) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0x80000000;
      }
      uVar11 = uVar11 - 1;
      puVar8 = puVar8 + 3;
    } while (uVar11 != 0);
  }
  puStack_1e0 = puVar6;
  fn_8309ACD0(param_3,param_4,param_5,uStack_20c,uStack_210,puVar6,auStack_d0);
  uStack_1e4 = 8;
  iVar4 = fn_82CE5410();
  uVar7 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 0xc))(*(int **)(iVar4 + 0x10),&uStack_1e4,4);
  uStack_1d8 = CONCAT44(uVar7,(((unsigned __int64)(uStack_1d8) >> 32) & 0xFFFFFFFF));
  stack_pair_1fc.second = uStack_1e4;
  if (uStack_1e4 == 0) {
    stack_pair_1fc.second = 0x80000000;
  }
  uStack_1e8 = 8;
  iVar4 = fn_82CE5410();
  uStack_1d0 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 0xc))(*(int **)(iVar4 + 0x10),&uStack_1e8,4);
  uStack_1f0 = uStack_1e8;
  if (uStack_1e8 == 0) {
    uStack_1f0 = 0x80000000;
  }
  lVar9 = 8;
  uVar13 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x24);
  uVar11 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x2c);
  piVar12 = puVar6 + 1;
  do {
    if (*piVar12 != 0) {
      uStack_1c0 = 7;
      uStack_1bf = 3;
      uStack_1bc = 0x70;
      uStack_1ba = 0xffff;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1be = 1;
      uStack_1ac = 0;
      iStack_1a0 = piVar12[-1];
      uStack_16c = *(unsigned int *)(iVar5 + 0x1c);
      uStack_168 = *(unsigned int *)(iVar5 + 0x14);
      uStack_164 = *(unsigned int *)(iVar5 + 0x10);
      uStack_160 = *(unsigned int *)(iVar5 + 0x34);
      uStack_15c = *(unsigned int *)(iVar5 + 0x38);
      uStack_158 = *(unsigned int *)(iVar5 + 0x3c);
      uStack_154 = *(unsigned int *)(iVar5 + 0x40);
      iStack_198 = *piVar12;
      fStack_188 = (float)param_1;
      fStack_184 = (float)param_2;
      uStack_180 = in_stack_00000054;
      uStack_17c = (unsigned int)uVar13;
      uStack_174 = (unsigned int)uVar11;
      uStack_194 = (int)param_3;
      uStack_190 = (int)param_4;
      uStack_18c = uVar10;
      fn_82CE8B30(param_9,&uStack_1c0,1);
      uVar13 = (param_5 & 0x3ffffff) * 0x40 + uVar13;
      uVar11 = (param_5 & 0xffffff) * 0x100 + uVar11;
      param_10 = piStack0000004c;
      puVar6 = puStack_1e0;
    }
    lVar9 = lVar9 + -1;
    piVar12 = piVar12 + 3;
  } while (lVar9 != 0);
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar8 = *(unsigned int **)(iVar4 + 4);
  if (puVar8 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar8 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar8[1] = (int)uVar2;
    *(unsigned int **)(iVar4 + 4) = puVar8 + 3;
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar8 = *(unsigned int **)(iVar4 + 4);
  if (puVar8 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar8 = "TtAutoBundleJobs";
    uVar2 = TBLr;
    puVar8[1] = (int)uVar2;
    *(unsigned int **)(iVar4 + 4) = puVar8 + 3;
  }
  (**(int (***)())(*param_10 + 0xc))(param_10,param_9,0xb);
  (**(int (***)())(*param_10 + 0x10))(param_10);
  fn_82CFBAD8(*(unsigned int *)(iVar5 + 0x10));
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar8 = *(unsigned int **)(iVar5 + 4);
  if (puVar8 < *(unsigned int **)(iVar5 + 0xc)) {
    *puVar8 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar8[1] = (int)uVar2;
    *(unsigned int **)(iVar5 + 4) = puVar8 + 3;
  }
  iVar5 = fn_82CE5410();
  if ((uStack_1f0 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
              (*(int **)(iVar5 + 0x10),uStack_1d0,uStack_1f0 & 0x3fffffff,4);
  }
  iVar5 = fn_82CE5410();
  if ((stack_pair_1fc.second & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
              (*(int **)(iVar5 + 0x10),(((unsigned __int64)(uStack_1d8) >> 0) & 0xFFFFFFFF),stack_pair_1fc.second & 0x3fffffff,4);
  }
  iVar5 = fn_82CE5410();
  uVar11 = (unsigned __int64)uStack_dc;
  piVar12 = *(int **)(iVar5 + 0x10);
  if (0 < (int)uStack_dc) {
    puVar8 = puVar6 + -1;
    do {
      iVar5 = fn_82CE5410();
      piVar1 = *(int **)(iVar5 + 0x10);
      puVar8[2] = 0;
      if ((puVar8[3] & 0x80000000) == 0) {
        (**(int (***)())(*piVar1 + 0x10))(piVar1,puVar8[1],puVar8[3] & 0x3fffffff,4);
      }
      puVar8[1] = 0;
      uVar11 = uVar11 - 1;
      puVar8 = puVar8 + 3;
      *puVar8 = 0x80000000;
    } while (uVar11 != 0);
  }
  if ((uStack_208 & 0x80000000) == 0) {
    (**(int (***)())(*piVar12 + 0x10))(piVar12,puVar6,uStack_208 & 0x3fffffff,0xc);
  }
  iVar5 = fn_82CE5410();
  if ((uStack_204 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
              (*(int **)(iVar5 + 0x10),uStack_210,uStack_204 & 0x3fffffff,0x10);
  }
  iVar5 = fn_82CE5410();
  if ((uStack_200 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
              (*(int **)(iVar5 + 0x10),uStack_20c,uStack_200 & 0x3fffffff,0x10);
  }
  return;
}
