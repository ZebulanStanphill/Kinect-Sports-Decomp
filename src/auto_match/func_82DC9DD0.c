extern unsigned int *auStack_30;
extern int fn_82DC9D40();


unsigned char * fn_82DC9DD0(unsigned char *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  unsigned char auStack_30 [1];
  
  iVar1 = *(int *)(param_2 + 0x34);
  if ((iVar1 != 0) &&
     (pcVar2 = (char *)(**(int (***)())(*(int *)(iVar1 + 8) + 4))(auStack_30,iVar1 + 8), *pcVar2 == '\0'
     )) {
    *param_1 = 0;
    return param_1;
  }
  if (*(char *)(param_3 + 0x18) == '\x01') {
    param_3 = *(char *)(param_3 + 0x10) + param_3;
  }
  else {
    param_3 = 0;
  }
  if (*(char *)(param_4 + 0x18) == '\x01') {
    param_4 = *(char *)(param_4 + 0x10) + param_4;
  }
  else {
    param_4 = 0;
  }
  fn_82DC9D40(param_1,param_2 + -8,param_3,param_4);
  return param_1;
}

