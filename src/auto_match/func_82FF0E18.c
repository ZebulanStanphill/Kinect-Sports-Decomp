extern int fn_82FF0250();
extern int fn_82FF0478();
extern int fn_82FF5400();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;


unsigned __int64 fn_82FF0E18(int *param_1,int *param_2,char param_3)

{
  if ((param_3 == '\0') && (1 < (unsigned int)param_1[0x4c])) {
    param_1[0x4c] = param_1[0x4c] - 1;
  }
  else {
    param_1[0x4c] = 0;
    (**(int (***)())(*param_1 + 0x14))(param_1);
    if (*param_2 == 0) {
      if (param_1[0x17] == 0) {
        *(unsigned char *)((int)param_1 + 0xd7) = 0xff;
        fn_82FF0250(param_1);
      }
      else {
        fn_82FF5400((double)lbl_821AAD20,lbl_832642F4,param_1[0x17],0x8000000);
      }
    }
    else {
      fn_82FF0478(param_1,0,0x8000000,*(unsigned __int64 *)param_2,0);
    }
  }
  return 1;
}

