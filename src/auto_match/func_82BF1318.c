extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BEB628();
extern int fn_82BF8E90();


unsigned int * fn_82BF1318(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar4;
  
  uVar1 = thunk_FUN_82be5550(0xf8);
  if ((uVar1 & 0xffffffff) == 0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(unsigned int *)(*(int *)(param_1 + 0x34) + 0x18);
    }
    puVar2 = (unsigned int *)fn_82BF8E90(uVar1,param_1,uVar4,param_2);
  }
  if (puVar2 == (unsigned int *)0x0) {
    fn_82BE5240(param_1,0x65,0xffffffff820eb580);
    puVar2 = (unsigned int *)0x0;
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  else {
    uVar1 = thunk_FUN_82be5550(0xc);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82BEB628(uVar1,puVar2);
    }
    if (iVar3 == 0) {
      fn_82BE5240(param_1,0x65,0xffffffff820eb55c);
      *(unsigned int *)(param_1 + 0x10) = 0;
      (**(int (***)())*puVar2)(puVar2,1);
      puVar2 = (unsigned int *)0x0;
    }
    else {
      fn_82BE52B8(param_1 + 0x3c);
    }
  }
  return puVar2;
}

