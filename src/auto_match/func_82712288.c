extern int fn_826944C8();
extern int fn_82694548();
extern int fn_82694D70();
extern unsigned int lbl_83156338;


void fn_82712288(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar5;
  __int64 lVar4;
  __int64 lVar6;
  unsigned char **ppuVar7;
  
  ppuVar7 = &lbl_83156338;
  lVar6 = 0x93;
  do {
    pcVar2 = *ppuVar7;
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar3 = fn_82694548(param_1 + 0x24c,pcVar2,pcVar5 + (-1 - (int)pcVar2),0xffffffff80000000)
    ;
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    *(int *)(param_1 + 0x7cea9cc8 + (int)ppuVar7) = iVar3;
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    fn_82694D70();
    lVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 8) - 1;
    *(int *)(iVar3 + 8) = (int)lVar4;
    if (lVar4 == 0) {
      fn_826944C8(iVar3);
    }
    lVar6 = lVar6 + -1;
    ppuVar7 = ppuVar7 + 1;
  } while (lVar6 != 0);
  return;
}

