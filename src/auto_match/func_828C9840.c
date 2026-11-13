extern unsigned int *auStack_24;
extern int fn_8288CDC8();
extern int fn_8288E040();
extern int fn_828C8C90();
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_828C9840(int param_1,int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  unsigned char auStack_24 [36];
  
  puVar1 = (unsigned int *)**(unsigned int **)(param_1 + 0x18);
  while ((puVar1 != *(unsigned int **)(param_1 + 0x18) && (*(int *)(puVar1[2] + 4) != param_2))) {
    puVar1 = (unsigned int *)*puVar1;
  }
  iStack_30 = **(int **)(param_1 + 0xc);
  iStack_2c = param_2;
  if ((int *)iStack_30 != *(int **)(param_1 + 0xc)) {
    do {
      iVar2 = iStack_30;
      iVar3 = iStack_30 + 0x18;
      puVar1 = (unsigned int *)**(unsigned int **)(iStack_30 + 0x28);
      while ((puVar1 != *(unsigned int **)(iStack_30 + 0x28) && (*(int *)(puVar1[2] + 4) != param_2)))
      {
        puVar1 = (unsigned int *)*puVar1;
      }
      fn_8288E040(&iStack_28,iVar3,&iStack_2c);
      if (iStack_28 != *(int *)(iVar2 + 0x1c)) {
        fn_8288CDC8(auStack_24,iVar3);
      }
      fn_828C8C90(&iStack_30);
    } while (iStack_30 != *(int *)(param_1 + 0xc));
  }
  return;
}

