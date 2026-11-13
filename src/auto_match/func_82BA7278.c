extern int fn_82B7BD28();
extern int fn_82BA71F8();


void fn_82BA7278(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int *piVar3;
  
  if (((param_1 & 0xffffffff) == 0) || (param_2 == 0)) {
    fn_82BA71F8(param_1,param_3);
  }
  else {
    uVar1 = *(unsigned int *)(param_3 + 0x5a8);
    puVar2 = (unsigned int *)fn_82B7BD28(uVar1,0x1c);
    piVar3 = puVar2 + 1;
    *puVar2 = uVar1;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = param_3;
      puVar2[2] = 0xe;
      puVar2[3] = 1;
      puVar2[6] = 0;
    }
    piVar3[3] = (int)param_1;
    piVar3[4] = param_2;
    piVar3[2] = 2;
  }
  return;
}

