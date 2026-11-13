extern int fn_82A3FF60();
extern int fn_82A4C958();
extern int fn_82A5ED20();
extern int fn_82F691F0();
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82A4C9E0(int param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,int *param_5)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  
  uVar7 = 0;
  uVar5 = fn_82A5ED20(param_1,1,param_3,1);
  if (-1 < (__int64)uVar5) {
    uVar7 = (unsigned __int64)*(unsigned short *)(*param_3 + 2);
    lVar6 = uVar7 * 0xc;
    if (0x3fffffff < uVar7 * 3) {
      lVar6 = -1;
    }
    lVar6 = fn_82A3FF60(0xffffffff83219d50,lVar6,0x2097000a,0);
    *(int *)(param_1 + 0x30) = (int)lVar6;
    uVar5 = -(unsigned __int64)(lVar6 == 0) & 0xffffffff8007000e;
  }
  uVar4 = lbl_821AAD20;
  if (-1 < (int)uVar5) {
    uVar2 = *(unsigned int *)(*param_3 + 4);
    uVar3 = *(unsigned int *)(*param_5 + 4);
    *(int *)(param_1 + 0x48) = (int)uVar7;
    *(unsigned int *)(param_1 + 0x4c) = 0;
    *(unsigned int *)(param_1 + 0x40) = 0;
    *(unsigned int *)(param_1 + 0x34) = uVar4;
    fVar1 = (float)((double)uVar2 / (double)uVar3);
    *(float *)(param_1 + 0x58) = fVar1;
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 100) * fVar1;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(unsigned int *)(param_1 + 0x30),0,uVar7 * 0xc);
  }
  fn_82A4C958(param_1);
  return uVar5;
}

