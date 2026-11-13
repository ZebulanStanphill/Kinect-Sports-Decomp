#define true 1
extern int fn_82FABA50();
extern int fn_82FACC70();


void fn_82FAAE50(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  puVar3 = *(unsigned int **)(param_1 + 0x2c);
  puVar5 = (unsigned int *)0x0;
  do {
    while( true ) {
      puVar4 = puVar3;
      if (puVar4 == (unsigned int *)0x0) {
        return;
      }
      iVar1 = puVar4[3];
      iVar2 = puVar4[5];
      puVar4[3] = iVar1 + -0x400;
      if (iVar2 == 0) break;
      if ((*(unsigned char *)(iVar2 + 0x34) & 0x80) != 0) {
        fn_82FACC70(iVar2,0,0x400);
      }
LAB_82faaeb0:
      puVar3 = (unsigned int *)*puVar4;
      puVar5 = puVar4;
    }
    if (((puVar4[6] & 0x80000000) != 0) || (-1 < iVar1 + -0x400)) goto LAB_82faaeb0;
    puVar3 = (unsigned int *)*puVar4;
    fn_82FABA50(param_1 + 0x2c,puVar4,puVar5);
  } while( true );
}

