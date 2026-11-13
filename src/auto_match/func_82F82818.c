extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F68278();
extern int fn_82F82758();
extern int fn_82F8295C();
extern int fn_82F85E30();
extern unsigned int lbl_8329F60C;
extern unsigned int lbl_8329F620;
extern unsigned int uStack00000014;
extern unsigned int uStack_50;


unsigned __int64 fn_82F82818(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uStack00000014;
  unsigned int uStack_50;
  
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
          puVar3 = (unsigned int *)fn_82F68278();
          *puVar3 = 0;
          uStack_50 = 0xffffffff;
        }
        else {
          uStack_50 = fn_82F82758(param_1,param_2,param_3);
        }
        fn_82F8295C();
        return (unsigned __int64)uStack_50;
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

