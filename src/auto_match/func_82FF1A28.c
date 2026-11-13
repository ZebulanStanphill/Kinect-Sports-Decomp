extern int fn_82FF0250();
extern int fn_82FF2248();
extern int fn_82FF22B8();
extern int fn_82FF2510();


__int64 fn_82FF1A28(int param_1,unsigned __int64 *param_2,unsigned int param_3)

{
  int iVar1;
  __int64 lVar2;
  int aiStack_30 [2];
  __int64 alStack_28;
  
  if ((param_3 & 0xff) == 0xff) {
    fn_82FF2248(aiStack_30,param_1 + 0x1c,*param_2);
    if (aiStack_30[0] != *(int *)(param_1 + 0x20)) {
      fn_82FF22B8(&alStack_28,param_1 + 0x1c,aiStack_30);
    }
    lVar2 = 1;
  }
  else {
    alStack_28 = (__int64)(int)(param_3 & 0xff);
    iVar1 = fn_82FF2510((double)alStack_28,param_1 + 0x1c,*param_2);
    lVar2 = (unsigned __int64)(iVar1 == 0) + 1;
  }
  fn_82FF0250(param_1);
  return lVar2;
}

