extern int fn_826959C8();
extern int fn_826C3378();


void fn_826964E0(char *param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_1 != '\b') || (*(int *)(param_1 + 4) != *param_2)) {
    fn_826959C8(param_1);
    *param_1 = '\b';
    param_1[0xc] = '\0';
    iVar1 = *param_2;
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
    }
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    if (param_2[1] != 0) {
      fn_826C3378(param_1 + 4,param_2[1],*(unsigned char *)(param_2 + 2) & 1);
    }
  }
  return;
}

