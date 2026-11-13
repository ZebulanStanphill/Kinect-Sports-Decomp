extern int fn_82AB15D0();


void fn_82B7DE00(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = *(unsigned int **)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x20);
  *puVar1 = 0x10;
  if (0x7f < (**(unsigned int **)(param_1 + 0x18) & 0xfffffff8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db908,0xffffffff820db938,0x1ea);
  }
  (*(int **)(param_1 + 0x18))[1] = **(int **)(param_1 + 0x18) - 1U >> 3 & 0xf;
  puVar1[2] = 0x20;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0x20002000;
  puVar1[7] = puVar1[7] & 0xfc00f000 | 0x60000;
  puVar1[4] = puVar1[4] & 0xfffef000;
  puVar1[5] = puVar1[5] & 0xfc00f000 | 0x60000;
  puVar1[3] = puVar1[3] & 0xfc00f000 | 0x60000;
  puVar1[6] = puVar1[6] & 0xfc00f000 | 0x60000;
  **(unsigned int **)(param_1 + 0x1c) = 5;
  if (0x7f < (**(unsigned int **)(param_1 + 0x1c) & 0xfffffff8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db8dc,0xffffffff820db938,0x204);
  }
  (*(int **)(param_1 + 0x1c))[1] = **(int **)(param_1 + 0x1c) - 1U >> 3 & 0xf;
  *(unsigned int *)(iVar3 + 8) = 0x10010104;
  *(unsigned int *)(iVar3 + 0x10) = 0xffff;
  **(unsigned int **)(param_1 + 0x20) = 0xc;
  if (0x7f < (**(unsigned int **)(param_1 + 0x20) & 0xfffffff8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db8b0,0xffffffff820db938,0x216);
  }
  (*(int **)(param_1 + 0x20))[1] = **(int **)(param_1 + 0x20) - 1U >> 3 & 0xf;
  *(unsigned int *)(iVar4 + 0xc) = 0x40004;
  *(unsigned int *)(iVar4 + 0x2c) = 0x40004;
  *(unsigned int *)(iVar4 + 0x30) = 0x40004;
  *(unsigned int *)(iVar4 + 0x34) = 0x40004;
  *(unsigned int *)(iVar4 + 0x14) = 0x40004;
  *(unsigned int *)(iVar4 + 8) = 0;
  *(unsigned int *)(iVar4 + 0x28) = 4;
  *(unsigned int *)(iVar4 + 0x18) = 0x10000;
  *(unsigned int *)(iVar4 + 0x10) = 7;
  *(unsigned int *)(iVar4 + 0x1c) = *(unsigned int *)(iVar4 + 0x1c) & 0xfe7fffff;
  **(unsigned int **)(param_1 + 0x24) = 0x14;
  if (0x7f < (**(unsigned int **)(param_1 + 0x24) & 0xfffffff8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db884,0xffffffff820db938,0x232);
  }
  (*(int **)(param_1 + 0x24))[1] = **(int **)(param_1 + 0x24) - 1U >> 3 & 0xf;
  **(unsigned int **)(param_1 + 0x28) = 0x26;
  if (0x7f < (**(unsigned int **)(param_1 + 0x28) & 0xfffffff8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db858,0xffffffff820db938,0x23a);
  }
  (*(int **)(param_1 + 0x28))[1] = **(int **)(param_1 + 0x28) - 1U >> 3 & 0xf;
  *(unsigned int *)(iVar2 + 0x50) = 0xffffffff;
  *(unsigned int *)(iVar2 + 100) = 0x10;
  *(unsigned int *)(iVar2 + 0x60) = 0xe;
  *(unsigned int *)(iVar2 + 0x70) = 0x20;
  *(unsigned int *)(iVar2 + 0x28) = *(unsigned int *)(iVar2 + 0x28) & 0xffe00e00 | 0xff000;
  *(unsigned int *)(iVar2 + 0x24) = *(unsigned int *)(iVar2 + 0x24) & 0xffe00e00 | 0xff100;
  **(unsigned int **)(param_1 + 0x2c) = 0x20;
  if (0x7f < (**(unsigned int **)(param_1 + 0x2c) & 0xfffffff8)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db82c,0xffffffff820db938,0x25d);
  }
  (*(int **)(param_1 + 0x2c))[1] = **(int **)(param_1 + 0x2c) - 1U >> 3 & 0xf;
  return;
}

