extern int fn_82275128();
extern int fn_82F4DA20();
extern int fn_82F4EBC0();
extern int fn_82F4ECF8();


unsigned int fn_822750C8(void)

{
  int iVar2;
  unsigned int uVar1;
  int iVar3;
  
  iVar2 = fn_82275128();
  uVar1 = fn_82F4EBC0(*(int *)(iVar2 + 8) & 0xff);
  iVar2 = fn_82F4DA20(2);
  iVar3 = fn_82F4ECF8(uVar1);
  return *(unsigned int *)(iVar3 * 0x1c0 + iVar2 + 0x34);
}

