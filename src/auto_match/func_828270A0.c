extern int fn_8282D0E0();
extern unsigned int iStack00000014;
extern unsigned int stack0x00000014;


__int64 fn_828270A0(int param_1,__int64 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iStack00000014;
  
  iStack00000014 = param_1;
  fn_8282D0E0(*(unsigned int *)(param_1 + 0xcc),3,&stack0x00000014);
  uVar4 = 0;
  lVar3 = (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xc4) + (unsigned __int64)*(unsigned int *)(iStack00000014 + 0x1c);
  if (param_2 - 1U != 0) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + *(int *)(iStack00000014 + 0x114);
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0x21;
      lVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 9) + lVar3;
    } while ((uVar4 & 0xffffffff) < (param_2 - 1U & 0xffffffff));
  }
  return (unsigned __int64)*(unsigned int *)(*(int *)(iStack00000014 + 0xe8) + param_3 * 0xe + -10) + lVar3;
}

