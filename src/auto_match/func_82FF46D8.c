extern int fn_82A1E6A0();
extern int fn_82A1E810();
extern unsigned int lbl_831BC768;


char fn_82FF46D8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  char cVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  
  iVar2 = fn_82A1E6A0(0,1,0,0);
  *(int *)(param_1 + 0xa4) = iVar2;
  cVar3 = (iVar2 == 0) + '\x01';
  if (cVar3 == '\x01') {
    fn_82A1E810(*(unsigned int *)(param_1 + 0xa4));
    uVar1 = lbl_831BC768;
    lVar5 = 0x1f;
    puVar4 = (unsigned int *)(param_1 + 4);
    *(unsigned int *)(param_1 + 0x84) = 0;
    *(unsigned int *)(param_1 + 4) = uVar1;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    cVar3 = '\x01';
  }
  return cVar3;
}

