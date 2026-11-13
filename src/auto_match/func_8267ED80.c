extern int fn_8267EAB8();
extern int fn_8267EBA0();


unsigned __int64 fn_8267ED80(int *param_1,unsigned __int64 param_2)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar3 = 0;
  if (param_1[1] != 0) {
    iVar2 = 0;
    do {
      cVar1 = fn_8267EAB8(*(unsigned int *)(iVar2 + *param_1),param_2,param_1);
      if (cVar1 == '\0') {
        if (uVar3 != 0) {
          iVar2 = uVar3 << 2;
          do {
            iVar2 = iVar2 + -4;
            uVar3 = uVar3 - 1;
            fn_8267EBA0(*(unsigned int *)(iVar2 + *param_1),param_2,param_1);
          } while (uVar3 != 0);
        }
        return 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar3 < (unsigned int)param_1[1]);
  }
  return 1;
}

