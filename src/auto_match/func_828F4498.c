extern int fn_829301D0();
extern int fn_82F672D8();
extern int fn_82F68CC0();
extern int fn_82F6A4B0();


unsigned __int64 fn_828F4498(int param_1,unsigned __int64 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  unsigned char *puVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = (int)pcVar4 - (int)param_3;
  iVar2 = fn_829301D0(param_2,iVar5,1);
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 != 0) {
    iVar2 = fn_829301D0(param_2,iVar5,1);
    *(int *)(param_1 + 0x4c) = iVar2;
    if (iVar2 != 0) {
      fn_82F672D8(*(unsigned int *)(param_1 + 0x50),param_3,iVar5);
      puVar3 = (unsigned char *)fn_82F6A4B0(*(unsigned int *)(param_1 + 0x50),0x5c);
      if (puVar3 != (unsigned char *)0x0) {
        puVar3 = puVar3 + 1;
      }
      *(unsigned char *)(*(int *)(param_1 + 0x50) + iVar5 + -1) = 0;
      fn_82F68CC0(*(unsigned int *)(param_1 + 0x4c),*(unsigned int *)(param_1 + 0x50),iVar5);
      if (puVar3 == (unsigned char *)0x0) {
        return 0;
      }
      *puVar3 = 0;
      return 0;
    }
  }
  return 0xffffffff8007000e;
}

