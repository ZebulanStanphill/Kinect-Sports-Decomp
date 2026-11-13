extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE56B0();
extern void *fn_82BEB628();


void fn_82BEC378(int param_1,unsigned int param_2)

{
  int lVar1;
  unsigned int uVar2;
  void *iVar3;
  int iVar4;
  
  if ((param_2 & 0xffffffff) != 0) {
    fn_82BE5340(param_2);
    iVar4 = param_1 + 0x60;
    fn_82BE5340(iVar4);
    while (*(int *)(param_1 + 0x68) != 0) {
      lVar1 = fn_82BE56B0(0xc);
      if (lVar1 != 0) {
        uVar2 = fn_82BE5378(iVar4);
        iVar3 = fn_82BEB628(lVar1,uVar2);
      } else { iVar3 = 0; }
      if (iVar3 == 0) {
        fn_82BE5240(param_1,0x65,"CMassiveListNode in GetResponsePortIndexPairs()");
        *(unsigned int *)(param_1 + 0x10) = 0;
        return;
      }
      fn_82BE52B8(param_2,iVar3);
      fn_82BE5350(iVar4);
    }
  }
  return;
}

