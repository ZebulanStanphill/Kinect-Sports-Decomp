extern int fn_82230360();
extern int fn_82F6DCE0();


unsigned char * fn_828B5B28(unsigned char *param_1,unsigned short *param_2,char param_3)

{
  char cVar1;
  unsigned __int64 uVar2;
  char *pcVar3;
  char acStack_210 [512];
  
  if (*(char *)((int)param_2 + 7) == '\0') {
    if (param_3 == '\0') {
      uVar2 = 0xffffffff82024f10;
    }
    else {
      uVar2 = 0xffffffff82024f24;
    }
    fn_82F6DCE0(acStack_210,0x200,uVar2);
  }
  else {
    if (param_3 == '\0') {
      uVar2 = 0xffffffff82024fb0;
    }
    else {
      uVar2 = 0xffffffff82024fc8;
    }
    fn_82F6DCE0(acStack_210,0x200,uVar2,*param_2,param_2[1],param_2[2]);
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  pcVar3 = acStack_210;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  fn_82230360(param_1,acStack_210,pcVar3 + (-1 - (int)acStack_210));
  return param_1;
}

