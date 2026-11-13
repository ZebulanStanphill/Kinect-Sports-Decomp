extern int fn_82F68CC0();


void fn_8252DDF0(unsigned __int64 param_1,__int64 param_2)

{
  __int64 lVar1;
  int iVar2;
  
  if ((((param_1 & 0xffffffff) != 0) && (iVar2 = (int)param_2, -2 < iVar2)) && (iVar2 < 2)) {
    if (iVar2 == -1) {
      fn_82F68CC0(0xffffffff832967b8,param_1,0x68);
      lVar1 = -0x7cd697e0;
    }
    else {
      lVar1 = param_2 * 0x68 + -0x7cd69848;
    }
    fn_82F68CC0(lVar1,param_1,0x68);
  }
  return;
}

