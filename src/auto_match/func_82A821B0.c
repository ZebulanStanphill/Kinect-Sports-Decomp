extern unsigned int *auStack_4c;
extern int fn_82A82160();
extern int fn_8314303C();
extern unsigned int lbl_8322344C;
extern unsigned int uStack_50;


unsigned __int64 fn_82A821B0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
                       unsigned __int64 param_5,unsigned int param_6,unsigned __int64 param_7,int param_8)

{
  int iVar1;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  if (lbl_8322344C == '\0') {
    iVar1 = -0x7fff0001;
  }
  else {
    fn_82A82160(param_2,&uStack_50,auStack_4c);
    if (((((param_1 & 0xffffffff) == 0) || ((param_2 & 0xffff) == 0)) || ((param_2 & 0xe000) != 0))
       || (((param_4 < uStack_50 || ((param_5 & 0xffffffff) == 0)) ||
           ((param_6 < auStack_4c[0] || ((param_7 & 0xffffffff) == 0)))))) {
      iVar1 = -0x7ff8ffa9;
    }
    else {
      iVar1 = fn_8314303C(param_1,param_2,param_3 << 0x20 | param_3 & 0xfe00ffff,param_5,param_7
                              ,param_8);
    }
    if (-1 < iVar1) {
      return -(unsigned __int64)(param_8 != 0) & 0x3e5;
    }
  }
  if (param_8 == 0) {
    thunk_FUN_82a2b748();
  }
  else {
    *(int *)(param_8 + 0x18) = iVar1;
  }
  return 0x65b;
}

