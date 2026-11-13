extern int fn_82DF6BF0();


unsigned __int64
fn_82DF6E88(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,char *param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  if (*param_5 == '\x02') {
    pcVar3 = param_5 + 0x20;
  }
  else {
    if (*param_5 != '\x04') {
      return 1;
    }
    pcVar3 = param_5 + 0x30;
  }
  iVar1 = (unsigned int)(unsigned char)param_5[1] * 0x50 + *param_2;
  iVar2 = fn_82DF6BF0(*(unsigned int *)(iVar1 + 0x16dc),pcVar3);
  if ((iVar2 == param_1) && (param_1 != 0)) {
    (**(int (***)())(iVar1 + 0x16b4))(param_5);
    return 0;
  }
  return 1;
}

