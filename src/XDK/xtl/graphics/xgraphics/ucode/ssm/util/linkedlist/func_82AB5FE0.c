#define true 1
extern int fn_82AB15D0();
extern int fn_82AB4C70();
extern int fn_82B6B0C8();
extern int fn_82B6B230();


void fn_82AB5FE0(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  if (param_1[4] == 0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1 = *(unsigned int **)(param_1[4] + 8);
    if (puVar1 != (unsigned int *)0x0) goto LAB_82ab60a0;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69e8,0xffffffff820d68b0,0xb94);
LAB_82ab60a0:
  while( true ) {
    puVar2 = (unsigned int *)param_1[4];
    if (puVar1 == puVar2) break;
    puVar2 = puVar1;
    if ((puVar1 == (unsigned int *)0x0) ||
       (puVar2 = (unsigned int *)puVar1[2], puVar2 == (unsigned int *)0x0)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69e8,0xffffffff820d68b0,0xb9d);
    }
    puVar1 = (unsigned int *)fn_82AB4C70(puVar1);
    (*(int (**)())param_1[3])(param_1[1],puVar1[3]);
    fn_82B6B230(*puVar1,puVar1);
    puVar1 = puVar2;
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

