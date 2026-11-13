extern int fn_82359C18();


void fn_82383300(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)(param_1 + 0x50);
  if (puVar3 != param_2) {
    fn_82359C18(puVar3);
    puVar1 = (unsigned int *)param_2[4];
    if (puVar1 == (unsigned int *)0x0) {
      puVar3[4] = 0;
    }
    else if (puVar1 == param_2) {
      uVar2 = (*(int (**)())(*puVar1))(puVar1,puVar3);
      puVar3[4] = uVar2;
    }
    else {
      *(unsigned int **)(puVar3 + 4) = puVar1;
      param_2[4] = 0;
    }
  }
  return;
}

