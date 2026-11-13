extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826E6BB0();
extern int fn_826E6BC0();
extern int inflateInit_();


int * fn_826E6C18(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  if (param_2 != (int *)0x0) {
    fn_8267C4C8(param_2);
    if (*param_1 != 0) {
      fn_8267C4F0();
    }
  }
  *param_1 = (int)param_2;
  iVar1 = (**(int (***)())(*param_2 + 0x10))(param_2);
  param_1[0xf] = iVar1;
  param_1[0x10] = 0;
  *(unsigned char *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[9] = (int)fn_826E6BB0;
  param_1[10] = (int)fn_826E6BC0;
  param_1[0xb] = (int)param_1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  iVar1 = inflateInit_(param_1 + 1,0xffffffff8200d654,0x38);
  if (iVar1 == 0) {
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
  }
  else {
    param_1[0x12] = 1;
  }
  return param_1;
}

