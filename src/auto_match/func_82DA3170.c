extern int fn_82D839C0();
extern int fn_82DAF5A0();


int fn_82DA3170(unsigned int *param_1)

{
  unsigned int iVar1;
  
  if ((param_1[10] == 0) || (param_1[10] == 1)) {
    (*(int (**)())(*param_1 + 0x10))(param_1);
  }
  if ((param_1[10] == 0) || (param_1[10] == 2)) {
    (*(int (**)())(*param_1 + 0x14))(param_1);
  }
  if ((param_1[10] == 0) || (param_1[10] == 3)) {
    (*(int (**)())(*param_1 + 0x18))(param_1);
  }
  if ((param_1[10] != 0) && (iVar1 = fn_82D839C0(param_1[3]), iVar1 != 0)) {
    fn_82DAF5A0(param_1[3]);
  }
  return param_1[10];
}

