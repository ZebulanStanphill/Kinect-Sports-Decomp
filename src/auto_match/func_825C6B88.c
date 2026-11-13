extern int fn_82631578();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637D70();
extern int fn_82637DE0();
extern int fn_82637E50();
extern int fn_82637EC0();
extern int fn_82637FF0();
extern unsigned int lbl_8320A898;
extern unsigned int uRam8327f958;


void fn_825C6B88(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = lbl_8320A898;
  if (((*(int *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x18) != '\0')) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    *(unsigned int *)(lbl_8320A898 + 0x2948) = *(unsigned int *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40;
    fn_82637B30(lbl_8320A898,1);
    iVar1 = lbl_8320A898;
    uVar2 = 1;
    *(unsigned int *)(lbl_8320A898 + 0x2f14) = 1;
    *(unsigned int *)(iVar1 + 0x2934) =
         (-(unsigned int)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffd;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x20800;
    iVar1 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x2934) = *(unsigned int *)(lbl_8320A898 + 0x2934) & 0xfffffffb;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
    fn_82637BC0(lbl_8320A898,0);
    fn_82637C50(lbl_8320A898,6);
    fn_82637CE0(lbl_8320A898,7);
    fn_82637EC0(lbl_8320A898,1);
    fn_82637D70(lbl_8320A898,0);
    fn_82637DE0(lbl_8320A898,0xc);
    fn_82637E50(lbl_8320A898,7);
    fn_82637FF0(lbl_8320A898,0x50ffffff);
    iVar1 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x480) = *(unsigned int *)(lbl_8320A898 + 0x480) & 0xffffe3ff;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x80000000;
    iVar1 = lbl_8320A898;
    *(unsigned int *)(lbl_8320A898 + 0x498) =
         ((unsigned int)((uVar2 & 0xffffffff) << 0xb) | (unsigned int)((uVar2 & 0xffffffff) >> 0x15)) & 0x1c00 |
         *(unsigned int *)(lbl_8320A898 + 0x498) & 0xffffe3ff;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x40000000;
                    /* WARNING: Subroutine does not return */
    fn_82631578(lbl_8320A898,uRam8327f958);
  }
  return;
}

