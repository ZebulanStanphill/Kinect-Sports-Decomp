extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8296DA28();
extern int fn_82F691F0();


unsigned __int64 fn_829145D8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar1 = param_1[1];
  if ((uVar1 == 0) || (*(int *)(uVar1 + 4) != 4)) {
    uVar2 = 0;
  }
  else if (param_1[2] == 0) {
    uVar2 = 0xffffffff80004005;
  }
  else {
    uVar2 = fn_8296DA28(param_1[2],uVar1,(unsigned __int64)*param_1 + 0x18,param_1[4],param_1[5]);
    if (-1 < (int)uVar2) {
      fn_8265C990(param_1[6],0x24810000);
      uVar3 = fn_8265C940(*(int *)(uVar1 + 0x1c) << 2,0x24810000);
      param_1[6] = (unsigned int)uVar3;
      if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar3,0xff,*(int *)(uVar1 + 0x1c) << 2);
      }
      uVar2 = 0xffffffff8007000e;
    }
  }
  return uVar2;
}

