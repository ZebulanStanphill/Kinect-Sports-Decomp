extern int fn_82E442E0();


unsigned __int64 fn_82E44FF8(unsigned int *param_1,unsigned __int64 *param_2)

{
  short *psVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int aiStack_30;
  
  psVar1 = (short *)param_1[1];
  *param_1 = 0;
  iVar5 = 1;
  if (param_2 == (unsigned __int64 *)0x0) {
    uVar4 = 0x80070057;
LAB_82e4502c:
    uVar2 = 0;
    *param_1 = uVar4;
  }
  else {
    if (psVar1 < (short *)param_1[2]) {
      if (*psVar1 == 0x2d) {
        iVar5 = -1;
        param_1[1] = psVar1 + 1;
      }
      iVar3 = fn_82E442E0(param_1,&aiStack_30);
      if (iVar3 == 0) {
        return 0;
      }
      *(int *)param_2 = aiStack_30;
      if (iVar5 < 0) {
        if (0xffffffff80000000 < *param_2) goto LAB_82e450ac;
        *(int *)param_2 = -aiStack_30;
      }
      else if (0x7fffffff < *param_2) {
LAB_82e450ac:
        param_1[1] = psVar1;
        uVar4 = 0x80070216;
        goto LAB_82e4502c;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

