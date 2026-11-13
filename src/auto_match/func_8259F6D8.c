extern int fn_8262FE50();
extern int fn_82637B30();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263CBB0();
extern int fn_82F6A544();
extern unsigned int lbl_8326B2D8;


void fn_8259F6D8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  fn_82F6A544();
  iVar1 = (int)param_2;
  if (*(int *)(iVar1 + 0x3148) != 0) {
    fn_8262FE50(*(int *)(iVar1 + 0x3148));
  }
  if (*(int *)(iVar1 + 0x3158) != 0) {
    fn_8262FE50(*(int *)(iVar1 + 0x3158));
  }
  fn_8263A1B8(param_2,0,lbl_8326B2D8);
  fn_8263A508(param_2,0);
  *(unsigned int *)(iVar1 + 0x2f14) = 0;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffd;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x20800;
  fn_82637B30(param_2,0);
  *(unsigned int *)(iVar1 + 0x293c) = *(unsigned int *)(iVar1 + 0x293c) & 0xfffffff7;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40200;
  *(unsigned int *)(iVar1 + 0x2948) = *(unsigned int *)(iVar1 + 0x2948) & 0xfffffff8;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40;
  *(unsigned int *)(iVar1 + 0x29c0) = *(unsigned int *)(iVar1 + 0x29c0) & 0xfffffffe;
  *(unsigned __int64 *)(iVar1 + 0x20) = *(unsigned __int64 *)(iVar1 + 0x20) | 0x800000000;
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0();
}

