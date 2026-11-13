extern int fn_82A81CC0();
extern unsigned int *lbl_832767EC;


unsigned __int64 fn_82525888(__int64 param_1,unsigned int *param_2,unsigned char *param_3)

{
  unsigned char uVar1;
  
  if (lbl_832767EC == (unsigned int *)0x0) {
    if (param_2 != (unsigned int *)0x0) {
      return 0;
    }
  }
  else if (param_2 != (unsigned int *)0x0) {
    *param_2 = *lbl_832767EC;
  }
  if (param_3 != (unsigned char *)0x0) {
    uVar1 = fn_82A81CC0(param_1 + 0x1e0);
    *param_3 = uVar1;
  }
  return 1;
}

