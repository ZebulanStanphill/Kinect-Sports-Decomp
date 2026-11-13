typedef unsigned char bool;
extern int fn_82522DF8();
extern int fn_82526C70();


void fn_8261C1B8(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  unsigned int uVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar4 = fn_82522DF8(0x324);
  *param_1 = uVar4;
  *(int *)(uVar4 + 0x300) = (int)param_2;
  pcVar5 = (char *)(param_3 + -1);
  *(unsigned int *)(*param_1 + 0x308) = 0;
  pcVar3 = (char *)*param_1;
  pcVar6 = pcVar3;
  do {
    bVar1 = pcVar6 == pcVar3 + 0x100;
    if (pcVar3 + 0x100 <= pcVar6) goto LAB_8261c218;
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar5;
    *pcVar6 = cVar2;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  bVar1 = pcVar6 == pcVar3 + 0x100;
LAB_8261c218:
  if (bVar1) {
    pcVar6[-1] = '\0';
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82526C70((unsigned __int64)*param_1 + 0x100,0x100,0xffffffff821cad4c,param_3);
  }
  else {
    fn_82526C70((unsigned __int64)*param_1 + 0x100,0x100,0xffffffff821cad44,param_2 + 0x138,param_3);
  }
  *(unsigned char *)(*param_1 + 0x200) = 0;
  return;
}

