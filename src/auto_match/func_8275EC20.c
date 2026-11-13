extern int fn_8270D7A0();


void fn_8275EC20(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  if (*(unsigned int *)(param_1 + 8) > 0) {
    do {
      lVar1 = (unsigned __int64)
              *(unsigned int *)(((unsigned int)((uVar2 & 0xffffffff) >> 6) & 0x3fffffc) + *(int *)(param_1 + 0x14))
              + (uVar2 & 0xff) * 8;
      fn_8270D7A0(param_2,lVar1,lVar1 + 4);
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 8));
  }
  return;
}

