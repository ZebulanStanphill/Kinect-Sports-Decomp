extern unsigned int *auStack_30;
extern int fn_827E3BF8();


unsigned int fn_827DA8B0(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int auStack_30;
  
  puVar3 = *(unsigned int **)(param_1 + 4);
  puVar1 = *(unsigned int **)(param_1 + 8);
  auStack_30 = 0;
  for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    fn_827E3BF8(*puVar3,&auStack_30);
  }
  puVar3 = *(unsigned int **)(param_1 + 0x2c);
  puVar1 = *(unsigned int **)(param_1 + 0x30);
  while ((puVar3 != puVar1 && (iVar2 = fn_827E3BF8(*puVar3,&auStack_30), iVar2 != 0x10e1))) {
    puVar3 = puVar3 + 1;
  }
  return auStack_30;
}

