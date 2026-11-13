typedef unsigned __int64 unused64;
extern int fn_82C59720();


int fn_82C52CF8(int param_1)

{
  int uVar1;
  
  *(unsigned int *)(param_1 + 0x549c) = 0;
  *(unsigned int *)(param_1 + 0xd8c) = 0;
  *(unsigned int *)(param_1 + 0xd98) = 0;
  *(unsigned int *)(param_1 + 0xd94) = 0;
  *(unsigned int *)(param_1 + 0x5428) = 0;
  *(unsigned int *)(param_1 + 0x556c) = 0;
  *(unsigned int *)(param_1 + 0x54ac) = 1;
  *(unsigned int *)(param_1 + 0xda0) = 0;
  *(unsigned int *)(param_1 + 0x5448) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x198) = 0;
  *(unsigned int *)(param_1 + 0x54a0) = 0;
  *(unsigned int *)(param_1 + 0x54a8) = 0;
  *(unsigned int *)(param_1 + 0x54a4) = 0;
  *(unsigned int *)(param_1 + 0xfb4) = 0;
  *(unsigned int *)(param_1 + 0x5518) = 0;
  *(unsigned int *)(param_1 + 0x154) = 0;
  *(unsigned int *)(param_1 + 0x14c) = 0;
  *(unsigned int *)(param_1 + 0xe90) = 0;
  uVar1 = fn_82C59720(param_1,0,0,0,0,0);
  if ((int)uVar1 == 0) {
    *(unsigned int *)(param_1 + 0xe94) = 0;
    *(unsigned int *)(param_1 + 0x55b4) = 0;
    if (((*(int *)(param_1 + 0x5628) * *(int *)(param_1 + 0x562c) > *(int *)(param_1 + 0x5578)) ||
        (*(int *)(param_1 + 0x5628) > *(int *)(param_1 + 0x5588))) ||
       (*(int *)(param_1 + 0x562c) > *(int *)(param_1 + 0x558c))) {
      uVar1 = -8;
    }
    else {
      *(unsigned int *)(param_1 + 0x557c) = 0;
    }
  }
  return uVar1;
}

