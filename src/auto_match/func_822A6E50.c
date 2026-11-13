extern int fn_822A6C30();
extern int fn_822A6F38();
extern unsigned int lbl_821917C0;
extern unsigned int ltcg_pool_0_0f;


void fn_822A6E50(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 0x10c);
  if (uVar1 == 0) {
    uVar4 = 7;
    uVar5 = 0xffffffff831ce7bc;
    iVar2 = param_1 + 8;
  }
  else if (uVar1 == 1) {
    uVar4 = 5;
    uVar5 = 0xffffffff831cd664;
    iVar2 = param_1 + 0x40;
  }
  else {
    if (2 < uVar1) {
      return;
    }
    uVar4 = 5;
    uVar5 = 0xffffffff831ce7b8;
    iVar2 = param_1 + 0x2c;
  }
  puVar3 = (unsigned int *)fn_822A6C30(iVar2,uVar4,uVar5);
  if (puVar3 != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x110) = *puVar3;
    if (*(int *)(param_1 + 0x108) == 3) {
      fn_822A6F38((double)*(float *)(param_1 + 0x528),(double)lbl_821917C0,param_1,
                        param_1 + 0x110);
    }
    else {
      *(unsigned int *)(param_1 + 0x108) = 3;
      fn_822A6F38((double)*(float *)(param_1 + 0x528),(double)lbl_821917C0,param_1,
                        param_1 + 0x110);
      *(unsigned int *)(param_1 + 0x53c) = 1;
    }
    *(unsigned int *)(param_1 + 0x528) = ltcg_pool_0_0f;
  }
  return;
}

