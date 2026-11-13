extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_8269A1F0();
extern int fn_826A18A8();
extern int fn_826A1A28();
extern int fn_826C0330();


unsigned __int64 fn_826A21E0(int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned char *param_4)

{
  int iVar2;
  char cVar3;
  unsigned __int64 uVar1;
  
  iVar2 = fn_826A1A28(param_3);
  if (iVar2 < 0) {
    cVar3 = fn_826A18A8((unsigned __int64)*param_2 + 0x250,param_3,-(6 < *(unsigned char *)(param_2 + 1)) & 1);
    if ((cVar3 == '\0') ||
       ((param_1[10] == 0 &&
        (cVar3 = (**(int (***)())(*param_1 + 0x24))(param_1,param_2,param_3,0), cVar3 != '\0')))) {
      uVar1 = fn_826C0330(param_1,param_2,param_3,param_4);
      return uVar1;
    }
    fn_8269A1F0(param_4,param_1[10]);
  }
  else if ((iVar2 < param_1[10]) && (iVar2 = *(int *)(iVar2 * 4 + param_1[9]), iVar2 != 0)) {
    fn_82695FA0(param_4,iVar2);
  }
  else {
    fn_826959C8(param_4);
    *param_4 = 0;
  }
  return 1;
}

