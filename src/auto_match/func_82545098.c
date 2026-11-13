extern int fn_82631578();
extern int fn_82631920();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8327F8B0;
extern unsigned int uRam831c1cfc;
extern unsigned int uRam8327f958;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82545098(void)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar2 = lbl_8320A898;
  *(unsigned int *)(lbl_8320A898 + 0x2948) = *(unsigned int *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
  *(unsigned __int64 *)(iVar2 + 0x10) = *(unsigned __int64 *)(iVar2 + 0x10) | 0x40;
  iVar2 = lbl_8320A898;
  puVar1 = (unsigned int *)(lbl_8320A898 + 0x2934);
  *(unsigned int *)(lbl_8320A898 + 0x2f14) = 0;
  *(unsigned int *)(iVar2 + 0x2934) = *puVar1 & 0xfffffffd;
  uVar3 = *(unsigned __int64 *)(iVar2 + 0x10);
  *(unsigned __int64 *)(iVar2 + 0x10) = uVar3 | 0x800;
  *(unsigned __int64 *)(iVar2 + 0x10) = uVar3 | 0x20800;
  iVar2 = lbl_8320A898;
  *(unsigned int *)(lbl_8320A898 + 0x2ed8) = uRam831c1cfc;
  *(unsigned __int64 *)(iVar2 + 0x10) = *(unsigned __int64 *)(iVar2 + 0x10) | 0x80000;
  fn_82631920(lbl_8320A898,lbl_8327F8B0);
                    /* WARNING: Subroutine does not return */
  fn_82631578(lbl_8320A898,uRam8327f958);
}

