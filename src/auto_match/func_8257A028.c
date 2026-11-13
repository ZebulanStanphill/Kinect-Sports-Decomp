extern int fn_82579DB0();
extern int fn_82F67FE8();
extern unsigned int ltcg_pool_0_0f;


double fn_8257A028(double param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  float afStack_20;
  
  pcVar2 = (char *)fn_82579DB0();
  pcVar4 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((int)pcVar4 - (int)pcVar2 != 1) {
      afStack_20 = ltcg_pool_0_0f;
      iVar3 = fn_82F67FE8(pcVar2,0xffffffff821c5504,&afStack_20);
      if (iVar3 == 1) {
        param_1 = (double)afStack_20;
      }
    }
  }
  return param_1;
}

