typedef unsigned char bool;
#define true 1
extern int fn_82693A98();
extern int fn_8269A1F0();
extern int fn_826A18A8();
extern int fn_826C0330();


bool fn_8270F9D8(__int64 param_1,unsigned int *param_2,unsigned __int64 param_3,char *param_4)

{
  char cVar2;
  unsigned __int64 uVar1;
  bool bVar3;
  
  cVar2 = fn_826A18A8((unsigned __int64)*param_2 + 0x250,param_3,-(6 < *(unsigned char *)(param_2 + 1)) & 1);
  if (cVar2 == '\0') {
    cVar2 = fn_826C0330(param_1,param_2,param_3,param_4);
    bVar3 = cVar2 != '\0';
  }
  else {
    cVar2 = fn_826C0330(param_1,param_2,param_3,param_4);
    if ((cVar2 == '\0') || (*param_4 == '\n')) {
      uVar1 = fn_82693A98(param_1 + 0x20);
      fn_8269A1F0(param_4,uVar1);
    }
    bVar3 = true;
  }
  return bVar3;
}

