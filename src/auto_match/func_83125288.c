extern int fn_82F63DC0();
extern unsigned int lbl_83296E14;


__int64 fn_83125288(void)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  puVar1 = &lbl_83296E14;
  lVar2 = 6;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lVar2 = fn_82F63DC0(0xffffffff8313f6d8);
  return -(unsigned __int64)(lVar2 == 0);
}

