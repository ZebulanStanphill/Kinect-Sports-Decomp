extern int fn_82ABDBE8();


unsigned __int64 fn_82B16BA0(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  if (param_2 == 0) {
    if (param_3 != 0) {
      return 0;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = *(unsigned int *)(param_2 + 4);
    if (uVar1 != *(unsigned int *)(param_3 + 4)) {
      return 0;
    }
    uVar3 = 0;
    if (uVar1 != 0) {
      puVar4 = (unsigned int *)(param_2 + 8);
      do {
        cVar2 = fn_82ABDBE8(*puVar4,*(unsigned int *)((param_3 - param_2) + (int)puVar4));
        if (cVar2 == '\0') {
          return 0;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 < uVar1);
    }
  }
  return 1;
}

