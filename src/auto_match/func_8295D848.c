extern unsigned int *auStack_50;
extern int fn_828F6FA8();
extern int fn_828FC450();
extern int fn_828FCDE0();
extern int fn_829548C8();
extern int fn_8295A330();
extern int fn_8295D0A8();


unsigned __int64 fn_8295D848(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned char auStack_50 [32];
  
  if (param_1[0x57] == 0) {
    uVar1 = fn_8295D0A8(param_1,0x30);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(int (***)())(*param_1 + 0x138))
                      (param_1,param_2 & 0xffffffff000007ff | 0xf0000000,0xf0000,0);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_8295A330(param_1,*param_3);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_8295A330(param_1,param_3[1]);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_8295A330(param_1,param_3[2]);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_8295A330(param_1,param_3[3]);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = (**(int (***)())(*param_1 + 0x134))(param_1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    uVar1 = fn_829548C8(param_1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  else {
    fn_828F6FA8(auStack_50,0x20,0xffffffff82038338,param_2);
    uVar1 = fn_828FCDE0(param_1 + 0x6e,auStack_50,param_2,1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    iVar2 = fn_828FC450(param_1 + 0x6e,auStack_50);
    *(unsigned int *)(iVar2 + 0xc) = 1;
    *(unsigned int *)(iVar2 + 0x10) = *param_3;
    *(unsigned int *)(iVar2 + 0x14) = param_3[1];
    *(unsigned int *)(iVar2 + 0x18) = param_3[2];
    *(unsigned int *)(iVar2 + 0x1c) = param_3[3];
    param_1[0x7e] = param_1[0x7e] + 1;
  }
  return 0;
}

