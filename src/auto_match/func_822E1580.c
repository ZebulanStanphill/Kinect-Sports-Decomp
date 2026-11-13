extern int fn_82230360();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


void fn_822E1580(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  unsigned __int64 uStack_30;
  
  fn_8255FD70(&uStack_30,*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x118) + 0x24),
                    param_2);
  iVar4 = (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar1 = (int)((float)(__int64)((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) - (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) >> 2) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
  pcVar3 = *(char **)(iVar1 * 4 + (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF));
  pcVar5 = pcVar3;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  uStack_30 = (__int64)iVar1;
  fn_82230360(param_1 + 0x2c,pcVar3,pcVar5 + (-1 - (int)pcVar3));
  if (iVar4 != 0) {
    fn_8265CA20(iVar4);
  }
  return;
}

