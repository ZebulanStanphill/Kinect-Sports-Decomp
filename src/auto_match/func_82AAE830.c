extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82A29A38();
extern int fn_82AACF70();
extern int fn_82AAD090();
extern int fn_82AAD2E0();
extern int fn_82AAD4C0();


void fn_82AAE830(int *param_1,unsigned int param_2,unsigned __int64 param_3,int param_4,int *param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  int iVar13;
  unsigned int *apuStack_c0 [4];
  unsigned int auStack_b0 [4];
  unsigned int auStack_a0 [40];
  
  if (*(int *)(param_4 + 4) == 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = (unsigned int)(*(int *)(param_4 + 4) == 2);
  }
  if (param_2 < 0xffff0200) {
    fn_82A29A38();
  }
  puVar11 = (unsigned int *)*param_1;
  puVar1 = (unsigned int *)*param_5;
  uVar4 = *puVar11 & 0x10000000;
  uVar5 = *puVar11 & 0xffff;
  if ((puVar11[1] & 0x80000000) == 0) {
    fn_82A29A38();
  }
  uVar2 = puVar11[1];
  puVar12 = puVar11 + 2;
  puVar3 = apuStack_c0[0];
  uVar9 = uVar2;
  if (uVar4 != 0) {
    if ((*puVar12 & 0x80000000) == 0) {
      fn_82A29A38();
    }
    if (param_2 < 0xffff0201) {
      fn_82A29A38();
    }
    puVar3 = (unsigned int *)*puVar12;
    puVar12 = puVar11 + 3;
    uVar9 = uVar2 & 0x8fffe021 | 0xf0021;
  }
  uVar7 = *puVar12;
  uVar8 = 0;
  if ((uVar7 & 0x80000000) != 0) {
    iVar13 = 0;
    puVar11 = puVar12;
    do {
      puVar12 = puVar11 + 1;
      *(unsigned int *)((int)auStack_b0 + iVar13) = uVar7;
      *(unsigned int *)((int)auStack_a0 + iVar13) = 0;
      if ((uVar7 & 0x2000) == 0x2000) {
        if ((*puVar12 & 0x80000000) == 0) {
          fn_82A29A38();
        }
        uVar7 = *puVar12;
        puVar12 = puVar11 + 2;
        *(unsigned int *)((int)auStack_a0 + iVar13) = uVar7;
      }
      uVar7 = *puVar12;
      uVar8 = uVar8 + 1;
      iVar13 = iVar13 + 4;
      puVar11 = puVar12;
    } while ((uVar7 & 0x80000000) != 0);
    if (4 < uVar8) {
      fn_82A29A38();
    }
  }
  apuStack_c0[0] = puVar1 + 1;
  if (uVar5 == 0x5f) {
    uVar7 = 0xa00005e;
  }
  else {
    uVar7 = 0x800005f;
  }
  uVar6 = auStack_b0[1] & 0xff0000;
  *puVar1 = (uVar10 << 8 | auStack_b0[1] & 0xff) << 0x10 | uVar7;
  uVar10 = uVar9;
  if ((uVar6 != 0xe40000) && (uVar10 = uVar9 | 0xf0000, uVar4 == 0)) {
    uVar10 = uVar9 & 0x8fffe021 | 0xf0021;
  }
  fn_82AACF70(uVar10,param_4,apuStack_c0);
  fn_82AAD090(auStack_b0[0],auStack_a0[0],0,param_4,apuStack_c0);
  if (uVar5 == 0x5f) {
    auStack_a0[3] = auStack_a0[0];
    auStack_b0[3] = auStack_b0[0];
    if ((auStack_b0[0] & 0xb000000) != 0) {
      fn_82A29A38();
    }
  }
  else {
    if (uVar8 != 4) {
      fn_82A29A38();
    }
    fn_82AAD090(auStack_b0[2],auStack_a0[2],0,param_4,apuStack_c0);
  }
  fn_82AAD090(auStack_b0[3],auStack_a0[3],0,param_4,apuStack_c0);
  if (uVar4 == 0) {
    if (uVar6 != 0xe40000) {
      fn_82AAD4C0(uVar2,uVar10,uVar6,param_4,apuStack_c0);
    }
  }
  else {
    fn_82AAD2E0(uVar2,puVar3,uVar6,param_4,apuStack_c0);
  }
  *param_5 = (int)apuStack_c0[0];
  *param_1 = (int)puVar12;
  return;
}

