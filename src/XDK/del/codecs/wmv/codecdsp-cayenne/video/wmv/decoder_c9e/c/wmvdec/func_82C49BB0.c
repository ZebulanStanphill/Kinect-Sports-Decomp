extern int fn_82C44C58();
extern int fn_82C486C8();
extern int fn_82C4EDE8();
extern int memset();


unsigned __int64 fn_82C49BB0(int param_1)

{
  int iVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0xfffffffffffffffd;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2e0);
    if (*(int *)(iVar1 + 0x10) == 0) {
      fn_82C486C8(iVar1);
      fn_82C4EDE8(iVar1);
      puVar2 = *(unsigned __int64 **)(iVar1 + 0x6070);
      fn_82C44C58(puVar2);
      *puVar2 = 0;
                    /* WARNING: Subroutine does not return */
      memset(iVar1,0,0xb330);
    }
    uVar3 = 0xfffffffffffffffc;
  }
  return uVar3;
}

