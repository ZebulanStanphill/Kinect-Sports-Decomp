extern int fn_824B42A0();
extern int fn_82A1F2F8();
extern int fn_82F4DA20();
extern int fn_82F50348();


void fn_82F52770(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  __int64 lVar5;
  
  uVar1 = fn_824B42A0();
  iVar2 = fn_82F4DA20(2);
  piVar4 = (int *)(param_1 + 0x8200);
  if (*(int *)(iVar2 + 8) != *(int *)(*piVar4 + 8)) {
    lVar5 = 0;
    do {
      fn_82F50348(param_1,iVar2,lVar5,uVar1,1);
      lVar5 = lVar5 + 1;
      param_1 = param_1 + 0xd00;
    } while ((int)lVar5 < 6);
    uVar3 = fn_82A1F2F8();
    *(unsigned int *)(*piVar4 + 4) = uVar3;
    *(unsigned int *)(*piVar4 + 8) = *(unsigned int *)(iVar2 + 8);
  }
  return;
}

