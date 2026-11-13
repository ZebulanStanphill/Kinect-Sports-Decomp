extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82359C18();
extern int fn_82490FC8();
extern int fn_824CCD80();
extern int fn_82522588();
extern int fn_825603C8();
extern int fn_82F63108();
extern unsigned int iStack_2c;


void fn_82456F38(unsigned int *param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  int *piVar5;
  int *piVar7;
  unsigned __int64 uVar6;
  unsigned char auStack_30 [4];
  int iStack_2c;
  
  if (param_1[6] != 0) {
    if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(int (***)())(*(int *)param_1[6] + 4))();
  }
  piVar4 = (int *)param_1[0xd];
  if ((int *)param_1[0xc] != piVar4) {
    piVar7 = (int *)param_1[0xc] + 4;
    do {
      if ((int *)*piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(*(int *)*piVar7 + 4))();
      piVar5 = piVar7 + 2;
      piVar7 = piVar7 + 6;
    } while (piVar5 != piVar4);
  }
  puVar1 = (unsigned int *)*param_1;
  for (uVar6 = (unsigned __int64)*puVar1; (uVar6 & 0xffffffff) != (unsigned __int64)puVar1[1]; uVar6 = uVar6 + 8)
  {
    piVar4 = (int *)fn_82522588(auStack_30,uVar6);
    *(unsigned int *)(*piVar4 + 0x294) = 0;
    if (iStack_2c != 0) {
      fn_822315A0();
    }
    puVar1 = (unsigned int *)*param_1;
  }
  fn_82490FC8(param_1[0x1c]);
  fn_82359C18(param_1 + 2);
  param_1[6] = 0;
  if (param_1[0x1f] != 0) {
    iVar2 = *(int *)(*(int *)*param_1 + 8);
    if (*(int *)(iVar2 + 0x22c) != 1) {
      uVar3 = fn_824CCD80(*(unsigned int *)(iVar2 + 0x10));
      fn_825603C8(uVar3,iVar2 + 0x20,1);
      *(unsigned int *)(iVar2 + 0x22c) = 1;
    }
  }
  return;
}

