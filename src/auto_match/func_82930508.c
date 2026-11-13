unsigned __int64 fn_82930508(unsigned int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  
  if ((param_2 == 0) || (*(int *)(param_2 + 4) != param_1[1])) {
LAB_82930534:
    uVar1 = 0;
  }
  else {
    do {
      if (param_1[1] != 1) {
        iVar3 = (**(int (***)())*param_1)(param_1,param_2);
        if (iVar3 == 0) {
          return 0;
        }
        break;
      }
      if ((param_2 == 0) || (*(int *)(param_2 + 4) != 1)) goto LAB_82930534;
      if ((unsigned int *)param_1[2] == (unsigned int *)0x0) {
        uVar2 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 8)) >> 5;
      }
      else {
        uVar2 = (*(int (**)())**(unsigned int **)param_1[2])();
      }
      if (uVar2 == 0) goto LAB_82930534;
      param_1 = (unsigned int *)param_1[3];
      param_2 = *(int *)(param_2 + 0xc);
    } while (param_1 != (unsigned int *)0x0);
    uVar1 = 1;
  }
  return uVar1;
}

