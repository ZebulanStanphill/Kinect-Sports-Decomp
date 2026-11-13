typedef unsigned char bool;
extern int fn_82484EE0();
extern int fn_82485850();
extern unsigned int ltcg_pool_0_0f;


void fn_824794A0(int param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  fn_82484EE0((double)ltcg_pool_0_0f,*(unsigned int *)(param_1 + 0x24));
  if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
    iVar3 = *(int *)(param_1 + 0x24);
    pcVar4 = (char *)(param_5 + -1);
    pcVar5 = (char *)(iVar3 + 0x34);
    do {
      if ((char *)(iVar3 + 0x134U) <= pcVar5) break;
      pcVar4 = pcVar4 + 1;
      cVar2 = *pcVar4;
      *pcVar5 = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 == (char *)(iVar3 + 0x134)) {
      pcVar5[-1] = '\0';
    }
    iVar3 = *(int *)(param_1 + 0x24);
    pcVar5 = (char *)(iVar3 + 0x134);
    pcVar4 = "";
    do {
      bVar1 = pcVar5 == (char *)(iVar3 + 0x234U);
      if ((char *)(iVar3 + 0x234U) <= pcVar5) goto LAB_82479550;
      pcVar4 = pcVar4 + 1;
      cVar2 = *pcVar4;
      *pcVar5 = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    bVar1 = pcVar5 == (char *)(iVar3 + 0x234);
LAB_82479550:
    if (bVar1) {
      pcVar5[-1] = '\0';
    }
    fn_82485850(*(unsigned int *)(param_1 + 0x24),0xffffffff82196582);
    iVar3 = *(int *)(param_1 + 0x24);
    pcVar4 = "";
    pcVar5 = (char *)(iVar3 + 0x334);
    do {
      bVar1 = pcVar5 == (char *)(iVar3 + 0x434U);
      if ((char *)(iVar3 + 0x434U) <= pcVar5) goto LAB_82479594;
      pcVar4 = pcVar4 + 1;
      cVar2 = *pcVar4;
      *pcVar5 = cVar2;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    bVar1 = pcVar5 == (char *)(iVar3 + 0x434);
LAB_82479594:
    if (bVar1) {
      pcVar5[-1] = '\0';
    }
    *(unsigned int *)(param_1 + 0x2c) = 1;
  }
  return;
}

