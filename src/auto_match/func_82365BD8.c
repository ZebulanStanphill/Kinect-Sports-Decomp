extern int fn_822315A0();
extern int fn_8223AAC0();


unsigned int * fn_82365BD8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int iVar1;
  unsigned int uVar2;
  unsigned char cVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = param_2[1];
  uVar2 = *param_2;
  if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
    if (param_1[1] != 0) {
      fn_822315A0(param_1[1]);
    }
    param_1[1] = iVar1;
    *param_1 = uVar2;
  }
  return param_1;
}

