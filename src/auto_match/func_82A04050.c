extern int fn_82A02D08();
extern unsigned int lbl_821AAD20;


void fn_82A04050(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  int *piVar3;
  double dVar4;
  double extraout_f1;
  
  piVar3 = (int *)(param_1 + 0x40f0);
  lVar2 = 0x14;
  dVar4 = (double)lbl_821AAD20;
  do {
    uVar1 = fn_82A02D08(dVar4,param_1,param_2,0);
    if (uVar1 != 0) {
      if (*piVar3 == 2) {
        *piVar3 = 1;
      }
      *(unsigned int *)(param_1 + 0x4150) = uVar1 | *(unsigned int *)(param_1 + 0x4150);
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
    dVar4 = extraout_f1;
  } while (lVar2 != 0);
  return;
}

