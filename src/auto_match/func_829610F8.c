extern int fn_829548C8();
extern int fn_8295A330();
extern int fn_8295D0A8();
extern int fn_82975B00();


unsigned int fn_829610F8(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if ((param_1[0x57] == 0) && ((*param_2 & 0x10000000) == 0)) {
    uVar1 = fn_8295D0A8(param_1,0x200001f);
    if (-1 < (int)uVar1) {
      uVar1 = param_2[0xf];
      if (uVar1 == 0x200000) {
        uVar2 = 0xffffffff90000000;
      }
      else if (uVar1 == 0x400000) {
        uVar2 = 0xffffffffa0000000;
      }
      else {
        if (uVar1 != 0x800000) {
          fn_82975B00(param_1,0,0x12ce,0xffffffff820343a0);
          return 0x80004005;
        }
        uVar2 = 0xffffffff98000000;
      }
      uVar1 = fn_8295A330(param_1,uVar2);
      if ((-1 < (int)uVar1) &&
         (uVar1 = (**(int (***)())(*param_1 + 0x138))(param_1,param_2[3] & 0x7ff | 0xa0000800,0xf0000,0)
         , -1 < (int)uVar1)) {
        uVar1 = fn_829548C8(param_1);
        uVar1 = (int)uVar1 >> 0x1f & uVar1;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

