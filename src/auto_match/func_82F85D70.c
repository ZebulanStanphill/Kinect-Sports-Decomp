extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F68278();
extern unsigned int lbl_8329F60C;
extern unsigned int lbl_8329F620;


unsigned __int64 fn_82F85D70(unsigned int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (unsigned int *)fn_82F68278();
    *puVar1 = 0;
    puVar1 = (unsigned int *)fn_82F68240();
    *puVar1 = 9;
  }
  else {
    if (((-1 < (int)param_1) && (param_1 < lbl_8329F60C)) &&
       (puVar2 = (unsigned int *)((&lbl_8329F620)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x48),
       (puVar2[1] & 0x1000000) != 0)) {
      return (unsigned __int64)*puVar2;
    }
    puVar1 = (unsigned int *)fn_82F68278();
    *puVar1 = 0;
    puVar1 = (unsigned int *)fn_82F68240();
    *puVar1 = 9;
    fn_82F63BA0();
  }
  return 0xffffffffffffffff;
}

