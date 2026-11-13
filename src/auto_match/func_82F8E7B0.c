extern unsigned int *auStack_30;
extern int fn_82A1C098();
extern int fn_82A1E658();
extern int fn_82F90628();
extern int fn_82F90680();
extern unsigned int iStack00000014;


int fn_82F8E7B0(int param_1)

{
  int iVar1;
  int iStack00000014;
  unsigned char auStack_30 [32];
  
  iStack00000014 = param_1;
  fn_82F90628(auStack_30,param_1 + 0xc);
  if (*(int *)(iStack00000014 + 0x78) == 0x3e5) {
    fn_82F90680(auStack_30);
    iVar1 = 0x540002;
  }
  else {
    fn_82A1E658(*(unsigned int *)(iStack00000014 + 0x84));
    *(unsigned int *)(iStack00000014 + 0x84) = 0;
    fn_82A1E658(*(unsigned int *)(iStack00000014 + 0x94));
    *(unsigned int *)(iStack00000014 + 0x94) = 0;
    iVar1 = fn_82A1C098(iStack00000014 + 0x78);
    if (iVar1 < 0) {
      fn_82F90680(auStack_30);
    }
    else {
      *(unsigned int *)(iStack00000014 + 0x74) = *(unsigned int *)(iStack00000014 + 0x7c);
      fn_82F90680(auStack_30);
      iVar1 = 0;
    }
  }
  return iVar1;
}

