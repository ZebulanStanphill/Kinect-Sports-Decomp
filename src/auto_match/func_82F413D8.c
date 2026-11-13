extern unsigned int *auStack_50;
extern int fn_82E50BE8();
extern int fn_82E7BF78();
extern int memcpy();


__int64 fn_82F413D8(unsigned __int64 param_1,int param_2,int *param_3,unsigned int *param_4,int *param_5)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int auStack_50;
  
  auStack_50 = 0;
  if ((((param_3 == (int *)0x0) || (*param_3 == 0)) || (param_4 == (unsigned int *)0x0)) ||
     ((param_5 == (int *)0x0 || (*param_5 != 0)))) {
    return -0x7fffbffd;
  }
  if (param_2 != 1) {
    return 0;
  }
  uVar3 = (unsigned __int64)*param_4;
  lVar1 = fn_82E7BF78(*param_3,uVar3,&auStack_50);
  if (lVar1 < 0) {
    lVar1 = 0;
    uVar2 = uVar3;
  }
  else {
    uVar2 = (unsigned __int64)auStack_50;
  }
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  uVar4 = uVar2 + 2;
  if ((uVar4 & 0xffffffff) < uVar2) {
LAB_82f41474:
    lVar1 = -0x7fff0001;
  }
  else {
    if (uVar3 < (uVar4 & 0xffffffff)) {
      if ((0xffffffff < (uVar4 & 0xffffffff)) || ((uVar3 + 2 & 0xffffffff) != (uVar4 & 0xffffffff)))
      goto LAB_82f41474;
      uVar3 = fn_82E50BE8(uVar4,0,0,0,0);
      *param_5 = (int)uVar3;
      if ((uVar3 & 0xffffffff) == 0) {
        return -0x7ff8fff2;
      }
      memcpy(uVar3,*param_3,*param_4);
      *(unsigned short *)(((unsigned int)uVar4 & 0xfffffffe) + *param_5 + -2) = 0;
      *param_3 = *param_5;
    }
    *param_4 = (unsigned int)uVar4;
  }
  return lVar1;
}

