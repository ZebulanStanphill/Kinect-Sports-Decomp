extern int fn_828B0528();
extern int fn_828B1468();


void fn_828D9168(int param_1)

{
  int iVar1;
  unsigned char cVar2;
  unsigned __int64 uVar3;
  
  cVar2 = fn_828B0528(*(unsigned int *)(param_1 + 0x14));
  if (cVar2 != '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x8c);
    if (*(char *)(iVar1 + 0x128) != '\0') {
      return;
    }
    uVar3 = 6;
    if (*(char *)(iVar1 + 0x129) != '\0') goto code_r0x828d91b8;
  }
  uVar3 = 7;
code_r0x828d91b8:
  fn_828B1468(param_1,uVar3);
  return;
}

