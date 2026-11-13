extern int fn_83001F78();
extern int fn_83035960();


void fn_83035CC0(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int *piVar3;
  unsigned int uVar2;
  
  if (*(unsigned int *)(param_1 + 0x20) != 0) {
    iVar1 = *(unsigned int *)(param_1 + 0x10);
    if (iVar1 != *(unsigned int *)(param_1 + 0x14)) {
      piVar3 = (unsigned int *)(iVar1 + 8);
      do {
        if (*piVar3 != 0) {
          fn_83001F78(*piVar3,param_1);
          *piVar3 = 0;
        }
        iVar1 = iVar1 + 0x18;
        piVar3 = piVar3 + 6;
      } while (iVar1 != *(unsigned int *)(param_1 + 0x14));
    }
  }
  *(unsigned int *)(param_1 + 0x20) = param_2;
  if ((param_2 != 0) &&
     (uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10), uVar2 != *(unsigned int *)(param_1 + 0x14))) {
    do {
      fn_83035960(uVar2 + 4,param_1);
      uVar2 = uVar2 + 0x18;
    } while ((uVar2 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x14));
  }
  return;
}

