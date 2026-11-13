extern unsigned int *auStack_60;
extern int fn_8266D440();
extern int fn_8266D840();
extern int fn_8266D8A8();
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_8266DBB8(__int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                  __int64 param_5)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned char auStack_60 [96];
  
  iVar4 = (int)(param_4 & 0x7fffffff) * 2;
  iVar1 = (int)param_5;
  if (iVar4 <= iVar1) {
    lVar3 = param_1;
    do {
      uStack_70 = *(unsigned int *)(param_3 + 0x10);
      lVar2 = param_4 * 0xc + lVar3;
      uStack_80 = 0;
      uStack_7c = 0;
      param_1 = param_4 * 0xc + lVar2;
      uStack_78 = 0;
      uStack_74 = 0;
      iVar1 = fn_8266D8A8(auStack_60,lVar3,lVar2,lVar2,param_1,&uStack_80);
      *(unsigned int *)(param_3 + 0x10) = *(unsigned int *)(iVar1 + 0x10);
      fn_8266D440(auStack_60);
      param_5 = param_5 + (param_4 & 0x7fffffff) * -2;
      iVar1 = (int)param_5;
      lVar3 = param_1;
    } while (iVar4 <= iVar1);
  }
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  if ((int)param_4 < iVar1) {
    uStack_70 = *(unsigned int *)(param_3 + 0x10);
    lVar3 = param_4 * 0xc + param_1;
    fn_8266D8A8(auStack_60,param_1,lVar3,lVar3,param_2,&uStack_80);
  }
  else {
    uStack_70 = *(unsigned int *)(param_3 + 0x10);
    fn_8266D840(auStack_60,param_1,param_2,&uStack_80);
  }
  fn_8266D440(auStack_60);
  fn_8266D440(param_3);
  return;
}

