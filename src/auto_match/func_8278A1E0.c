extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82788DD0();
extern int fn_82789C08();


unsigned __int64 fn_8278A1E0(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  float fVar2;
  float *pfVar3;
  unsigned int uVar4;
  struct { float first; float second; } stack_pair_30;

  float fStack_28;
  
  uVar1 = param_1[3];
  pfVar3 = (float *)(*(int *)(((unsigned int)param_2 >> 6 & 0x3fffffc) + uVar1) +
                    ((unsigned int)param_2 & 0xff) * 0xc);
  fVar2 = pfVar3[2];
  if (((unsigned int)fVar2 & 0x80000000) != 0) {
    uVar4 = *(unsigned int *)(*(int *)((param_3 >> 6 & 0x3fffffc) + uVar1) + (param_3 & 0xff) * 0xc + 8);
    if ((uVar4 & 0x80000000) != 0) {
      uVar4 = *(unsigned int *)(*(int *)(((unsigned int)((param_4 & 0xffffffff) >> 6) & 0x3fffffc) + uVar1) +
                        ((unsigned int)param_4 & 0xff) * 0xc + 8);
    }
    uVar4 = uVar4 & 0xffffff;
    if (((unsigned int)fVar2 & 0xffffff) != uVar4) {
      if (((unsigned int)fVar2 & 0x8000000) == 0) {
        pfVar3[2] = (float)((unsigned int)fVar2 & 0xff000000 | uVar4 | 0x18000000);
      }
      else {
        stack_pair_30.first = *pfVar3;
        stack_pair_30.second = pfVar3[1];
        fStack_28 = pfVar3[2];
        param_2 = fn_82788DD0((double)stack_pair_30.first,(double)stack_pair_30.second,param_1,uVar4);
        if ((int)param_2 < 0) {
          param_2 = (unsigned __int64)*param_1;
          fStack_28 = (float)((unsigned int)fVar2 & 0xff000000 | uVar4 | 0x10000000);
          fn_82789C08(param_1,&stack_pair_30.first);
        }
      }
    }
  }
  return param_2;
}

