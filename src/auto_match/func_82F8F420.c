extern int fn_82F8F648();
extern int fn_82F8FB10();
extern int fn_82F8FBA8();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;


unsigned __int64 fn_82F8F420(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iStack00000014;
  unsigned int uStack0000001c;
  
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    iStack00000014 = param_1;
    uStack0000001c = param_2;
    uVar2 = fn_82F8F648(param_1);
    if (uVar2 < uStack0000001c) {
      fn_82F8FB10();
    }
    else {
      uVar3 = fn_82F8FBA8(iStack00000014,uStack0000001c,0);
      *(unsigned int *)(iStack00000014 + 4) = uVar3;
      *(unsigned int *)(iStack00000014 + 8) = *(unsigned int *)(iStack00000014 + 4);
      *(unsigned int *)(iStack00000014 + 0xc) = *(int *)(iStack00000014 + 4) + uStack0000001c * 4;
    }
    uVar1 = 1;
  }
  return uVar1;
}

