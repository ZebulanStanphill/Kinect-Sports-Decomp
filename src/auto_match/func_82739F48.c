extern int fn_82681898();
extern int fn_82695468();
extern int fn_826954C0();


void fn_82739F48(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = fn_82695468(param_1,0x23);
  if (cVar1 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eeb4,0,0);
  }
  else {
    iVar2 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar2 = 0;
    }
    fn_82681898((double)(__int64)*(int *)(iVar2 + 0x54),*(unsigned int *)(param_1 + 4));
  }
  return;
}

