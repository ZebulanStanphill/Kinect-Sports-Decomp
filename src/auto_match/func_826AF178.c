extern int fn_826826A8();
extern int fn_826A9138();


void fn_826AF178(int param_1,int *param_2)

{
  int iVar1;
  unsigned char *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar4 = (unsigned int *)(iVar1 + 8);
  uVar3 = *puVar4 + 0x10;
  *puVar4 = uVar3;
  if (uVar3 >= puVar4[2]) {
    fn_826826A8(puVar4);
  }
  puVar2 = (unsigned char *)*puVar4;
  if (puVar2 != (unsigned char *)0x0) {
    *puVar2 = 5;
    iVar1 = *param_2;
    *(int *)(puVar2 + 4) = iVar1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  if (*(unsigned int *)(param_1 + 8) != 0) {
    fn_826A9138(*(int *)(param_1 + 8),"---enumerate - Push: %s\n",*(unsigned int *)*param_2);
  }
  return;
}

