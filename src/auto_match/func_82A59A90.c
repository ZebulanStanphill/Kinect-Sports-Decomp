extern int fn_82A598F0();
extern int fn_82A76400();
extern int fn_82A76478();


__int64 fn_82A59A90(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  __int64 lVar1;
  int iVar2;
  int aiStack_30;
  
  aiStack_30 = 0;
  lVar1 = fn_82A76478(param_2,*param_1,param_1[1],&aiStack_30);
  if (-1 < lVar1) {
    iVar2 = fn_82A598F0(param_1 + (*(int *)(aiStack_30 + 0x30) % 0xd) * 10 + 2);
    if (iVar2 == 0) {
      lVar1 = -0x7ff8fff2;
      fn_82A76400(aiStack_30);
    }
    else {
      lVar1 = 0;
      *param_3 = *(unsigned int *)(aiStack_30 + 0x30);
      param_1[0x84] = param_1[0x84] + 1;
    }
  }
  return lVar1;
}

