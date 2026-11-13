extern int fn_82822510();


__int64 fn_82823640(__int64 param_1)

{
  __int64 lVar1;
  int aiStack_30 [8];
  
  fn_82822510(0xffffffff8320a5dc,0xffffffff82823440,param_1,aiStack_30);
  if (aiStack_30[0] == 0) {
    lVar1 = 0;
  }
  else {
    if ((*(unsigned int *)(aiStack_30[0] + 0xc) & 4) != 0) {
      param_1 = param_1 - (unsigned __int64)*(unsigned int *)(aiStack_30[0] + 0x78);
    }
    lVar1 = (**(int (***)())(*(int *)(aiStack_30[0] + 0x10) + 0x10))(aiStack_30[0],param_1);
    if ((*(unsigned int *)(aiStack_30[0] + 0xc) & 4) != 0) {
      lVar1 = lVar1 + ((unsigned __int64)*(unsigned int *)(aiStack_30[0] + 0x78) & 0x7fffffff) * -2;
    }
  }
  return lVar1;
}

