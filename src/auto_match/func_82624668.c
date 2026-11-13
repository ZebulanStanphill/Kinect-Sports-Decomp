extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637EC0();
extern unsigned int lbl_82195B94;
extern unsigned int lbl_831C1D0C;
extern unsigned int lbl_8327F8B8;
extern unsigned int lbl_8327F95C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82624668(unsigned __int64 param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  iVar1 = *(int *)*param_2;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffb;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
  uVar3 = fn_82637B30(iVar1,1);
  fn_82637EC0(uVar3,0);
  uVar2 = lbl_82195B94;
  *(unsigned int *)(iVar1 + 0x293c) = *(unsigned int *)(iVar1 + 0x293c) | 8;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40200;
  *(unsigned int *)(iVar1 + 0x2904) = uVar2;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x8000000;
  uVar3 = fn_82637BC0();
  uVar3 = fn_82637C50(uVar3,6);
  uVar3 = fn_82637CE0(uVar3,1);
  *(unsigned int *)(iVar1 + 0x2948) = *(unsigned int *)(iVar1 + 0x2948) & 0xfffffff8;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40;
  *(unsigned int *)(iVar1 + 0x480) = *(unsigned int *)(iVar1 + 0x480) & 0xffffe3ff | 0x800;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x80000000;
  *(unsigned int *)(iVar1 + 0x480) = *(unsigned int *)(iVar1 + 0x480) & 0xffff1fff | 0x4000;
  *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x80000000;
  fn_82631920(uVar3,lbl_8327F8B8);
  *(unsigned int *)(iVar1 + 0x2ed8) = lbl_831C1D0C;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
                    /* WARNING: Subroutine does not return */
  fn_82631578(iVar1,lbl_8327F95C);
}

