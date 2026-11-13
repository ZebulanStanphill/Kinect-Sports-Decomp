extern int fn_827B0790();


unsigned __int64 fn_827B13A0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  uVar2 = fn_827B0790();
  if ((param_2 & 0xffffffff) < (uVar2 & 0xffffffff)) {
    lVar3 = uVar2 - param_2;
    do {
      uVar1 = (unsigned int)param_2;
      param_2 = param_2 + 1;
      uVar4 = (unsigned __int64)
              *(unsigned char *)(*(int *)((uVar1 >> 10 & 0x3ffffc) + *(int *)(*(int *)(param_1 + 0xc) + 0xc))
                       + (uVar1 & 0xfff)) ^ uVar4 * 0x21;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return uVar4;
}

