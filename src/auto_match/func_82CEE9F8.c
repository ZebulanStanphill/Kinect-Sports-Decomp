extern int fn_82CEAC28();
extern int fn_82CEAF18();
extern unsigned int lbl_8323AB38;


unsigned char * fn_82CEE9F8(unsigned char *param_1,unsigned char *param_2)

{
  int iVar1;
  
  for (; (param_2 != (unsigned char *)0x0 && (param_2 != &lbl_8323AB38));
      param_2 = (unsigned char *)fn_82CEAC28(param_2)) {
    iVar1 = fn_82CEAF18(param_2);
    if (0 < iVar1) {
      *param_1 = 1;
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}

