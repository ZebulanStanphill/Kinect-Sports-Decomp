extern int fn_82407740();


unsigned __int64 fn_82407688(int param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  double dVar7;
  
  iVar2 = *(int *)(param_3 + 0x10) * *(int *)(param_1 + 0xe0);
  iVar6 = *(int *)(param_3 + 0x14) * *(int *)(param_1 + 0xe0);
  piVar5 = (int *)(param_2 + 0x20);
  if (*(int *)(param_2 + 0x20) <= *(int *)(param_2 + 8)) {
    piVar5 = (int *)(param_2 + 8);
  }
  iVar3 = *piVar5;
  piVar5 = (int *)(param_2 + 8);
  if (*(int *)(param_2 + 0x20) < *(int *)(param_2 + 8)) {
    piVar5 = (int *)(param_2 + 0x20);
  }
  iVar4 = *piVar5;
  dVar7 = (double)fn_82407740();
  if (dVar7 <= (double)*(float *)(param_3 + 0xc)) {
    if ((iVar3 < iVar2) || (iVar4 < iVar2)) {
      if ((iVar3 < iVar6) || (uVar1 = 0x20, iVar4 < iVar6)) {
        uVar1 = 0x23;
      }
    }
    else {
      uVar1 = 0x21;
    }
  }
  else {
    uVar1 = 0x22;
  }
  return uVar1;
}

