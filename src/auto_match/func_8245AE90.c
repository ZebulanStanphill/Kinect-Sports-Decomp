extern int fn_82579EF0();
extern int fn_82579F78();
extern int fn_8265C9E0();
extern int fn_8265CA60();


void fn_8245AE90(int param_1,__int64 param_2)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int uVar4;
  
  *(int *)(param_1 + 4) = (int)param_2;
  param_2 = param_2 + 0x6c8;
  *(unsigned int *)(param_1 + 8) = 0;
  uVar2 = fn_82579F78(param_2,0xffffffff821babd4);
  *(unsigned int *)(param_1 + 8) = uVar2 & 0xff;
  uVar2 = fn_82579F78(param_2,0xffffffff821babe8);
  *(unsigned int *)(param_1 + 0x10) = uVar2 & 0xff;
  uVar1 = fn_82579EF0(param_2,0xffffffff821bac10,0);
  if (((int)uVar1 < 1) || (0x80000 < (int)uVar1)) {
    uVar1 = 0x80000;
  }
  puVar3 = (unsigned int *)fn_8265C9E0(0xc);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    uVar4 = fn_8265CA60(uVar1);
    *puVar3 = uVar4;
    puVar3[1] = (int)uVar1;
    puVar3[2] = 0;
  }
  *(unsigned int **)(param_1 + 0x20) = puVar3;
  return;
}

