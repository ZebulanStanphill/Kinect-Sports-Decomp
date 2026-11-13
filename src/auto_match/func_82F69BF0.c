extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F6D460();


unsigned __int64 fn_82F69BF0(char *param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  
  if (param_1 != (char *)0x0) {
    uVar2 = fn_82F6D460(param_1,param_2);
    if ((uVar2 & 0xffffffff) < (param_2 & 0xffffffff)) {
      cVar1 = *param_1;
      while (cVar1 != '\0') {
        cVar1 = *param_1;
        if (('@' < cVar1) && (cVar1 < '[')) {
          *param_1 = cVar1 + ' ';
        }
        param_1 = param_1 + 1;
        cVar1 = *param_1;
      }
      return 0;
    }
    *param_1 = '\0';
  }
  puVar3 = (unsigned int *)fn_82F68240();
  *puVar3 = 0x16;
  fn_82F63BA0();
  return 0x16;
}

