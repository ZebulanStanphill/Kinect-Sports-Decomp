extern int fn_826D6BE0();
extern int fn_826D7FF8();
extern int fn_826DB3B8();


void fn_826DCDA8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  sync(1);
  sync(1);
  *param_1 = 0;
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x20);
    sync(1);
  }
  while (sync(1), param_1[2] != 0) {
    iVar1 = param_1[2];
    sync(1);
    sync(1);
    param_1[2] = *(int *)(param_1[2] + 0x18);
    fn_826DB3B8(iVar1);
  }
  while (sync(1), param_1[6] != 0) {
    iVar1 = param_1[6];
    sync(1);
    sync(1);
    param_1[6] = *(int *)(param_1[6] + 0xc);
    fn_826D6BE0(iVar1,0);
  }
  while (sync(1), param_1[4] != 0) {
    iVar1 = param_1[4];
    sync(1);
    sync(1);
    param_1[4] = *(int *)(param_1[4] + 0xc);
    fn_826D7FF8(iVar1,0);
  }
  return;
}

