extern int fn_828ED1A0();
extern int fn_82F691F0();


unsigned __int64 fn_828EDD40(int param_1)

{
  char cVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  cVar1 = fn_828ED1A0();
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
    puVar2 = (unsigned int *)(param_1 + 0x108);
    lVar3 = 7;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_1 + 0x94,0,0x3c);
  }
  return 0;
}

