extern int fn_82F61A28();
extern int fn_82F61AB0();
extern int fn_82F61B68();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


__int64 fn_82F60CA8(int param_1)

{
  __int64 lVar1;
  int iVar2;
  unsigned int uStack_30;
  int iStack_2c;
  int aiStack_28;
  
  iVar2 = param_1 + 4;
  uStack_30 = 0;
  lVar1 = fn_82F61A28(iVar2,&uStack_30);
  if (lVar1 == 0) {
    if ((int)uStack_30 < 1) {
      fn_82F61AB0(iVar2);
      lVar1 = -0x7ddbfbf9;
    }
    else {
      fn_82F61B68(iVar2,(unsigned __int64)uStack_30 - 1,&aiStack_28);
      fn_82F61B68(iVar2,0,&iStack_2c);
      if (*(int *)(param_1 + 0x5c) == *(int *)(iStack_2c + 0x44)) {
        fn_82F61AB0(iVar2);
        lVar1 = -0x7ddbfbf8;
      }
      else {
        *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(aiStack_28 + 0x44);
        *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)(iStack_2c + 0x44);
      }
    }
  }
  return lVar1;
}

