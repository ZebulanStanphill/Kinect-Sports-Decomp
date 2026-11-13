extern int fn_82875170();


unsigned char * fn_82875580(unsigned char *param_1,unsigned char *param_2,unsigned char *param_3)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = (int)param_1 - (int)param_3;
    do {
      if (param_3 != (unsigned char *)0x0) {
        *param_3 = param_3[iVar1];
        fn_82875170(param_3 + 4,param_3 + 4 + iVar1);
      }
      param_3 = param_3 + 0x70;
    } while (param_3 + iVar1 != param_2);
  }
  return param_3;
}

