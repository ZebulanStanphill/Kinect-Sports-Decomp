typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AEAB00();
extern int fn_82B168F8();
extern int fn_82B16998();
extern int fn_82B841E8();
extern int fn_82B84350();


void fn_82AECA70(int param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  bool bVar8;
  int iVar10;
  unsigned int *puVar11;
  unsigned int uVar12;
  unsigned __int64 uVar9;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  
  puVar1 = *(unsigned int **)(param_2 + 0x2c);
  puVar2 = *(unsigned int **)(param_2 + 0x30);
  uVar3 = *(unsigned int *)(param_2 + 0x1c);
  uVar4 = puVar1[3];
  uVar5 = *(unsigned int *)(param_2 + 8);
  if ((*(unsigned int *)(param_1 + 0x2c) >> 7 & 1) == 0) {
    uVar17 = (unsigned __int64)(uVar5 >> 1) & 0xf;
  }
  else {
    uVar17 = (unsigned __int64)(unsigned int)(1 << (uVar5 >> 0xe & 7)) - 1;
  }
  uVar14 = 0;
  if ((uVar17 & 0xffffffff) != 0) {
    bVar8 = true;
    if (uVar17 == (uVar17 & ~(uVar17 - 1))) goto LAB_82aecae8;
  }
  bVar8 = false;
LAB_82aecae8:
  if ((!bVar8) && ((uVar5 >> 5 & 1) == 0)) {
    uVar14 = fn_82B84350(param_1,uVar3,0,uVar5 >> 0xe & 7);
  }
  lVar15 = 0;
  for (; (uVar17 & 0xffffffff) != 0; uVar17 = uVar17 - uVar13) {
    uVar13 = uVar17 & ~(uVar17 - 1);
    uVar16 = 0x1f - LZCOUNT((int)uVar13);
    iVar10 = fn_82B841E8(param_1,uVar3,param_4,param_3,1,1);
    uVar5 = *puVar1;
    uVar7 = (unsigned int)((uVar16 & 0xffffffff) << 1);
    uVar6 = *puVar2;
    puVar11 = (unsigned int *)fn_82AD17B0(param_1,uVar4);
    *puVar11 = *puVar11 & 0xf1ffffff | 0x4000000;
    fn_82AD1270(puVar11,uVar5 & 0x1f);
    *puVar11 = (((uVar6 >> 5 & 0xff) >> (uVar7 & 0x3e) & 3) << 2 | 0xe0 |
               (uVar5 >> 5 & 0xff) >> (uVar7 & 0x3e) & 3) << 5 | *puVar11 & 0xfffffc1f;
    uVar12 = fn_82AD1978(iVar10,puVar11);
    *(unsigned int *)(iVar10 + 0x2c) = uVar12;
    uVar9 = fn_82B168F8(param_2,uVar16);
    fn_82B16998(iVar10,0,uVar9);
    fn_82AEAB00(param_1,iVar10,param_2,uVar14,lVar15,uVar16);
    lVar15 = lVar15 + 1;
  }
  if ((uVar14 & 0xffffffff) != 0) {
    uVar4 = (unsigned int)uVar14 & 0xfffffffe;
    *(unsigned int *)(uVar4 + 0x24) = *param_4;
    *(unsigned int *)(*param_4 & 0xfffffffe) = uVar4;
    *(unsigned int *)(uVar4 + 0x28) = (unsigned int)(param_4 + -9) | 1;
    *param_4 = uVar4 + 0x28;
  }
  return;
}

