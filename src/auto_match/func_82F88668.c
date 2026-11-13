extern int fn_82F63BA0();
extern int fn_82F66368();
extern int fn_82F68240();


unsigned int fn_82F88668(unsigned char *param_1,int param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  if (param_4 == 0) {
    if (param_1 == (unsigned char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_82f886a4;
    }
  }
  else if (param_1 == (unsigned char *)0x0) goto LAB_82f886a4;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = 0;
      return 0;
    }
    if (param_3 != 0) {
      uVar2 = fn_82F66368(param_1);
      return uVar2;
    }
    *param_1 = 0;
  }
LAB_82f886a4:
  puVar1 = (unsigned int *)fn_82F68240();
  *puVar1 = 0x16;
  fn_82F63BA0();
  return 0x16;
}

