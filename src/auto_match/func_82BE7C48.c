extern int fn_82BE56B0();
extern int fn_82BE6590();
extern int fn_82BE66A0();
extern int fn_82BEB9B8();
extern int fn_82BF2F08();
extern int fn_82BF3138();


void fn_82BE7C48(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    iVar1 = fn_82BE56B0(0x50);
    if (iVar1 == 0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      puVar2 = (unsigned int *)fn_82BF2F08();
    }
    if (puVar2 != (unsigned int *)0x0) {
      iVar1 = fn_82BF3138(puVar2,param_1);
      if ((iVar1 != 0) && (iVar1 = fn_82BE6590(puVar2), iVar1 == 0)) {
        iVar1 = fn_82BEB9B8(param_1,puVar2);
        if (iVar1 == 0) {
          *(unsigned int **)(param_1 + 0x84) = puVar2;
          return;
        }
        fn_82BE66A0(puVar2);
      }
      (**(int (***)())*puVar2)(puVar2,1);
    }
  }
  return;
}

