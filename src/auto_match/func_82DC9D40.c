extern unsigned int *auStack_20;
extern int fn_82CEAA40();


unsigned char * fn_82DC9D40(unsigned char *param_1,__int64 param_2,int param_3,int param_4)

{
  char *pcVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned char uVar5;
  unsigned char auStack_20 [16];
  
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar4 = (unsigned __int64)param_3;
    uVar3 = (unsigned __int64)param_4;
    if (uVar4 < uVar3) {
      lVar2 = (uVar4 << 0x20) + uVar3;
    }
    else {
      lVar2 = (uVar3 << 0x20) + uVar4;
    }
    pcVar1 = (char *)fn_82CEAA40(auStack_20,param_2 + 0x30,lVar2);
    if (*pcVar1 != '\0') {
      uVar5 = 0;
      goto code_r0x82dc9db4;
    }
  }
  uVar5 = 1;
code_r0x82dc9db4:
  *param_1 = uVar5;
  return param_1;
}

