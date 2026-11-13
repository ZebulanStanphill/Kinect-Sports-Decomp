void fn_82A96960(int param_1)

{
  int *piVar1;
  __int64 lVar2;
  unsigned char in_vs32 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  int aiStack_10 [4];
  
  piVar1 = aiStack_10;
  lVar2 = 4;
  do {
    *piVar1 = -(unsigned int)(*(int *)((param_1 - (int)aiStack_10) + (int)piVar1) == 3);
    piVar1 = piVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  altv300_23(in_vs42,in_vs43);
  altv300_21(in_vs32,in_vs41);
  return;
}

