extern int fn_82CFF8D0();


void fn_82CFEFB8(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  puVar1 = *(unsigned int **)(param_1 + 8);
  if (puVar1 != (unsigned int *)0x0) {
    if (((int)puVar1[2] & (int)0x80000000) == 0) {
      uVar2 = fn_82CFF8D0(*puVar1,puVar1[2] & 0x3fffffff);
      (*(int (**)())(*param_2 + 0x14))(param_2,3,"array",*puVar1,puVar1[1],uVar2);
    }
  }
  return;
}

