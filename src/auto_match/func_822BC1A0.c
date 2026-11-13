extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B91F8();
extern int fn_822B9390();
extern int fn_8234C258();
extern int fn_8234C320();
extern int fn_824D03B8();


void fn_822BC1A0(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  unsigned char *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [40];
  
  iVar4 = (int)param_3;
  iVar1 = iVar4 * 0x40 + param_1;
  iVar5 = (int)param_2;
  *(int *)(iVar1 + 0x1b0) = iVar5;
  *(unsigned int *)(iVar1 + 0x1a0) = 1;
  puVar2 = (unsigned int *)(iVar5 + 0x50U & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (unsigned int *)((int)((param_3 + 7U & 0xffffffff) << 6) + param_1 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  puVar2 = (unsigned int *)(iVar5 + 0xc0U & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (unsigned int *)(iVar1 + 0x1d0U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  iVar5 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar5 = fn_824D03B8((double)*(float *)(iVar1 + 0x1ac),*(int *)(param_1 + 0x24),param_3,1);
  }
  if (((((-(*(int *)(**(int **)(param_1 + 0x238) + 0xc4c) != 0) & 3U) < 3) ||
       (*(int *)(*(int *)(param_1 + 0x23c) + 0x13c) == 0)) ||
      (*(int *)(**(int **)(param_1 + 0x238) + 0xcb8) == 0)) || (iVar5 == 0)) {
    if (*(int *)(param_1 + 0x24) == 0) {
      fn_822B9390(*(unsigned int *)(param_1 + 0x11c),param_2,0x21);
    }
    else {
      fn_822B91F8(*(unsigned int *)(param_1 + 0x11c),*(unsigned int *)(param_1 + 0x14),param_2,
                        (iVar4 == 1) + ' ');
    }
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = *(int *)(param_1 + 0x118);
    if (iVar4 == 1) {
      if (*(int *)(iVar1 + 0x2ac) != 1) {
        fn_8234C320(1,iVar1 + 0x294);
      }
      fn_82230110(auStack_60,0xffffffff821acab4);
      fn_8234C258((unsigned __int64)*(unsigned int *)(param_1 + 0x118) + 0x150,1,auStack_60);
      puVar6 = auStack_60;
    }
    else {
      if (*(int *)(iVar1 + 0x280) != 1) {
        fn_8234C320(1,iVar1 + 0x268);
      }
      fn_82230110(auStack_40,0xffffffff821acab4);
      fn_8234C258((unsigned __int64)*(unsigned int *)(param_1 + 0x118) + 0x150,0,auStack_40);
      puVar6 = auStack_40;
    }
    fn_82230300(puVar6,1,0);
  }
  return;
}

