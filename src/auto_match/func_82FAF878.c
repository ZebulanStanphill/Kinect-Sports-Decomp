extern int fn_82FB03A0();


int fn_82FAF878(int *param_1)

{
  int uVar1;
  
  uVar1 = (*(int (**)())(*param_1 + 0x164))();
  if ((uVar1 == 1) && (uVar1 = fn_82FB03A0(param_1), uVar1 != 1)) {
    (*(int (**)())(*param_1 + 0x168))(param_1);
  }
  return uVar1;
}

