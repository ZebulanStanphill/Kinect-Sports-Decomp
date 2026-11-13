extern unsigned int *auStack_44;
extern unsigned int *auStack_50;
extern int fn_82AA75B8();


void fn_82A95BC8(__int64 param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned int auStack_50 [3];
  unsigned int auStack_44 [17];
  
  puVar4 = (unsigned int *)(param_2 + 0x18);
  puVar2 = auStack_44;
  lVar3 = 4;
  do {
    fn_82AA75B8(auStack_50,((unsigned __int64)puVar4[-3] & 0x3fffffff) * 4 + param_1,0x40001);
    puVar1 = puVar4 + 5;
    puVar4 = puVar4 + 1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 1;
    *puVar2 = (*puVar4 & auStack_50[0]) >> (*puVar1 & 0x3f);
  } while (lVar3 != 0);
  altv300_23(in_vs42,in_vs43);
  altv300_21(in_vs32,in_vs41);
  return;
}

