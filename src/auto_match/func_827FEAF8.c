typedef unsigned char bool;
extern int fn_827FE978();
extern int fn_82800AC8();
extern int fn_82800AF0();
extern int fn_82800AF8();
extern int fn_82800B00();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_827FEAF8(int *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  int *piVar7;
  bool bVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  double dVar11;
  double dVar12;
  
  uVar6 = 0;
  uVar1 = *param_3;
  piVar7 = param_1 + 1;
  *param_3 = 0;
  uVar2 = *(unsigned int *)(*param_1 + 0x1c);
  uVar3 = *(unsigned int *)(*param_1 + 0x20);
  uVar9 = fn_82800AF8(piVar7);
  uVar10 = fn_82800B00(piVar7);
  iVar5 = fn_82800AC8(piVar7);
  dVar12 = (double)(__int64)iVar5;
  iVar5 = fn_82800AF0(piVar7);
  dVar11 = (double)lbl_821AAD20;
  bVar8 = (double)(float)param_1[4] < dVar11;
  if ((dVar12 == dVar11) || (iVar5 == 1)) {
    uVar6 = fn_827FE978(uVar10,uVar9,param_2,uVar1,param_3,uVar3,uVar2,param_6,param_7,bVar8);
  }
  else if (iVar5 == 0) {
    if (bVar8) {
      uVar4 = fn_827FE978(uVar10,dVar11,param_2,uVar1,param_3,uVar3,uVar2,param_6,param_7,1);
      dVar11 = (double)lbl_82002AE0;
    }
    else {
      uVar4 = fn_827FE978(uVar10,(double)lbl_82002AE0,param_2,uVar1,param_3,uVar3,uVar2,param_6,
                            param_7,0);
    }
    uVar6 = fn_827FE978(dVar11,uVar9,param_2,uVar1,param_3,uVar3,uVar2,param_6,param_7,bVar8);
    uVar6 = uVar6 | uVar4;
  }
  else if (iVar5 == 2) {
    if (!bVar8) {
      uVar4 = fn_827FE978(uVar10,dVar11,param_2,uVar1,param_3,uVar3,uVar2,param_6,param_7,1);
    }
    else {
      dVar11 = (double)lbl_82002AE0;
      uVar4 = fn_827FE978(uVar10,dVar11,param_2,uVar1,param_3,uVar3,uVar2,param_6,param_7,0);
    }
    uVar6 = fn_827FE978(dVar11,uVar9,param_2,uVar1,param_3,uVar3,uVar2,param_6,param_7,bVar8);
    uVar6 = uVar6 | uVar4;
  }
  return uVar6;
}

