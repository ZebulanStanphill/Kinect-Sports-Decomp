extern unsigned int *auStack_10;
extern unsigned int uStack_14;


void fn_82A95A58(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  __int64 lVar5;
  unsigned char in_vs32 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned int uStack_14;
  unsigned int auStack_10 [4];
  
  puVar3 = &uStack_14;
  piVar4 = (int *)(param_2 + 8);
  lVar5 = 4;
  do {
    puVar1 = (unsigned int *)(piVar4 + 9);
    puVar2 = (unsigned int *)(piVar4 + 5);
    piVar4 = piVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = ((unsigned int)*(unsigned char *)(*piVar4 + param_1) & *puVar2) >> (*puVar1 & 0x3f);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  altv300_23(in_vs42,in_vs43);
  altv300_21(in_vs32,in_vs41);
  return;
}

