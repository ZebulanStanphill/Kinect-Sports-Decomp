extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F68278();
extern int fn_82F7C4A8();
extern int fn_82F7C6B8();
extern int fn_82F85E30();
extern unsigned int lbl_8329F60C;
extern unsigned int lbl_8329F620;
extern unsigned int uStack00000014;
extern unsigned int uStack_40;


unsigned __int64 fn_82F7C590(unsigned __int64 param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uStack00000014;
  unsigned int uStack_40;
  
  uStack00000014 = (unsigned int)param_1;
  if (uStack00000014 == 0xfffffffe) {
    puVar3 = (unsigned int *)fn_82F68278();
    *puVar3 = 0;
    puVar3 = (unsigned int *)fn_82F68240();
    *puVar3 = 9;
  }
  else {
    if ((-1 < (int)uStack00000014) && ((param_1 & 0xffffffff) < (unsigned __int64)lbl_8329F60C)) {
      iVar1 = (int)uStack00000014 >> 5;
      iVar2 = (uStack00000014 & 0x1f) * 0x48;
      if ((*(unsigned char *)((&lbl_8329F620)[iVar1] + iVar2 + 4) & 1) != 0) {
        fn_82F85E30(param_1);
        if ((*(unsigned char *)((&lbl_8329F620)[iVar1] + iVar2 + 4) & 1) == 0) {
          puVar3 = (unsigned int *)fn_82F68240();
          *puVar3 = 9;
          uStack_40 = 0xffffffff;
        }
        else {
          uStack_40 = fn_82F7C4A8(param_1);
        }
        fn_82F7C6B8();
        return (unsigned __int64)uStack_40;
      }
    }
    puVar3 = (unsigned int *)fn_82F68278();
    *puVar3 = 0;
    puVar3 = (unsigned int *)fn_82F68240();
    *puVar3 = 9;
    fn_82F63BA0();
  }
  return 0xffffffffffffffff;
}

