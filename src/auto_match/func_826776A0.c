extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637D70();
extern int fn_82637DE0();
extern int fn_82637E50();
extern int fn_82637EC0();


void fn_826776A0(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  param_2 = -(unsigned int)(param_2 < 0xf) & param_2;
  if ((iVar1 != 0) && (*(unsigned int *)(param_1 + 0x20) != param_2)) {
    if ((*(unsigned int *)(param_1 + 0x14) & 2) == 0) {
      fn_82637EC0(iVar1,1);
      fn_82637D70(*(unsigned int *)(param_1 + 0xd8),0);
      fn_82637DE0(*(unsigned int *)(param_1 + 0xd8),1);
      fn_82637E50(*(unsigned int *)(param_1 + 0xd8),7);
      iVar2 = param_2 * 0xc;
      fn_82637BC0(*(unsigned int *)(param_1 + 0xd8),*(unsigned int *)(iVar2 + -0x7ceab278));
      fn_82637C50(*(unsigned int *)(param_1 + 0xd8),*(unsigned int *)(iVar2 + -0x7ceab274));
      iVar1 = -0x7ceab270;
    }
    else {
      fn_82637EC0(iVar1,1);
      iVar2 = param_2 * 0x18;
      fn_82637D70(*(unsigned int *)(param_1 + 0xd8),*(unsigned int *)(iVar2 + -0x7ceab1bc));
      fn_82637DE0(*(unsigned int *)(param_1 + 0xd8),*(unsigned int *)(iVar2 + -0x7ceab1b0));
      fn_82637E50(*(unsigned int *)(param_1 + 0xd8),*(unsigned int *)(iVar2 + -0x7ceab1ac));
      fn_82637BC0(*(unsigned int *)(param_1 + 0xd8),*(unsigned int *)(iVar2 + -0x7ceab1c0));
      fn_82637C50(*(unsigned int *)(param_1 + 0xd8),*(unsigned int *)(iVar2 + -0x7ceab1b8));
      iVar1 = -0x7ceab1b4;
    }
    fn_82637CE0(*(unsigned int *)(param_1 + 0xd8),*(unsigned int *)(iVar2 + iVar1));
    *(unsigned int *)(param_1 + 0x20) = param_2;
  }
  return;
}

