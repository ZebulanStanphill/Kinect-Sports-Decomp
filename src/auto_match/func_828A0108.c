extern unsigned int *auStack_30;
extern int fn_8265CA20();
extern int fn_8289EE78();
extern int fn_8289F270();
extern int fn_828E62F0();


void fn_828A0108(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned char auStack_30;
  
  iVar1 = param_1;
  if (10 < param_2) {
    iVar1 = fn_828E62F0();
  }
  fn_8289EE78((unsigned __int64)*(unsigned int *)(param_1 + 0x54),
                ((unsigned __int64)*(unsigned int *)(param_1 + 0x58) & 0x1fffffff) * 8 +
                (unsigned __int64)*(unsigned int *)(param_1 + 0x54),iVar1,auStack_30);
  if (*(int *)(param_1 + 0x54) != 0) {
    if (*(int *)(param_1 + 0x58) != 0) {
      fn_8289F270(param_1,*(int *)(param_1 + 0x58),&auStack_30);
    }
    if (10 < *(unsigned int *)(param_1 + 0x50)) {
      fn_8265CA20(*(unsigned int *)(param_1 + 0x54));
    }
  }
  *(int *)(param_1 + 0x54) = iVar1;
  *(unsigned int *)(param_1 + 0x50) = param_2;
  return;
}

