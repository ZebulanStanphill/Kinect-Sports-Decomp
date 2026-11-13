extern int fn_82720D48();
extern int fn_8269F500();
extern int fn_82720D48();


void fn_82721008(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  int param_5)

{
  int iVar1;
  __int64 lVar2;
  int aiStack_30;

  if (param_5 == 0) {
    fn_82720D48(param_1 + -0x34,param_2,param_3,0x67,0,0,param_4,0);
  }
  else {
    iVar1 = *(int *)(param_5 + 0x80);
    if (iVar1 == 0) {
      iVar1 = fn_8269F500(param_5);
    }
    aiStack_30 = *(int *)(iVar1 + 0xc);
    *(int *)(aiStack_30 + 8) = *(int *)(aiStack_30 + 8) + 1;
    fn_82720D48(param_1 + -0x34,param_2,param_3,0x67,&aiStack_30,0,param_4,0);
    lVar2 = (unsigned __int64)*(unsigned int *)(aiStack_30 + 8) - 1;
    *(int *)(aiStack_30 + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_82720D48(aiStack_30);
    }
  }
  return;
}
