typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AC9F80();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82AEAB00();
extern int fn_82AEB480();
extern int fn_82B168F8();
extern int fn_82B16998();
extern int fn_82B841E8();
extern int fn_82B84350();
extern unsigned int uStack_b0;


void fn_82AECC50(int param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4,char param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  bool bVar9;
  unsigned int uVar12;
  unsigned int *puVar13;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int iVar14;
  unsigned int uVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned int uStack_b0;
  
  puVar1 = *(unsigned int **)(param_2 + 0x2c);
  puVar2 = *(unsigned int **)(param_2 + 0x30);
  uVar3 = *(unsigned int *)(param_2 + 0x1c);
  uVar4 = puVar1[3];
  uVar5 = puVar2[3];
  uVar6 = *(unsigned int *)(param_2 + 8);
  if ((*(unsigned int *)(param_1 + 0x2c) >> 7 & 1) == 0) {
    uVar19 = (unsigned __int64)(uVar6 >> 1) & 0xf;
  }
  else {
    uVar19 = (unsigned __int64)(unsigned int)(1 << (uVar6 >> 0xe & 7)) - 1;
  }
  uStack_b0 = 0;
  if ((uVar19 & 0xffffffff) != 0) {
    bVar9 = true;
    if (uVar19 == (uVar19 & ~(uVar19 - 1))) goto LAB_82aeccd8;
  }
  bVar9 = false;
LAB_82aeccd8:
  if ((!bVar9) && ((uVar6 >> 5 & 1) == 0)) {
    uStack_b0 = fn_82B84350(param_1,uVar3,0,
                                  ((0x8da691691448U >> (uVar19 & 0x7f)) >> (uVar19 & 0x7f)) >>
                                  (uVar19 & 0x7f) & 7);
  }
  lVar17 = 0;
  if ((uVar19 & 0xffffffff) != 0) {
    do {
      uVar16 = uVar19 & ~(uVar19 - 1);
      uVar19 = uVar19 - uVar16;
      uVar18 = 0x1f - LZCOUNT((int)uVar16);
      uVar12 = fn_82B841E8(param_1,uVar3,0,param_3,1,1);
      uVar6 = *puVar1;
      uVar7 = (unsigned int)((uVar18 & 0xffffffff) << 1);
      uVar16 = (unsigned __int64)((uVar6 >> 5 & 0xff) >> (uVar7 & 0x3e));
      puVar13 = (unsigned int *)fn_82AD17B0(param_1,uVar4);
      *puVar13 = *puVar13 & 0xf1ffffff | 0x4000000;
      fn_82AD1270(puVar13,uVar6 & 0x1f);
      *puVar13 = (unsigned int)(((uVar16 & 3) << 2 | 0xe0 | uVar16 & 3) << 5) | *puVar13 & 0xfffffc1f;
      uVar10 = fn_82AEB480(param_1,uVar3,param_4,puVar13);
      fn_82AEAB00(param_1,uVar10,param_2,0,0,4);
      uVar6 = *puVar2;
      uVar8 = (unsigned __int64)((uVar6 >> 5 & 0xff) >> (uVar7 & 0x3e));
      uVar16 = uVar8 & 3;
      if (param_5 == '\0') {
        puVar13 = (unsigned int *)fn_82AD17B0(param_1,uVar5);
        *puVar13 = *puVar13 & 0xf1ffffff | 0x4000000;
        fn_82AD1270(puVar13,uVar6 & 0x1f);
        *puVar13 = (unsigned int)(((uVar8 & 3) << 2 | 0xe0 | uVar16) << 5) | *puVar13 & 0xfffffc1f;
        uVar11 = fn_82AEB480(param_1,uVar3,param_4,puVar13);
        fn_82AEAB00(param_1,uVar11,param_2,0,0,4);
        iVar14 = fn_82B84350(param_1,uVar3,param_4,2);
        uVar10 = fn_82AD17B0(param_1,uVar10);
        uVar15 = fn_82AD1978(iVar14,uVar10);
        *(unsigned int *)(iVar14 + 0x2c) = uVar15;
        uVar10 = fn_82AD17B0(param_1,uVar11);
        uVar15 = fn_82AD1978(iVar14,uVar10);
        *(unsigned int *)(iVar14 + 0x30) = uVar15;
        puVar13 = (unsigned int *)fn_82AD17B0(param_1,iVar14);
        *puVar13 = *puVar13 & 0xf1ffffff | 0x4000000;
        fn_82AD1270(puVar13,0);
        *puVar13 = *puVar13 & 0xffffe01f | 0x1c80;
      }
      else {
        uVar10 = fn_82AC9F80(param_1,uVar10,6);
        fn_82AD1978(uVar12,uVar10);
        puVar13 = (unsigned int *)fn_82AD1918(param_1,uVar5,uVar16,*puVar2 & 0x1f);
      }
      uVar6 = uVar12 & 0xfffffffe;
      *(unsigned int *)(uVar6 + 0x24) = *param_4;
      *(unsigned int *)(*param_4 & 0xfffffffe) = uVar6;
      *(unsigned int *)(uVar6 + 0x28) = (unsigned int)(param_4 + -9) | 1;
      *param_4 = uVar6 + 0x28;
      uVar15 = fn_82AD1978(uVar12,puVar13);
      *(unsigned int *)(uVar12 + 0x2c) = uVar15;
      if ((*(unsigned int *)(param_2 + 8) & 1) != 0) {
        *(unsigned int *)(uVar12 + 8) = *(unsigned int *)(uVar12 + 8) | 1;
      }
      uVar10 = fn_82B168F8(param_2,uVar18);
      fn_82B16998(uVar12,0,uVar10);
      fn_82AEAB00(param_1,uVar12,param_2,uStack_b0,lVar17,uVar18);
      lVar17 = lVar17 + 1;
    } while ((uVar19 & 0xffffffff) != 0);
  }
  if (uStack_b0 != 0) {
    uStack_b0 = uStack_b0 & 0xfffffffe;
    *(unsigned int *)(uStack_b0 + 0x24) = *param_4;
    *(unsigned int *)(*param_4 & 0xfffffffe) = uStack_b0;
    *(unsigned int *)(uStack_b0 + 0x28) = (unsigned int)(param_4 + -9) | 1;
    *param_4 = uStack_b0 + 0x28;
  }
  return;
}

