extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();


unsigned __int64 fn_82968EF8(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  __int64 lVar4;
  
  lVar4 = 0;
  pcVar2 = param_2;
  if (param_2 != (char *)0x0) {
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)param_2;
    lVar4 = fn_8265C940(iVar3,0x24810000);
    if (lVar4 == 0) {
      return 0xffffffff8007000e;
    }
    fn_82F68CC0(lVar4,param_2,iVar3);
  }
  fn_8265C990(*(unsigned int *)(param_1 + 0xd0),0x24810000);
  *(int *)(param_1 + 0xd0) = (int)lVar4;
  return 0;
}

