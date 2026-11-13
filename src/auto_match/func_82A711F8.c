extern unsigned int lbl_8321A7C0;


unsigned __int64 fn_82A711F8(void)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  char cVar4;
  __int64 lVar5;
  
  if (lbl_8321A7C0 == 0) {
    uVar3 = 0;
    piVar2 = (int *)0x8321a3bc;
    lVar5 = 0x100;
    do {
      uVar1 = uVar3 & 0x1f;
      cVar4 = (char)uVar3;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
      *piVar2 = uVar1 + 0x20 << (((int)cVar4 >> 5) + 0xfU & 0x3f);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lbl_8321A7C0 = 1;
  }
  return 0;
}

