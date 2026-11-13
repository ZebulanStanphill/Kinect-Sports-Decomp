extern int fn_82230360();
extern int fn_82F64020();


unsigned char * fn_828EFE38(unsigned char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  unsigned int uVar5;
  char acStack_140 [16];
  char acStack_130 [256];
  
  fn_82F64020(acStack_130,0x100,0xffffffff821c7f30);
  uVar5 = 0;
  do {
    fn_82F64020(acStack_140,8,0xffffffff82027618,*(unsigned char *)(uVar5 + param_2));
    pcVar2 = acStack_140;
    pcVar4 = acStack_130;
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  pcVar4 = acStack_130;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  fn_82230360(param_1,acStack_130,pcVar4 + (-1 - (int)acStack_130));
  return param_1;
}

