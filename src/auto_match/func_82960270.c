extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_8295D318();
extern int fn_8295F950();


unsigned __int64 fn_82960270(int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_20 [4];
  unsigned char auStack_1c [4];
  
  uVar1 = *(unsigned int *)param_1[0x41] & 0xfffff;
  if (uVar1 == 1) {
    uVar2 = 5;
  }
  else if (uVar1 == 3) {
    uVar2 = 8;
  }
  else {
    if (uVar1 != 4) {
      uVar2 = (**(int (***)())(*param_1 + 0x154))(param_1,param_1[0x40],auStack_20,2,0,0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_8295D318(param_1,5,auStack_20,2,(unsigned __int64)*(unsigned int *)(param_1[0x41] + 8),
                                (unsigned __int64)*(unsigned int *)(param_1[0x41] + 8) + 8,0,2);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_8295D318(param_1,2,*(unsigned int *)(param_1[0x41] + 0x10),
                                *(unsigned int *)(param_1[0x41] + 0xc),auStack_20,auStack_1c,0,1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      return 0;
    }
    uVar2 = 9;
  }
  uVar2 = fn_8295F950(param_1,uVar2,0);
  return uVar2;
}

