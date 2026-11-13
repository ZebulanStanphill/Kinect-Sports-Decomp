extern unsigned int *auStack_60;
extern int sprintf();
extern unsigned int lbl_8200D898;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_57;


void fn_82B9A4B0(double param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  double dVar1;
  unsigned char uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  unsigned char auStack_60 [9];
  unsigned char uStack_57;
  
  if (param_1 < (double)lbl_821AAD20) {
    uVar2 = 0x2d;
    param_1 = -param_1;
  }
  else {
    uVar2 = 0x2b;
  }
  dVar5 = (double)lbl_8200D898;
  iVar4 = 0;
  dVar1 = param_1 - (double)(__int64)(int)param_1;
  dVar6 = (double)(float)dVar1;
  iVar3 = (int)dVar1;
  do {
    dVar1 = (double)(float)(dVar6 - (double)(__int64)iVar3) * dVar5;
    dVar6 = (double)(float)dVar1;
    iVar3 = (int)dVar1;
    sprintf(auStack_60 + iVar4,0xffffffff821aa66c,iVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 9);
  uStack_57 = 0;
  sprintf(param_3,0xffffffff820ddaf0,uVar2,(int)param_1,auStack_60);
  return;
}

