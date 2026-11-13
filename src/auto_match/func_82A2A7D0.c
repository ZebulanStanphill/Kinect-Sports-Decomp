extern int fn_82A2A370();
extern int fn_82A36078();
extern int fn_82A362D0();
extern int memset();


unsigned __int64 fn_82A2A7D0(int *param_1)

{
  __int64 lVar1;
  int iVar2;
  char cVar3;
  unsigned __int64 uVar4;
  int aiStack_40;
  __int64 lStack_38;
  __int64 lStack_30;
  __int64 alStack_28 [1];
  
  uVar4 = 0;
  iVar2 = fn_82A362D0(param_1,&aiStack_40);
  if (iVar2 == 0) {
    if (aiStack_40 == 0) {
      param_1[0x15] = 0;
                    /* WARNING: Subroutine does not return */
      memset(param_1 + 0x11,0,0x10);
    }
    KeQuerySystemTime(&lStack_38);
    if ((((*(short *)((int)param_1 + 0x46) != 0) && (*(short *)((int)param_1 + 0x9a) != 0)) &&
        (cVar3 = fn_82A36078(param_1 + 0x11,alStack_28,&lStack_38,1), cVar3 != '\0')) &&
       (cVar3 = fn_82A36078(param_1 + 0x26,&lStack_30,&lStack_38,1), cVar3 != '\0')) {
      lVar1 = (__int64)(*param_1 * 0x3c) * 10000000;
      alStack_28[0] = (__int64)(param_1[0x2a] * 0x3c) * 10000000 + lVar1 + alStack_28[0];
      lStack_30 = (__int64)(param_1[0x15] * 0x3c) * 10000000 + lVar1 + lStack_30;
      if (lStack_30 < alStack_28[0]) {
        if ((lStack_38 < lStack_30) || (alStack_28[0] <= lStack_38)) {
          return 1;
        }
      }
      else if ((alStack_28[0] <= lStack_38) && (lStack_38 < lStack_30)) {
        return 1;
      }
      uVar4 = 2;
    }
  }
  else {
    fn_82A2A370();
    uVar4 = 0xffffffffffffffff;
  }
  return uVar4;
}

