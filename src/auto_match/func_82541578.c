extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637EC0();
extern int fn_82637FF0();


void fn_82541578(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(unsigned int *)(iVar1 + 0x293c) = *(unsigned int *)(iVar1 + 0x293c) & 0xffffffef;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x200;
  fn_82637B30(*param_1,0);
  fn_82637EC0(*param_1);
  if (param_2 == 0x40) {
    fn_82637FF0(*param_1,0xffffffffffffffff);
    fn_82637C50(*param_1,1);
    fn_82637CE0(*param_1,0);
  }
  return;
}

