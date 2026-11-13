extern int fn_82FF3390();
extern int fn_82FF33A8();
extern int fn_82FF33C0();


unsigned __int64 fn_8302C1B0(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if (param_2[2] == 0) {
    (**(int (***)())(*param_1 + 0xa0))(param_1,*param_2 == 1);
  }
  if (*(short *)(param_1 + 6) != 0) {
    uVar1 = *param_2;
    if (uVar1 == 0) {
      uVar2 = fn_82FF3390(param_1,param_2[2],param_2 + 3,0);
      return uVar2;
    }
    if (uVar1 == 1) {
      uVar2 = fn_82FF33A8(param_1,param_2[2],param_2 + 3,0);
      return uVar2;
    }
    if (uVar1 < 3) {
      uVar2 = fn_82FF33C0(param_1,param_2[2],param_2 + 3,*(unsigned char *)((int)param_2 + 0x15),
                                0);
      return uVar2;
    }
  }
  return 1;
}

