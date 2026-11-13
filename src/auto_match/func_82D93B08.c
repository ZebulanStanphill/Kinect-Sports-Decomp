typedef unsigned char bool;
extern unsigned int lbl_821AAD20;


void fn_82D93B08(int param_1,int param_2,char param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  *(char *)(param_1 + 0xa2) = param_3;
  *(bool *)(param_1 + 0xb6) = param_3 == '\0';
  uVar2 = lbl_821AAD20;
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x30) == 0) {
    return;
  }
  puVar1 = *(unsigned int **)(*(int *)(param_2 + 0x30) + 0x1c);
  if (puVar1 == (unsigned int *)0x0) {
    return;
  }
  *puVar1 = lbl_821AAD20;
  puVar1[1] = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = uVar2;
  return;
}

