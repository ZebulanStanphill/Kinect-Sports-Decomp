extern unsigned int *auStack_1c;
extern int fn_82F6A3E8();
extern unsigned int uStack_20;


unsigned __int64 fn_826F5C10(char *param_1,unsigned int *param_2,char param_3)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned int uStack_20;
  unsigned int auStack_1c;
  
  cVar1 = *param_1;
  if ((cVar1 < '0') || ('9' < cVar1)) {
    if (cVar1 == '_') {
      if (param_3 == '\0') {
        if (((((param_1[1] == 'l') || (param_1[1] == 'L')) &&
             ((param_1[2] == 'e' || (param_1[2] == 'E')))) &&
            (((param_1[3] == 'v' || (param_1[3] == 'V')) &&
             ((param_1[4] == 'e' || (param_1[4] == 'E')))))) &&
           ((param_1[5] == 'l' || (param_1[5] == 'L')))) goto LAB_826f5d38;
      }
      else if (((param_1[1] == 'l') &&
               (((param_1[2] == 'e' && (param_1[3] == 'v')) && (param_1[4] == 'e')))) &&
              (param_1[5] == 'l')) {
LAB_826f5d38:
        cVar1 = param_1[6];
        if (('/' < cVar1) && (cVar1 < ':')) {
          auStack_1c = 0;
          uVar2 = fn_82F6A3E8(param_1 + 6,&auStack_1c,10);
          uStack_20 = auStack_1c;
          goto LAB_826f5c54;
        }
      }
    }
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uStack_20 = 0;
    uVar2 = fn_82F6A3E8(param_1,&uStack_20,10);
LAB_826f5c54:
    *param_2 = uStack_20;
  }
  return uVar2;
}

