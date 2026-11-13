typedef unsigned char bool;


__int64 fn_82F40CF0(int *param_1,short param_2,int param_3)

{
  bool bVar1;
  __int64 lVar2;
  
  lVar2 = 0;
  if (param_2 != 0) {
    if (param_2 == -1) {
      bVar1 = param_3 == 0;
    }
    else {
      lVar2 = (**(int (***)())(*param_1 + 0xc))();
      if (lVar2 < 0) {
        return lVar2;
      }
      bVar1 = (int)lVar2 == 1;
    }
    if (bVar1) {
      lVar2 = -0x7ff8ffa9;
    }
  }
  return lVar2;
}

