#define true 1
extern int fn_82E3BCC8();
extern int fn_82E4FE40();
extern int fn_82E58BE8();
extern int fn_82E74290();


unsigned __int64 fn_82E423A0(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  int *apiStack_40 [16];
  
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x4c) + 8))();
    *(unsigned int *)(param_1 + 0x4c) = 0;
  }
  *(unsigned int *)(param_1 + 0x50) = 0;
  uVar3 = 0;
  *(unsigned __int64 *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x68) = 0;
  do {
    iVar2 = (uVar3 + 0x1b) * 4;
    puVar1 = *(unsigned int **)(iVar2 + param_1);
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
    *(unsigned int *)(iVar2 + param_1) = 0;
    iVar2 = (uVar3 + 0xac) * 4;
    if (*(int *)(iVar2 + param_1) != 0) {
      fn_82E4FE40();
    }
    *(unsigned int *)(iVar2 + param_1) = 0;
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 0x80);
  fn_82E3BCC8(param_1 + 0x26c,0);
  *(unsigned int *)(param_1 + 0x2ac) = 0;
  iVar2 = *(int *)(param_1 + 0x4b0);
  if (iVar2 != 0) {
    fn_82E74290(iVar2);
    fn_82E4FE40(iVar2);
  }
  *(unsigned int *)(param_1 + 0x4b0) = 0;
  do {
    apiStack_40[0] = (int *)0x0;
    do {
      iVar2 = fn_82E58BE8(param_1 + 0x4b4,apiStack_40);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x5a0) != 0) {
          fn_82E4FE40();
        }
        *(unsigned int *)(param_1 + 0x5a0) = 0;
        if (*(int **)(param_1 + 0x5c0) != (int *)0x0) {
          (**(int (***)())(**(int **)(param_1 + 0x5c0) + 8))();
          *(unsigned int *)(param_1 + 0x5c0) = 0;
        }
        return 0;
      }
    } while (apiStack_40[0] == (int *)0x0);
    (**(int (***)())(*apiStack_40[0] + 8))();
  } while( true );
}

