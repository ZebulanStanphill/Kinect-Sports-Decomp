extern unsigned int *auStack_e0;
extern int XMemSet();
extern int fn_82F6A548();


/* WARNING: Removing unreachable block (ram,0x82335598) */
/* WARNING: Removing unreachable block (ram,0x823355a4) */
/* WARNING: Removing unreachable block (ram,0x823355b4) */
/* WARNING: Removing unreachable block (ram,0x823355ec) */
/* WARNING: Removing unreachable block (ram,0x82335668) */
/* WARNING: Removing unreachable block (ram,0x823356ac) */
/* WARNING: Removing unreachable block (ram,0x823356e4) */
/* WARNING: Removing unreachable block (ram,0x823356bc) */
/* WARNING: Removing unreachable block (ram,0x82335674) */
/* WARNING: Removing unreachable block (ram,0x82335698) */
/* WARNING: Removing unreachable block (ram,0x823356a4) */
/* WARNING: Removing unreachable block (ram,0x82335660) */

void fn_823354E0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned char auStack_e0 [224];
  
  iVar2 = fn_82F6A548();
  iVar1 = *(int *)param_2;
  if ((param_2 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(iVar1 + 0x2b20)) {
    *(unsigned int *)(iVar1 + 0x2cb0) = *(unsigned int *)(iVar1 + 0x6d0);
    *(unsigned int *)(iVar1 + 0x2cb4) = *(unsigned int *)(iVar1 + 0xae4);
    *(unsigned int *)(iVar1 + 0x2cac) = 1;
  }
  *(unsigned int *)(iVar2 + 0x210) = 0;
                    /* WARNING: Subroutine does not return */
  XMemSet(auStack_e0,0,100);
}

