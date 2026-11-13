extern int fn_8281F2F0();


void fn_828132A8(int *param_1)

{
  char cVar1;
  int lVar2;
  
  lVar2 = KeTlsGetValue(*(unsigned int *)(param_1[3] + 0xd8));
  KeTlsSetValue(*(unsigned int *)(param_1[3] + 0xd8),lVar2 + 1);
  (*(int (**)())(*param_1 + 4))(param_1);
  lVar2 = KeTlsGetValue(*(unsigned int *)(param_1[3] + 0xd8));
  KeTlsSetValue(*(unsigned int *)(param_1[3] + 0xd8),lVar2 + -1);
  cVar1 = *(char *)(param_1 + 5);
  fn_8281F2F0(param_1);
  if (cVar1 != '\0') {
    (*(int (**)())*param_1)(param_1,1);
  }
  return;
}

