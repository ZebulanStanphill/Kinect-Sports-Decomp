extern int fn_82636118();


void fn_82ABE530(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  iVar2 = fn_82636118(*(unsigned int *)(param_1 + 0x300));
  uVar4 = param_2 + 1;
  if ((uVar4 & 0xffffffff) <= (param_3 & 0xffffffff)) {
    do {
      iVar3 = fn_82636118(*(unsigned int *)(param_1 + 0x300),uVar4);
      uVar1 = *(unsigned int *)(iVar3 + 4) >> 0xc & 0xf;
      if ((uVar1 != (*(unsigned int *)(iVar2 + 4) >> 0xc & 0xf)) && ((uVar1 == 1 || (uVar1 == 5)))) break;
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) <= (param_3 & 0xffffffff));
    if (((uVar4 & 0xffffffff) <= (param_3 & 0xffffffff)) &&
       ((param_2 & 0xffffffff) <= (param_3 & 0xffffffff))) {
      do {
        iVar2 = fn_82636118(*(unsigned int *)(param_1 + 0x300),param_2);
        if ((*(unsigned int *)(iVar2 + 4) & 0xf000) == 0x5000) {
          *(unsigned int *)(iVar2 + 4) = *(unsigned int *)(iVar2 + 4) & 0xffff0bff | 0x1000;
        }
        param_2 = param_2 + 1;
      } while ((param_2 & 0xffffffff) <= (param_3 & 0xffffffff));
    }
  }
  return;
}

