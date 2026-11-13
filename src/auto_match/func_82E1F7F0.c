extern int fn_8265C9E0();
extern int fn_82F66368();


int fn_82E1F7F0(char *param_1)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  char *pcVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  
  pcVar4 = param_1;
  if (param_1 != (char *)0x0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar2 = (int)pcVar4 - (int)param_1;
    if (iVar2 != 1) {
      uVar6 = 0;
      uVar3 = iVar2 - 2;
      if (iVar2 != 1) {
        do {
          if ((param_1[uVar6] != ' ') && (param_1[uVar6] != '\t')) break;
          uVar6 = uVar6 + 1;
        } while (uVar6 < iVar2 - 1U);
      }
      for (; (uVar3 != 0 && ((param_1[uVar3] == ' ' || (param_1[uVar3] == '\t'))));
          uVar3 = uVar3 - 1) {
      }
      if (uVar6 <= uVar3) {
        iVar7 = (uVar3 - uVar6) + 1;
        iVar5 = (uVar3 - uVar6) + 2;
        iVar2 = fn_8265C9E0(iVar5);
        fn_82F66368(iVar2,iVar5,param_1 + uVar6,iVar7);
        *(unsigned char *)(iVar2 + iVar7) = 0;
        return iVar2;
      }
    }
  }
  return 0;
}

