extern int fn_82BE5240();
extern int fn_82BE6590();
extern int fn_82BE66A0();
extern int fn_82BEB9B8();
extern int fn_82BEBD00();
extern int fn_82BEC428();


unsigned __int64 fn_82BE2530(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  iVar1 = thunk_FUN_82be5550(0x98);
  if (iVar1 == 0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar2 = (unsigned int *)fn_82BEBD00();
  }
  if (puVar2 == (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x10) = 0;
    lVar3 = 0x65;
    uVar4 = 0xffffffff820e8c28;
  }
  else {
    iVar1 = fn_82BEC428(puVar2,param_1,*(unsigned int *)(param_1 + 0x158),
                              *(unsigned int *)(param_1 + 0x15c));
    if (iVar1 == 0) {
      *(unsigned int *)(param_1 + 0x10) = 0;
      (**(int (***)())*puVar2)(puVar2,1);
      lVar3 = 0x452;
      uVar4 = 0xffffffff820e8bfc;
    }
    else {
      lVar3 = fn_82BE6590(puVar2);
      if (lVar3 == 0) {
        lVar3 = fn_82BEB9B8(param_1,puVar2);
        if (lVar3 == 0) {
          *(unsigned int *)(param_1 + 0x10) = 8;
          return 0;
        }
        *(unsigned int *)(param_1 + 0x10) = 0;
        fn_82BE66A0(puVar2);
        (**(int (***)())*puVar2)(puVar2,1);
        uVar4 = 0xffffffff820e8b94;
      }
      else {
        *(unsigned int *)(param_1 + 0x10) = 0;
        (**(int (***)())*puVar2)(puVar2,1);
        uVar4 = 0xffffffff820e8bd0;
      }
    }
  }
  uVar4 = fn_82BE5240(param_1,lVar3,uVar4);
  return uVar4;
}

