extern int fn_82F68CC0();
extern int fn_82F691F0();


unsigned __int64 fn_82A366C8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar2 = param_1[3];
  param_1[3] = uVar2 + 1;
  uVar1 = (unsigned char)(param_3 >> 8);
  if (uVar2 + 1 == param_1[4]) {
    if (param_1[2] + 5 <= param_1[1]) {
      *(unsigned char *)*param_1 = 0xff;
      *(char *)(*param_1 + 1) = (char)((unsigned int)param_4 >> 8);
      *(char *)(*param_1 + 2) = (char)param_4;
      *(unsigned char *)(*param_1 + 3) = uVar1;
      *(char *)(*param_1 + 4) = (char)param_3;
      *param_1 = *param_1 + 5;
    }
    uVar3 = 5;
    uVar2 = param_1[2] + 5;
  }
  else {
    if (param_1[2] + 2 <= param_1[1]) {
      *(unsigned char *)*param_1 = uVar1;
      *(char *)(*param_1 + 1) = (char)param_3;
      *param_1 = *param_1 + 2;
    }
    uVar3 = 0;
    uVar2 = param_1[2] + 2;
  }
  param_1[2] = uVar2;
  uVar4 = (unsigned __int64)param_1[1] - (unsigned __int64)param_1[2];
  if ((unsigned __int64)param_1[1] < (unsigned __int64)param_1[2]) {
    uVar4 = 0;
  }
  if ((param_3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
    uVar4 = param_3;
  }
  fn_82F68CC0(*param_1,param_2,uVar4);
  uVar2 = *param_1;
  param_3 = param_1[2] + param_3;
  *param_1 = (unsigned int)(uVar2 + uVar4);
  param_1[2] = (unsigned int)param_3;
  if (uVar3 != 0) {
    uVar5 = param_1[1] - param_3;
    if ((unsigned __int64)param_1[1] < (param_3 & 0xffffffff)) {
      uVar5 = 0;
    }
    if (uVar3 < (uVar5 & 0xffffffff)) {
      uVar5 = uVar3;
    }
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar2 + uVar4,0,uVar5);
  }
  return 0;
}

