extern int fn_82359C18();


int fn_824C0F10(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned char auStack_30 [32];
  
  puVar2 = (unsigned int *)(*(int (**)())(param_2 + 4))(auStack_30,*(unsigned int *)(param_2 + 8));
  puVar1 = (unsigned int *)puVar2[4];
  if (puVar1 == (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  else if (puVar1 == puVar2) {
    uVar3 = (*(int (**)())*puVar1)(puVar1,param_1);
    *(unsigned int *)(param_1 + 0x10) = uVar3;
  }
  else {
    *(unsigned int **)(param_1 + 0x10) = puVar1;
    puVar2[4] = 0;
  }
  fn_82359C18(auStack_30);
  return param_1;
}

