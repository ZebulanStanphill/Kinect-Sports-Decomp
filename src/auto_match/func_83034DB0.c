extern int fn_83019B78();
extern int fn_83034D00();


unsigned __int64 fn_83034DB0(int param_1,int param_2)

{
  unsigned int *puVar1;
  char cVar4;
  unsigned __int64 uVar2;
  int iVar3;
  
  cVar4 = fn_83034D00();
  if (cVar4 == '\0') {
    uVar2 = 2;
  }
  else {
    for (puVar1 = (unsigned int *)**(unsigned int **)(param_1 + 4); puVar1 != (unsigned int *)0x0;
        puVar1 = (unsigned int *)*puVar1) {
      if (puVar1[1] == *(int *)(param_2 + 0xc)) {
        if (puVar1 != (unsigned int *)0xfffffffc) {
          return 1;
        }
        break;
      }
    }
    iVar3 = fn_83019B78();
    uVar2 = 2;
    if (iVar3 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

