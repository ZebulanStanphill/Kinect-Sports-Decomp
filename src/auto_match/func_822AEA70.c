#define true 1
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82381BC0();
extern int fn_82F63108();


void fn_822AEA70(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int *piVar6;
  unsigned int *apuStack_80 [4];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  piVar6 = (int *)*param_1;
  do {
    if ((int *)param_1[1] <= piVar6) {
      fn_82359C18(param_2);
      return;
    }
    uVar4 = fn_822C5B18(auStack_70,param_2);
    iVar3 = *(int *)(((int *)*piVar6)[4] * 4 + *(int *)*piVar6);
    iVar5 = fn_822C5B18(auStack_50,uVar4);
    puVar1 = *(unsigned int **)(iVar3 + 4);
    apuStack_80[0] = (unsigned int *)*puVar1;
    while (apuStack_80[0] != puVar1) {
      piVar2 = *(int **)(iVar5 + 0x10);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(*piVar2 + 4))(piVar2,apuStack_80[0][4]);
      fn_82381BC0(apuStack_80);
    }
    fn_82359C18(iVar5);
    fn_82359C18(uVar4);
    piVar6 = piVar6 + 1;
  } while( true );
}

