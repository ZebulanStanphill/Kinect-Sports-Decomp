#define true 1
extern void fn_82FA9208(unsigned int);
extern int fn_82FABA50();


void fn_82FAAF20(int param_1,unsigned int *param_2)

{
  unsigned int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  puVar4 = *(unsigned int **)(param_1 + 0x2c);
  puVar3 = (unsigned int *)0x0;
  while( true ) {
    puVar2 = puVar4;
    if (puVar2 == (unsigned int *)0x0) {
      return;
    }
    if (puVar2 + 1 == param_2) break;
    puVar4 = (unsigned int *)*puVar2;
    puVar3 = puVar2;
  }
  iVar1 = puVar2[5];
  puVar2[5] = 0;
  if (iVar1 != 0) {
    fn_82FA9208(iVar1);
  }
  fn_82FABA50(param_1 + 0x2c,puVar2,puVar3);
  return;
}

