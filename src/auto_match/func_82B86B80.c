#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82AA66A8();
extern int fn_82B167E0();
extern int fn_82B80CD0();
extern unsigned int uStack_30;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

float * fn_82B86B80(float *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  float fVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  double dVar4;
  unsigned __int64 uStack_30;
  
  uVar3 = (unsigned int)((param_3 & 0xffffffff) << 1) & 0x1e;
  uStack_30 = CONCAT44(*(unsigned int *)(param_2 + 0x14) >> 2,(((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF)) & 0xffffffffff;
  param_1[1] = (float)(((2 << ((int)((param_3 & 0xffffffff) << 1) + 1U & 0x1f)) - 1U &
                        *(unsigned int *)((int)&uStack_30 + ((unsigned int)param_3 >> 2 & 0x1ffffffc)) & -1 << uVar3
                       ) >> uVar3);
  if ((param_4 & 0xffffffff) == 0) {
    uStack_30 = ((((unsigned __int64)(uStack_30)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(*(float *)((int)((param_3 + 0xb & 0xffffffff) << 2) + param_2))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  }
  else {
    uVar2 = fn_82B167E0(param_2,param_3);
    dVar4 = (double)fn_82B80CD0(uVar2,param_1[1],param_4);
    fVar1 = param_1[1];
    if (fVar1 == 0.0) {
      uStack_30 = ((((unsigned __int64)(uStack_30)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((float)dVar4)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    }
    else if (fVar1 == 1.4013e-45) {
      uStack_30 = ((((unsigned __int64)(uStack_30)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((float)(int)dVar4)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    }
    else {
      if (2 < (unsigned int)fVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(*(unsigned int *)(*(int *)(param_2 & 0xfffff000) + 0x94),0x12c0);
      }
      uStack_30 = ((((unsigned __int64)(uStack_30)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((float)(__int64)dVar4)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    }
  }
  *param_1 = (((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF);
  return param_1;
}

