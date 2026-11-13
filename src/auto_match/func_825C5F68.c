extern int fn_82560690();
extern int fn_826190C8();


unsigned __int64 fn_825C5F68(int param_1)

{
  unsigned int *puVar1;
  int iVar3;
  unsigned __int64 uVar2;
  char cVar4;
  
  iVar3 = fn_82560690(0);
  if (iVar3 < 2) {
    uVar2 = 0;
    for (puVar1 = *(unsigned int **)(param_1 + 8); puVar1 != (unsigned int *)0x0;
        puVar1 = (unsigned int *)puVar1[1]) {
      cVar4 = fn_826190C8(*puVar1);
      if (cVar4 != '\0') {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

