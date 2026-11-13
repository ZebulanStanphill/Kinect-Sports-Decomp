extern int fn_82CAAF00();
extern int fn_82CAAF50();


unsigned __int64 fn_82C7D2D8(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x571c) != 0) {
    uVar1 = *(unsigned int *)(param_1 + 0xea8);
    fn_82CAAF00(*(unsigned int *)(param_1 + 0x3ba4),(int *)(param_1 + 0xea8),0);
    iVar5 = fn_82CAAF50(*(unsigned int *)(param_1 + 0x3ba4),uVar1);
    if (iVar5 != 0) {
      return 0xffffffffffffff9c;
    }
    piVar2 = *(int **)(param_1 + 0xea8);
    iVar5 = *piVar2;
    *(int *)(param_1 + 0xecc) = iVar5;
    iVar3 = piVar2[1];
    *(int *)(param_1 + 0xed0) = iVar3;
    iVar4 = piVar2[2];
    *(int *)(param_1 + 0xed4) = iVar4;
    *(int *)(param_1 + 0xee4) = *(int *)(param_1 + 0xdc) + iVar5;
    *(int *)(param_1 + 0x39e8) = iVar5;
    *(int *)(param_1 + 0x39ec) = iVar3;
    *(int *)(param_1 + 0x39f0) = iVar4;
    *(unsigned int *)(param_1 + 0x571c) = 1;
  }
  return 0;
}

