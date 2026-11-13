int fn_826C59A0(unsigned int *param_1)

{
  unsigned char cVar2;
  int iVar1;
  
  if ((param_1[0x6f] == 0) || (cVar2 = (*(int (**)())(*(int *)param_1 + 0xa0))(), cVar2 == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1[0x6f];
  }
  return iVar1;
}

