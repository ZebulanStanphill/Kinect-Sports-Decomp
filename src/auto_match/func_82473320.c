extern int fn_82F4EC30();
extern int fn_82F53380();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_832766DC;


int fn_82473320(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  double dVar6;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar3 = 0;
    uVar4 = 0;
    piVar5 = (int *)(param_1 + 0x1c);
    dVar6 = (double)lbl_821CA460;
    do {
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((*piVar5 == 0) && (uVar1 = fn_82F4EC30(uVar4), (uVar1 & 0xffffffff) != 0)) {
        iVar2 = fn_82F53380(uVar1,param_1 + 0x2c,0,1);
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = iVar2;
        }
        *piVar5 = iVar3;
      }
      iVar3 = *piVar5;
      piVar5[1] = (int)(float)(dVar6 - (double)(*(float *)(iVar3 + 0x58) / *(float *)(iVar3 + 0x50))
                              );
      if (*(int *)(iVar3 + 0x5c) != 0) {
        piVar5[1] = (int)(float)dVar6;
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(iVar3 + 0x5c);
      piVar5 = piVar5 + 2;
    } while ((uVar4 & 0xffffffff) < 2);
  }
  else {
    if (lbl_832766DC != 0) {
      *(unsigned int *)(param_1 + 0x30) = 1;
    }
    iVar3 = 1;
  }
  return iVar3;
}

