extern int fn_82699B40();


void fn_8269A110(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  if (param_1[1] != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *param_1);
      if ((*(unsigned char *)(iVar1 + 0x66) & 0x40) != 0) {
        *(unsigned char *)(iVar1 + 0x66) = *(unsigned char *)(iVar1 + 0x66) & 0xbf;
        cVar2 = fn_82699B40(param_1,uVar4);
        if (cVar2 != '\0') {
          uVar4 = uVar4 - 1;
          iVar3 = iVar3 + -4;
        }
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while ((uVar4 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[1]);
  }
  return;
}

