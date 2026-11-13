extern int fn_82936290();
extern int fn_82F65B18();


void fn_82937420(char *param_1,unsigned char *param_2,unsigned __int64 param_3,unsigned char *param_4,
                  unsigned __int64 param_5,unsigned int *param_6,unsigned int *param_7)

{
  unsigned int uVar1;
  char *pcVar2;
  char cVar3;
  
  *param_2 = 0;
  *param_4 = 0;
  *param_6 = 0;
  *param_7 = 0;
  if (*param_1 == '.') {
    pcVar2 = param_1 + 1;
    *param_6 = 1;
    cVar3 = param_1[1];
    while (((cVar3 != '.' && (cVar3 != '[')) && (cVar3 != '\0'))) {
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar2;
    }
    if ((param_3 & 0xffffffff) < 0x80000000) {
      fn_82936290(param_2,param_3);
    }
    param_2[(int)(pcVar2 + (-1 - (int)param_1))] = 0;
  }
  else {
    if (*param_1 == '[') {
      pcVar2 = param_1 + 1;
      *param_6 = 2;
      uVar1 = fn_82F65B18(pcVar2);
      *param_7 = uVar1;
      cVar3 = param_1[1];
      while (cVar3 != ']') {
        if (cVar3 == '\0') goto LAB_8293754c;
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
      }
      pcVar2 = pcVar2 + 1;
    }
    else {
      *param_6 = 0;
      cVar3 = *param_1;
      pcVar2 = param_1;
      while (((cVar3 != '.' && (cVar3 != '[')) && (cVar3 != '\0'))) {
        pcVar2 = pcVar2 + 1;
        cVar3 = *pcVar2;
      }
    }
LAB_8293754c:
    if ((param_3 & 0xffffffff) < 0x80000000) {
      fn_82936290(param_2,param_3,param_1);
    }
    param_2[(int)pcVar2 - (int)param_1] = 0;
  }
  if ((param_5 & 0xffffffff) < 0x80000000) {
    fn_82936290(param_4,param_5,pcVar2);
  }
  return;
}

