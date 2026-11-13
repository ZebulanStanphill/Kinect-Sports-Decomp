extern int fn_82F63BA0();
extern int fn_82F63C78();
extern int fn_82F66368();
extern int fn_82F68048();
extern int fn_82F68240();


unsigned __int64 fn_82F68150(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  int iVar3;
  
  if (((param_1 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == 0)) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar1 = 0x16;
  }
  else {
    uVar1 = fn_82F68048(param_3);
    iVar3 = fn_82F66368(param_1,param_2,uVar1,param_2 - 1);
    uVar1 = 0;
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63C78(0,0,0,0,0);
    }
  }
  return uVar1;
}

