extern int fn_82F62800();


int fn_8223EF38(int *param_1,unsigned int param_2)

{
  unsigned int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (param_2 < *(unsigned int *)(iVar2 + 0xc)) {
    iVar1 = *(int *)(*(int *)(iVar2 + 8) + param_2 * 4);
  }
  else {
    iVar1 = 0;
  }
  if ((iVar1 == 0) && (*(char *)(iVar2 + 0x14) != '\0')) {
    iVar2 = fn_82F62800();
    if (param_2 < *(unsigned int *)(iVar2 + 0xc)) {
      iVar1 = *(int *)(*(int *)(iVar2 + 8) + param_2 * 4);
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}

