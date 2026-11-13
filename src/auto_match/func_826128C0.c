extern int fn_8251F720();
extern int fn_825D36C8();
extern int fn_8265C9E0();
extern int fn_82F6A53C();
extern int fn_82F6A588();


void fn_826128C0(unsigned __int64 param_1,__int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  iVar6 = fn_82F6A53C();
  if (*(int *)(iVar6 + 0x48) != 0) {
    uVar3 = fn_8251F720(iVar6 + 0x48,0);
    if (*(int *)(iVar6 + 0x4c) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_8251F720(iVar6 + 0x4c,0);
    }
    dVar13 = (double)*(float *)(iVar6 + 0x5c);
    iVar1 = *(int *)(iVar6 + 0x50);
    dVar12 = (double)*(float *)(iVar6 + 0x54);
    dVar11 = (double)*(float *)(iVar6 + 0x68);
    dVar10 = (double)*(float *)(iVar6 + 0x60);
    dVar9 = (double)*(float *)(iVar6 + 0x6c);
    uVar2 = *(unsigned int *)((int)param_2 + 0x4c);
    dVar8 = (double)*(float *)(iVar6 + 100);
    dVar7 = (double)(*(float *)(iVar6 + 0x58) / (float)(dVar12 * dVar13));
    uVar5 = fn_8265C9E0(0x110);
    if ((uVar5 & 0xffffffff) != 0) {
      fn_825D36C8(dVar10,dVar12,dVar7,dVar13,dVar8,dVar11,dVar9,uVar5,uVar2,-(iVar1 != 0) & 4,
                      param_2 + 0x50,uVar3,uVar4);
    }
  }
  fn_82F6A588();
  return;
}

