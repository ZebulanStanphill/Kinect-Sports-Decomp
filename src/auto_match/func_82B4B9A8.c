extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern int fn_82AA66A8();
extern int fn_82B4ABF8();
extern int fn_82B85298();
extern int fn_82B8AB60();


unsigned __int64 fn_82B4B9A8(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned char auStack_20 [8];
  unsigned char auStack_18 [8];
  
  uVar1 = param_2[1];
  uVar2 = uVar1 & 3;
  if ((uVar1 & 3) == 0) {
    if ((*(unsigned int *)(param_1 + 0x234) ==
         (-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4))) ||
       (((*(unsigned int *)((uVar1 >> 0x11) * 0x28 + *(int *)(param_1 + 0xc) + 4) & 4) == 0 &&
        ((*(unsigned int *)(param_1 + 0x2c) & 2) == 0)))) {
      puVar4 = (unsigned int *)fn_82B8AB60(auStack_18,param_1,param_2[1] >> 0x11,
                                         param_2[1] >> 2 & 0x3fff);
    }
    else {
      puVar4 = (unsigned int *)fn_82B85298(auStack_20,param_1,*(unsigned int *)(param_1 + 0x234),
                                         param_2[1] >> 0x11,param_2[1] >> 2 & 0x3fff);
    }
    return (unsigned __int64)*puVar4;
  }
  if (uVar2 == 1) {
    return (unsigned __int64)*param_2;
  }
  if (uVar2 < 3) {
    return (unsigned __int64)*(unsigned int *)(*param_2 + 0xc);
  }
  if (uVar2 == 3) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      uVar3 = fn_82B4ABF8(param_1,(unsigned __int64 *)*param_2,*(unsigned __int64 *)*param_2,0);
      return uVar3;
    }
    uVar3 = ((int (*)())fn_82B4B9A8)();
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c0);
}

