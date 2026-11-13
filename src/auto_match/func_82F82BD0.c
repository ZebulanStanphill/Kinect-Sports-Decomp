extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F68278();
extern int fn_82F82D08();
extern int fn_82F85D70();
extern int fn_82F85E30();
extern int fn_8306C590();
extern unsigned int lbl_8329F60C;
extern unsigned int lbl_8329F620;
extern unsigned int uStack00000014;
extern unsigned int uStack_40;


unsigned __int64 fn_82F82BD0(unsigned __int64 param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uStack00000014;
  unsigned int uStack_40;
  
  uStack00000014 = (unsigned int)param_1;
  if (uStack00000014 == 0xfffffffe) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 9;
    return 0xffffffffffffffff;
  }
  if (((int)uStack00000014 < 0) || ((unsigned __int64)lbl_8329F60C <= (param_1 & 0xffffffff))) {
LAB_82f82c20:
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 9;
    fn_82F63BA0();
    return 0xffffffffffffffff;
  }
  iVar3 = (int)uStack00000014 >> 5;
  iVar1 = (uStack00000014 & 0x1f) * 0x48;
  if ((*(unsigned char *)(iVar1 + (&lbl_8329F620)[iVar3] + 4) & 1) == 0) goto LAB_82f82c20;
  fn_82F85E30(param_1);
  if ((*(unsigned char *)(iVar1 + (&lbl_8329F620)[iVar3] + 4) & 1) != 0) {
    fn_82F85D70(param_1);
    iVar3 = fn_8306C590();
    if (iVar3 == 0) {
      uStack_40 = thunk_FUN_82a2b798();
    }
    else {
      uStack_40 = 0;
    }
    if (uStack_40 == 0) goto LAB_82f82cd0;
    puVar4 = (unsigned int *)fn_82F68278();
    *puVar4 = uStack_40;
  }
  puVar2 = (unsigned int *)fn_82F68240();
  *puVar2 = 9;
  uStack_40 = 0xffffffff;
LAB_82f82cd0:
  fn_82F82D08();
  return (unsigned __int64)uStack_40;
}

