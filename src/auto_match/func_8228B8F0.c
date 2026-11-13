extern int fn_82289408();


void fn_8228B8F0(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int lVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar4 = 0;
  piVar3 = (int *)(iVar1 + 0x6a8);
  do {
    if (((*piVar3 == 0) || (*piVar3 == 1)) && (piVar3[1] == param_2)) {
      if ((*(int *)(*(int *)(iVar1 + 0x11f0) + 0x18b8) != 2) ||
         (uVar2 = 1, *(int *)(iVar1 + 0x7c0) != 0)) {
        uVar2 = 0;
      }
      fn_82289408(iVar1,lVar4,uVar2,0);
    }
    lVar4 = lVar4 + 1;
    piVar3 = piVar3 + 0x10;
  } while ((int)lVar4 < 4);
  return;
}

