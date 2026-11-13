extern int fn_829548C8();
extern int fn_8295A330();
extern int fn_8295D0A8();
extern int fn_82975B00();


unsigned int fn_82940360(int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  if (param_1[0x57] == 0) {
    uVar2 = fn_8295D0A8(param_1,0x200001f);
    if (-1 < (int)uVar2) {
      iVar1 = *(int *)(param_2 + 0x3c);
      if (iVar1 == 0x200000) {
        uVar3 = 0xffffffff90000000;
      }
      else if (iVar1 == 0x400000) {
        uVar3 = 0xffffffffa0000000;
      }
      else {
        if (iVar1 != 0x800000) {
          fn_82975B00(param_1,0,0x12ce,0xffffffff820343a0);
          return 0x80004005;
        }
        uVar3 = 0xffffffff98000000;
      }
      uVar2 = fn_8295A330(param_1,uVar3);
      if ((-1 < (int)uVar2) &&
         (uVar2 = (**(int (***)())(*param_1 + 0x138))
                            (param_1,*(unsigned int *)(param_2 + 0xc) & 0x7ff | 0xa0000800,0xf0000,0),
         -1 < (int)uVar2)) {
        uVar2 = fn_829548C8(param_1);
        uVar2 = (int)uVar2 >> 0x1f & uVar2;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

