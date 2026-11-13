extern int fn_8265DDA0();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;


unsigned __int64 fn_8265DD28(int param_1,unsigned int param_2)

{
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar1;
  int iStack00000014;
  unsigned int uStack0000001c;
  
  if (((param_2 == 0) ||
      (iStack00000014 = param_1, uStack0000001c = param_2, uVar2 = fn_8265DDA0(param_1),
      uStack0000001c < uVar2)) ||
     (iVar3 = fn_8265DDA0(iStack00000014),
     (unsigned int)(iVar3 + *(int *)(iStack00000014 + 0x10)) <= uStack0000001c)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

