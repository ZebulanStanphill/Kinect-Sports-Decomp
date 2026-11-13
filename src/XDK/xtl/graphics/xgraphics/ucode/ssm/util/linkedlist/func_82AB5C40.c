extern int fn_82AB15D0();
extern int fn_82AB4C70();
extern int fn_82B6B0C8();
extern int fn_82B6B230();


void fn_82AB5C40(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  if (param_1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6ab4,0xffffffff820d68b0,0x8e7);
  }
  if (param_1[4] == 0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1 = *(unsigned int **)(param_1[4] + 8);
    if (puVar1 != (unsigned int *)0x0) goto LAB_82ab5cc4;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69e8,0xffffffff820d68b0,0x8ec);
LAB_82ab5cc4:
  puVar2 = (unsigned int *)param_1[4];
  if (puVar1 != puVar2) {
    do {
      puVar3 = puVar1;
      if ((puVar1 == (unsigned int *)0x0) ||
         (puVar3 = (unsigned int *)puVar1[2], puVar3 == (unsigned int *)0x0)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69e8,0xffffffff820d68b0,0x8f5);
      }
      puVar1 = (unsigned int *)fn_82AB4C70(puVar1);
      if (puVar1 == (unsigned int *)0x0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6ac0,0xffffffff820d68b0,0x8f9);
      }
      else {
        fn_82B6B230(*puVar1);
      }
      puVar2 = (unsigned int *)param_1[4];
      puVar1 = puVar3;
    } while (puVar3 != puVar2);
  }
  if (puVar2 != (unsigned int *)0x0) {
    fn_82B6B230(*puVar2);
  }
  if (param_1[6] == 0) {
    fn_82B6B0C8(*param_1);
    (*(int (**)())param_1[3])(param_1[1],param_1);
  }
  return;
}

