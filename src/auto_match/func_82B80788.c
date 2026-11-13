extern int fn_82B45880();
extern int fn_82F65AC0();
extern int fn_82F66A80();
extern int fn_82F672D8();
extern int fn_82F6A3F0();
extern int fn_82F6A4B0();
extern int fn_82F6DCE0();


void fn_82B80788(unsigned __int64 param_1,char *param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  unsigned char *puVar3;
  char *pcVar4;
  char *apcStack_50 [20];
  
  iVar2 = fn_82B45880(param_1,param_4);
  fn_82F672D8(param_2,*(unsigned int *)(iVar2 + 0x18),param_3);
  param_2[param_3 + -1] = '\0';
  puVar3 = (unsigned char *)fn_82F6A4B0(param_2,0x5f);
  pcVar1 = param_2;
  if ((puVar3 != (unsigned char *)0x0) &&
     ((iVar2 = fn_82F65AC0(puVar3,0xffffffff820d3a94), iVar2 == 0 ||
      (iVar2 = fn_82F65AC0(puVar3,0xffffffff820d8938), iVar2 == 0)))) {
    *puVar3 = 0;
  }
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  do {
    pcVar1 = pcVar4;
    if (pcVar1 <= param_2) break;
    iVar2 = fn_82F66A80(pcVar1[-1]);
    pcVar4 = pcVar1 + -1;
  } while (iVar2 != 0);
  iVar2 = fn_82F6A3F0(pcVar1,apcStack_50,10);
  if ((*apcStack_50[0] == '\0') && (iVar2 + param_5 != 0)) {
    fn_82F6DCE0(pcVar1,param_2 + (param_3 - (int)pcVar1),0xffffffff821c7f34);
    param_2[param_3 + -1] = '\0';
  }
  return;
}

