extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82356F98();


unsigned int * fn_822817E0(unsigned int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  char cVar4;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x14) == iVar1) {
    fn_82356F98(param_1);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    iVar2 = *(int *)(iVar1 + -4);
    uVar3 = *(unsigned int *)(iVar1 + -8);
    if ((iVar2 != 0) && (cVar4 = fn_8223AAC0(iVar2), cVar4 != '\0')) {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = iVar2;
      *param_1 = uVar3;
    }
  }
  return param_1;
}

