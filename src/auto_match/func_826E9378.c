#define true 1
extern int fn_826C8C70();
extern int fn_826E7800();


void fn_826E9378(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned char bVar3;
  unsigned char abStack_60 [96];
  
  do {
    iVar2 = 0;
    while( true ) {
      if (*(int *)(param_1 + 0x28) - 1U < 2) {
        iVar1 = *(int *)((*(int *)(param_1 + 0x28) + 7) * 4 + param_1);
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 <= (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x2c))
      {
        if (0 < iVar2) {
          fn_826C8C70(param_1,0xffffffff821cc86c);
        }
        return;
      }
      *(unsigned char *)(param_1 + 0x15) = 0;
      if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
        fn_826E7800(param_1,1);
      }
      bVar3 = *(unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      fn_826C8C70(param_1,0xffffffff8200d778,bVar3);
      if (bVar3 < 0x20) {
        bVar3 = 0x2e;
      }
      if (0x7f < bVar3) {
        bVar3 = 0x2e;
      }
      abStack_60[iVar2] = bVar3;
      iVar2 = iVar2 + 1;
      if (0xf < iVar2) break;
      fn_826C8C70(param_1,0xffffffff821aa89c);
    }
    fn_826C8C70(param_1,0xffffffff821ce66c);
    iVar2 = 0;
    do {
      fn_826C8C70(param_1,0xffffffff821ce318,abStack_60[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    fn_826C8C70(param_1,0xffffffff821cc86c);
  } while( true );
}

