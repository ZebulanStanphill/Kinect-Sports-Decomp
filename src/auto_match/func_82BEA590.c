extern int fn_82BE1A10();
extern int fn_82BE1FA0();
extern int fn_82BE5240();
extern int fn_82BE56B0();
extern int fn_82BF4D90();
extern int fn_82BF4DF8();


unsigned __int64 fn_82BEA590(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar1 = fn_82BE1A10();
    if (*(int *)(iVar1 + 0x10) == 4) {
      return 0x12d;
    }
    iVar1 = fn_82BE56B0(0x58);
    if (iVar1 == 0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      puVar2 = (unsigned int *)fn_82BF4D90();
    }
    if (puVar2 == (unsigned int *)0x0) {
      *(unsigned int *)(param_1 + 0x10) = 0;
      uVar3 = 0x65;
      uVar4 = 0xffffffff820eab8c;
    }
    else {
      fn_82BE1A10();
      uVar3 = fn_82BE1FA0();
      iVar1 = fn_82BF4DF8(puVar2,param_1,uVar3);
      if (iVar1 != 0) {
        *(unsigned int **)(param_1 + 0x4c) = puVar2;
        goto LAB_82bea65c;
      }
      *(unsigned int *)(param_1 + 0x10) = 0;
      (**(int (***)())*puVar2)(puVar2,1);
      uVar3 = 0x452;
      uVar4 = 0xffffffff820eab60;
    }
    uVar3 = fn_82BE5240(param_1,uVar3,uVar4);
  }
  else {
LAB_82bea65c:
    uVar3 = 0;
  }
  return uVar3;
}

