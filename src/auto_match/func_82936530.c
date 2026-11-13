extern int fn_82936448();


unsigned __int64 fn_82936530(unsigned __int64 param_1,unsigned __int64 param_2)

{
  char cVar1;
  char cVar2;
  int iVar4;
  unsigned __int64 uVar3;
  char *pcVar5;
  char *pcVar6;
  unsigned int uVar7;
  char *pcVar8;
  
  if ((param_1 & 0xffffffff) == 0) {
LAB_829365f8:
    uVar3 = 0xffffffff80004005;
  }
  else {
    iVar4 = fn_82936448(param_1,param_2,0,1);
    if (iVar4 < 0) {
      if (*(int *)param_1 != 9) goto LAB_829365f8;
      pcVar8 = (char *)((int *)param_1)[2];
      pcVar5 = "true";
      pcVar6 = pcVar8;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar7 = 1;
      }
      else {
        pcVar6 = "false";
        do {
          cVar1 = *pcVar8;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar8 = pcVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 != cVar2) goto LAB_829365f8;
        uVar7 = 0;
      }
      *(unsigned int *)param_2 = uVar7;
    }
    uVar3 = 0;
  }
  return uVar3;
}

