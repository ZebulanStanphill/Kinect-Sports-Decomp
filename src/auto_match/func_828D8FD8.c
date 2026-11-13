extern int fn_828AD740();
extern int fn_828B0498();
extern int fn_828B0528();
extern int fn_828B0DB8();
extern int fn_828B0E40();
extern int fn_828B0FE8();
extern int fn_828B13E8();
extern int fn_828B1468();


unsigned __int64 fn_828D8FD8(int param_1,unsigned char param_2)

{
  char cVar3;
  int iVar2;
  unsigned __int64 uVar1;
  
  cVar3 = (**(int (***)())(**(int **)(param_1 + 0x14) + 0x14))();
  if ((((cVar3 == '\0') ||
       (cVar3 = fn_828B0528(*(unsigned int *)(param_1 + 0x14)), cVar3 == '\0')) ||
      (iVar2 = fn_828B0FE8(param_1), iVar2 != 0)) ||
     (cVar3 = fn_828AD740(*(unsigned int *)(param_1 + 0x14)), cVar3 != '\0')) {
    uVar1 = 0;
  }
  else {
    iVar2 = fn_828B0DB8(param_1);
    *(unsigned char *)(param_1 + 0x1c) = 0;
    if (iVar2 == 0) {
      fn_828B0E40(*(unsigned int *)(param_1 + 0x14),0);
      fn_828B1468(param_1,7);
      uVar1 = 1;
    }
    else {
      fn_828B0498(param_1,iVar2);
      fn_828B13E8(param_1,0,0);
      *(unsigned char *)(param_1 + 0x1c) = param_2;
      fn_828B0E40(*(unsigned int *)(param_1 + 0x14),*(unsigned char *)(iVar2 + 0x26));
      fn_828B1468(param_1,1);
      uVar1 = 1;
    }
  }
  return uVar1;
}

