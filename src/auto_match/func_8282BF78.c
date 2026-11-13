extern char *pcRam8320a794;
extern int fn_8282BE80();
extern int fn_8282BEC8();
extern int fn_8282BF18();
extern int fn_8282BF48();
extern int iRam8320a784;
extern int iRam8320a788;
extern int iRam8320a78c;
extern int iRam8320a790;


void fn_8282BF78(int param_1,int *param_2)

{
  int (**pcVar1)();

  if (iRam8320a788 == 0) {
    param_2[1] = (int)fn_8282BE80;
    *param_2 = param_1 + 0xd8;
    param_2[2] = (int)fn_8282BEC8;
    param_2[3] = (int)fn_8282BF18;
    pcVar1 = fn_8282BF48;
  }
  else {
    *param_2 = iRam8320a784;
    param_2[1] = iRam8320a788;
    param_2[2] = iRam8320a78c;
    param_2[3] = iRam8320a790;
    pcVar1 = pcRam8320a794;
  }
  param_2[4] = (int)pcVar1;
  return;
}
