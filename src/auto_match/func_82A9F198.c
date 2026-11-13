extern int fn_82A9C190();
extern int fn_82A9EE50();
extern int fn_82F65AC0();


void fn_82A9F198(int param_1,char *param_2,unsigned __int64 param_3)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  char *pcVar6;
  char *pcVar7;
  unsigned int uVar8;
  
  if (*(int *)(param_1 + 0x94) == 2) {
    pcVar6 = *(char **)(param_1 + 0x80);
    pcVar7 = param_2;
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if ((cVar1 == cVar2) &&
       ((unsigned __int64)*(unsigned int *)(*(char **)(param_1 + 0x80) + 0x100) == (param_3 & 0xffffffff))) {
      return;
    }
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar4 = fn_82F65AC0(*(unsigned int *)(param_1 + 0x84),0xffffffff820d2b50);
    uVar5 = param_3;
    pcVar6 = param_2;
    if (iVar4 == 0) {
      uVar5 = 0;
      pcVar6 = (char *)0x0;
    }
    fn_82A9C190(param_1,pcVar6,uVar5);
  }
  if (*(int *)(param_1 + 0x94) != 1) {
    uVar3 = *(unsigned int *)(param_1 + 0xa0) & 0xffff;
    if (0xfffd < uVar3) {
      *(unsigned int *)(param_1 + 0x90) = 0x80004005;
    }
    uVar8 = *(unsigned short *)(param_1 + 0x9c) + uVar3;
    if (*(unsigned short *)(param_1 + 0x9c) == 0) {
      uVar8 = uVar3 + 1;
    }
    *(unsigned short *)(param_1 + 0xa2) = 0;
    *(unsigned int *)(param_1 + 0xa0) = uVar8 & 0xffff | *(unsigned int *)(param_1 + 0xa0);
  }
  *(unsigned short *)(param_1 + 0x9c) = 0;
  *(unsigned short *)(param_1 + 0x9e) = 0;
  *(unsigned int *)(param_1 + 0x98) = 0;
  fn_82A9EE50(param_1,param_2,param_3);
  *(unsigned int *)(param_1 + 0x94) = 2;
  return;
}

