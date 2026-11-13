extern int fn_8234E338();
extern int fn_82F53528();
extern int fn_82F53548();
extern int fn_82F53608();
extern unsigned int lbl_8201F94C;
extern unsigned int lbl_82186E6C;


int fn_82F59A20(int param_1)

{
  unsigned __int64 *puVar1;
  unsigned __int64 *puVar2;
  __int64 lVar3;
  double dVar4;
  
  dVar4 = (double)fn_82F53608();
  if ((float)(dVar4 * (double)lbl_8201F94C) < lbl_82186E6C) {
    puVar1 = (unsigned __int64 *)(param_1 + -8);
    puVar2 = (unsigned __int64 *)0x83262818;
    lVar3 = 8;
    do {
      puVar2 = puVar2 + 1;
      puVar1 = puVar1 + 1;
      *puVar1 = *puVar2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  else {
    fn_82F53528();
    fn_82F53548();
    fn_8234E338(dVar4,param_1);
  }
  return param_1;
}

