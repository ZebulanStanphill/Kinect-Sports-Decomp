extern int fn_82F63DC0();


__int64 fn_831397B8(void)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  lVar2 = 0x18;
  puVar1 = (unsigned int *)0x8326442c;
  do {
    puVar1 = puVar1 + 3;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lVar2 = fn_82F63DC0(0xffffffff83141d88);
  return -(unsigned __int64)(lVar2 == 0);
}

