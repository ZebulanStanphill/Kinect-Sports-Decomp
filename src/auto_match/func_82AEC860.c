typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ACA920();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82AEAB00();
extern int fn_82B168F8();
extern int fn_82B16998();
extern int fn_82B841E8();
extern int fn_82B84350();


void fn_82AEC860(int param_1,int *param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  bool bVar6;
  int iVar8;
  unsigned __int64 uVar7;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  
  puVar1 = (unsigned int *)param_2[0xb];
  uVar2 = param_2[2];
  uVar3 = puVar1[3];
  if ((*(unsigned int *)(param_1 + 0x2c) >> 7 & 1) == 0) {
    uVar13 = (unsigned __int64)(uVar2 >> 1) & 0xf;
  }
  else {
    uVar13 = (unsigned __int64)(unsigned int)(1 << (uVar2 >> 0xe & 7)) - 1;
  }
  iVar4 = param_2[7];
  uVar11 = 0;
  if ((uVar13 & 0xffffffff) != 0) {
    bVar6 = true;
    if (uVar13 == (uVar13 & ~(uVar13 - 1))) goto LAB_82aec8d4;
  }
  bVar6 = false;
LAB_82aec8d4:
  if ((!bVar6) && ((uVar2 >> 5 & 1) == 0)) {
    uVar11 = fn_82B84350(param_1,iVar4,0,
                               ((0x8da691691448U >> (uVar13 & 0x7f)) >> (uVar13 & 0x7f)) >>
                               (uVar13 & 0x7f) & 7);
  }
  lVar12 = 0;
  while ((uVar13 & 0xffffffff) != 0) {
    uVar10 = uVar13 & ~(uVar13 - 1);
    uVar13 = uVar13 - uVar10;
    uVar10 = 0x1f - LZCOUNT((int)uVar10);
    iVar8 = fn_82B841E8(param_1,iVar4,param_4,param_3,1,1);
    for (puVar5 = (unsigned int *)*param_2; puVar5 != (unsigned int *)0x0; puVar5 = (unsigned int *)puVar5[1]) {
      if ((*puVar5 & 0xe000000) == 0) {
        uVar7 = fn_82ACA920(param_1,puVar5,puVar5[3]);
        fn_82AD1978(iVar8,uVar7);
      }
    }
    uVar2 = *puVar1;
    uVar7 = fn_82AD1918(param_1,uVar3,
                              (uVar2 >> 5 & 0xff) >> ((unsigned int)((uVar10 & 0xffffffff) << 1) & 0x3e) & 3
                              ,uVar2 & 0x1f);
    uVar9 = fn_82AD1978(iVar8,uVar7);
    *(unsigned int *)(iVar8 + 0x2c) = uVar9;
    if ((param_2[2] & 1U) != 0) {
      *(unsigned int *)(iVar8 + 8) = *(unsigned int *)(iVar8 + 8) | 1;
    }
    uVar7 = fn_82B168F8(param_2,uVar10);
    fn_82B16998(iVar8,0,uVar7);
    fn_82AEAB00(param_1,iVar8,param_2,uVar11,lVar12,uVar10);
    lVar12 = lVar12 + 1;
  }
  if ((uVar11 & 0xffffffff) != 0) {
    uVar2 = (unsigned int)uVar11 & 0xfffffffe;
    *(unsigned int *)(uVar2 + 0x24) = *param_4;
    *(unsigned int *)(*param_4 & 0xfffffffe) = uVar2;
    *(unsigned int *)(uVar2 + 0x28) = (unsigned int)(param_4 + -9) | 1;
    *param_4 = uVar2 + 0x28;
  }
  return;
}

