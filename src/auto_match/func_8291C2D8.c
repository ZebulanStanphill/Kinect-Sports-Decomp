extern int fn_828F9A60();
extern int fn_828F9B38();
extern int fn_8291BDE8();


unsigned __int64 fn_8291C2D8(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned short *puVar4;
  unsigned __int64 uVar5;
  int aiStack_30 [12];
  
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff8876086c;
  }
  aiStack_30[0] = 0;
  uVar5 = 0;
  if ((*param_2 & 0xffffff00) == 0x102a1100) {
    uVar2 = param_2[4];
    if (uVar2 == 0) {
      return 0xffffffff88760b59;
    }
    aiStack_30[0] = (int)param_2 + uVar2 + 4;
    uVar5 = 1;
    *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(uVar2 + (int)param_2);
  }
  else {
    uVar1 = fn_828F9B38(param_2,0x42415443,aiStack_30,param_1 + 0xc);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if ((int)uVar1 == 1) {
      return 0xffffffff88760b59;
    }
  }
  uVar5 = fn_8291BDE8(param_1,aiStack_30[0],*(unsigned int *)(param_1 + 0xc),uVar5);
  if (-1 < (int)uVar5) {
    if ((param_3 & 0xffffffff) != 0) {
      uVar3 = 0;
      uVar2 = 0;
      if (*(unsigned int *)(param_1 + 0x18) != 0) {
        puVar4 = (unsigned short *)(*(int *)(*(int *)(param_1 + 0x10) + 0x10) + *(int *)(param_1 + 8) + 8);
        do {
          if ((puVar4[-2] == 2) && (uVar3 < (unsigned __int64)*puVar4 + (unsigned __int64)puVar4[-1])) {
            uVar3 = (unsigned __int64)*puVar4 + (unsigned __int64)puVar4[-1];
          }
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 10;
        } while (uVar2 < *(unsigned int *)(param_1 + 0x18));
      }
      uVar5 = fn_828F9A60(uVar3 << 4,param_3);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}

