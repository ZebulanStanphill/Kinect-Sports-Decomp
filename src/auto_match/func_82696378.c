extern int fn_826C3378();


int * fn_82696378(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_2;
  *(unsigned char *)(param_1 + 2) = 0;
  if (cVar1 == '\f') {
    iVar2 = *(int *)(param_2 + 4);
    *param_1 = iVar2;
    if (iVar2 != 0) {
      *(unsigned int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
    }
    param_1[1] = 0;
    if (*(int *)(param_2 + 8) != 0) {
      fn_826C3378(param_1,*(int *)(param_2 + 8),param_2[0xc] & 1);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}

