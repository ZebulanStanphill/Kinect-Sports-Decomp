extern unsigned int *auStack_2c;
extern int fn_82468470();
extern int fn_8259BDA8();
extern int fn_82865170();
extern int fn_82866400();


unsigned __int64 fn_82871CD0(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int *puVar3;
  char cVar5;
  int iVar4;
  unsigned int *puStack_30;
  unsigned char auStack_2c [44];
  
  puVar1 = *(unsigned int **)(param_1 + 0x28);
  puStack_30 = (unsigned int *)*puVar1;
  while (puVar3 = puStack_30, puStack_30 != puVar1) {
    piVar2 = (int *)puStack_30[3];
    (**(int (***)())(*piVar2 + 0x40))(piVar2);
    cVar5 = (**(int (***)())*piVar2)(piVar2);
    if (cVar5 == '\0') {
      fn_8259BDA8(&puStack_30);
      fn_82468470(auStack_2c,param_1 + 0x24,puVar3);
      fn_82865170();
      iVar4 = fn_82866400();
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + -1;
      (**(int (***)())(*piVar2 + 0x70))(piVar2,1);
    }
    else {
      fn_8259BDA8(&puStack_30);
    }
    puVar1 = *(unsigned int **)(param_1 + 0x28);
  }
  return 0x20110000;
}

