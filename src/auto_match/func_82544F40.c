extern int fn_82544918();
extern int fn_82544E80();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern unsigned int lbl_82195B90;
extern unsigned int lbl_8320A898;


void fn_82544F40(void)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar2 = lbl_8320A898;
  *(unsigned int *)(lbl_8320A898 + 0x2948) = *(unsigned int *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
  *(unsigned __int64 *)(iVar2 + 0x10) = *(unsigned __int64 *)(iVar2 + 0x10) | 0x40;
  uVar3 = fn_82637BC0(iVar2,0);
  uVar3 = fn_82637C50(uVar3,6);
  uVar3 = fn_82637CE0(uVar3,7);
  fn_82637B30(uVar3,1);
  uVar1 = lbl_82195B90;
  *(unsigned int *)(iVar2 + 0x293c) = *(unsigned int *)(iVar2 + 0x293c) | 8;
  *(unsigned __int64 *)(iVar2 + 0x10) = *(unsigned __int64 *)(iVar2 + 0x10) | 0x40200;
  *(unsigned int *)(iVar2 + 0x2904) = uVar1;
  *(unsigned __int64 *)(iVar2 + 0x10) = *(unsigned __int64 *)(iVar2 + 0x10) | 0x8000000;
  *(unsigned int *)(iVar2 + 0x293c) = *(unsigned int *)(iVar2 + 0x293c) & 0xfffffff8 | 4;
  *(unsigned __int64 *)(iVar2 + 0x10) = *(unsigned __int64 *)(iVar2 + 0x10) | 0x200;
  fn_82544918(1,iVar2);
  fn_82544E80(iVar2);
  fn_82631920(iVar2,0);
                    /* WARNING: Subroutine does not return */
  fn_82631578(iVar2,0);
}

