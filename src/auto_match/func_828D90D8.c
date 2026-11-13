extern int fn_82883E60();
extern int fn_828B0528();
extern int fn_828B1468();
extern int fn_828B14C0();


void fn_828D90D8(int param_1)

{
  int iVar1;
  unsigned char cVar2;
  
  cVar2 = fn_828B0528(*(unsigned int *)(param_1 + 0x14));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x8c);
    if (*(char *)(iVar1 + 0x128) != '\0') {
      return;
    }
    if (*(char *)(iVar1 + 0x129) != '\0') {
      fn_828B14C0(param_1,iVar1 + 0x14,iVar1 + 0x40);
      fn_82883E60(iVar1 + 0xd0,iVar1 + 0x14);
      fn_828B1468(param_1,6);
      return;
    }
  }
  fn_828B1468(param_1,7);
  return;
}

