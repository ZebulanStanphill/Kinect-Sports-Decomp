extern int fn_82530948();
extern int fn_82531118();
extern int fn_825315E0();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83296BAC;
extern unsigned int lbl_83296BB0;
extern unsigned int lbl_83296BB4;
extern unsigned int lbl_83296BBC;
extern unsigned int uRam832700ec;


/* WARNING: Removing unreachable block (ram,0x825306c0) */
/* WARNING: Removing unreachable block (ram,0x825306c4) */

void fn_825E4C20(void)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  iVar1 = lbl_8320A898;
  uVar2 = (unsigned __int64)uRam832700ec;
  *(unsigned int *)(lbl_8320A898 + 0x2f14) = 1;
  uRam832700ec = (unsigned int)(uVar2 - 1);
  *(unsigned int *)(iVar1 + 0x2934) =
       (-(unsigned int)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffd;
  uVar3 = *(unsigned __int64 *)(iVar1 + 0x10);
  *(unsigned __int64 *)(iVar1 + 0x10) = uVar3 | 0x800;
  *(unsigned __int64 *)(iVar1 + 0x10) = uVar3 | 0x20800;
  iVar1 = lbl_8320A898;
  *(unsigned int *)(lbl_8320A898 + 0x2948) = *(unsigned int *)(lbl_8320A898 + 0x2948) & 0xfffffff8 | 2;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40;
  iVar1 = lbl_8320A898;
  if (uVar2 - 1 == 0) {
    if (lbl_83296BAC != 0) {
      lbl_83296BAC = 0;
      lbl_83296BBC = 1;
      lbl_83296BB0 = 1;
      lbl_83296BB4 = 1;
      fn_82530948(lbl_8320A898);
      fn_825315E0(iVar1);
      fn_82531118();
    }
    return;
  }
  return;
}

