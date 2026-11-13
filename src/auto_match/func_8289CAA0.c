extern int fn_82897B20();
extern int fn_82899B38();
extern int fn_82899D60();
extern int fn_8289AAC0();
extern int fn_8289C538();
extern int fn_8289C640();
extern int fn_8289C7B0();


void fn_8289CAA0(int param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = fn_82897B20(*(unsigned int *)(param_1 + 0x18));
  if (iVar1 == 1) {
    if (param_3 == '\0') {
      fn_8289C538(param_1,*(unsigned char *)(param_2 + 0x26),param_2);
    }
    else {
      fn_8289AAC0();
    }
  }
  else if (iVar1 == 2) {
    if (param_3 == '\0') {
      fn_8289C640(param_1,*(char *)(param_2 + 0x26) == '\0',param_2);
    }
    else {
      fn_82899B38();
    }
  }
  else if (iVar1 == 3) {
    if (param_3 == '\0') {
      fn_8289C7B0(param_1,*(unsigned char *)(param_2 + 0x26),param_2);
    }
    else {
      fn_82899D60();
    }
  }
  return;
}

