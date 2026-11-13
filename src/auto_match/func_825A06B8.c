extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern int fn_82544718();
extern int fn_8262FE50();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_8263A1B8();
extern int fn_8263A508();


void fn_825A06B8(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int in_r7;
  unsigned char auStack_a8 [8];
  unsigned char auStack_a0 [160];
  
  fn_82544718(auStack_a0,0xa0,0x5a,0x18280186,0,auStack_a8);
  if (*(int *)(in_r7 + 0x3148) != 0) {
    fn_8262FE50(*(int *)(in_r7 + 0x3148));
  }
  if (*(int *)(in_r7 + 0x3158) != 0) {
    fn_8262FE50(*(int *)(in_r7 + 0x3158));
  }
  iVar1 = *(int *)(param_1 + 0x1ac);
  fn_8263A1B8(in_r7,0,*(unsigned int *)(iVar1 + 0x40));
  fn_8263A508(in_r7,0);
  uVar2 = fn_82637B30(in_r7,0);
  *(unsigned int *)(in_r7 + 0x2ed8) = 0;
  *(unsigned __int64 *)(in_r7 + 0x10) = *(unsigned __int64 *)(in_r7 + 0x10) | 0x80000;
  fn_82631920(uVar2,*(unsigned int *)(iVar1 + 0x44));
                    /* WARNING: Subroutine does not return */
  fn_82631578(in_r7,*(unsigned int *)(iVar1 + 0x48));
}

