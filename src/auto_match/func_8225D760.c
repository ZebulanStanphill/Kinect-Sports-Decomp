extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82F63108();
extern int fn_82F63CA0();


void fn_8225D760(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned char auStack_c0 [32];
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [96];
  
  puVar1 = *(unsigned int **)(param_1 + 0x14);
  puVar7 = *(unsigned int **)(param_1 + 0x10);
  *(unsigned int *)(param_1 + 0x30) = 0;
  uVar2 = fn_822C5B18(auStack_c0);
  uVar3 = fn_822C5B18(auStack_a0,uVar2);
  uVar4 = fn_822C5B18(auStack_80,uVar3);
  uVar5 = uVar4;
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    if (*(int **)(uVar4 + 0x10) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108(uVar5,*puVar7);
    }
    uVar5 = (**(int (***)())(**(int **)(uVar4 + 0x10) + 4))();
    if ((uVar5 & 0xff) != 0) break;
  }
  fn_82359C18(uVar4);
  fn_82359C18(uVar3);
  if (puVar7 != puVar1) {
    uVar4 = fn_822C5B18(auStack_60,uVar2);
    puVar6 = puVar7;
    uVar5 = uVar4;
    while (puVar6 = puVar6 + 1, puVar6 != puVar1) {
      if (*(int **)(uVar4 + 0x10) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108(uVar5,*puVar6);
      }
      uVar5 = (**(int (***)())(**(int **)(uVar4 + 0x10) + 4))();
      if ((uVar5 & 0xff) == 0) {
        *puVar7 = *puVar6;
        puVar7 = puVar7 + 1;
      }
    }
    fn_82359C18(uVar4);
  }
  fn_82359C18(uVar2);
  if (puVar7 != *(unsigned int **)(param_1 + 0x14)) {
    fn_82F63CA0(puVar7,*(unsigned int **)(param_1 + 0x14),0);
    *(unsigned int **)(param_1 + 0x14) = puVar7;
  }
  fn_82359C18(param_2);
  return;
}

