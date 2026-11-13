extern int fn_82FF3390();
extern int fn_82FF33A8();
extern int fn_82FF33C0();


unsigned __int64 fn_83028A28(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if (*(char *)((int)param_2 + 0x15) != '\0') {
    (**(int (***)())(*param_1 + 0xa0))(param_1,*param_2 == 1);
  }
  if ((*(short *)(param_1 + 6) != 0) && (uVar1 = *param_2, uVar1 < 4)) {
    if (uVar1 == 1) {
      uVar2 = fn_82FF33A8(param_1,param_2[1],param_2 + 3,param_2[2]);
      return uVar2;
    }
    if (uVar1 == 2) {
      uVar2 = fn_82FF33C0(param_1,param_2[1],param_2 + 3,*(unsigned char *)((int)param_2 + 0x16),
                                param_2[2]);
      return uVar2;
    }
    if (uVar1 == 0) {
      uVar2 = fn_82FF3390(param_1,param_2[1],param_2 + 3,param_2[2]);
      return uVar2;
    }
    (**(int (***)())(*param_1 + 0x28))(param_1,param_2[1],param_2[6],param_2[2]);
  }
  return 1;
}

