typedef unsigned char bool;
extern int fn_82CFBBF0();
extern int fn_82E0E658();


bool fn_82E12A08(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = fn_82E0E658();
  iVar2 = fn_82CFBBF0(*(unsigned int *)(param_1 + 0x14),uVar1);
  return iVar2 == 0;
}

