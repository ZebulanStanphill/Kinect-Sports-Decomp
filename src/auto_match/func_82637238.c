extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();


void fn_82637238(int *param_1,unsigned int *param_2,int *param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar2 = (unsigned __int64)(unsigned int)param_1[1] + 1;
  if ((unsigned __int64)(unsigned int)param_1[2] < (uVar2 & 0xffffffff)) {
    uVar3 = ((unsigned __int64)(unsigned int)param_1[2] & 0x7fffffff) << 1;
    if (uVar3 < (uVar2 & 0xffffffff)) {
      uVar3 = uVar2;
    }
    lVar1 = fn_8265C940((uVar3 & 0x3fffffff) << 2,0x64800000);
    if (lVar1 == 0) {
      *param_3 = -0x7ff8fff2;
      return;
    }
    param_1[2] = (int)uVar3;
    if (*param_1 != 0) {
      fn_82F68CC0(lVar1,*param_1,param_1[1] << 2);
      fn_8265C990(*param_1,0x24800000);
    }
    *param_1 = (int)lVar1;
  }
  if (-1 < *param_3) {
    *(unsigned int *)(param_1[1] * 4 + *param_1) = *param_2;
    param_1[1] = param_1[1] + 1;
  }
  return;
}

