extern unsigned int *auStack_10;
extern int fn_82AA66A8();
extern int fn_82B8AB60();
extern unsigned int uStack_c;


unsigned int fn_82B47350(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char auStack_10 [4];
  unsigned int uStack_c;
  
  uVar1 = param_2[1];
  uVar2 = uVar1 & 3;
  if ((uVar1 & 3) == 0) {
    if (*(unsigned int *)(param_1 + 0x234) !=
        (-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4))) {
      if ((*(unsigned int *)((uVar1 >> 0x11) * 0x28 + *(int *)(param_1 + 0xc) + 4) & 4) != 0) {
        return 0;
      }
      if ((*(unsigned int *)(param_1 + 0x2c) & 2) != 0) {
        return 0;
      }
    }
    fn_82B8AB60(auStack_10,param_1,(unsigned int)param_2[1] >> 0x11,(unsigned int)param_2[1] >> 2 & 0x3fff);
  }
  else {
    uStack_c = uVar1;
    if (uVar2 != 1) {
      if (uVar2 < 3) {
        return (*(unsigned int *)*param_2 >> 5 & 0xff) >> (uVar1 >> 1 & 0x3e) & 3;
      }
      if (uVar2 == 3) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
  }
  return uStack_c >> 2 & 0x3fff;
}

