extern unsigned int *auStack_3c;
extern int fn_82817B08();
extern int fn_82817B50();
extern int fn_82817BC8();
extern int fn_82817C98();
extern unsigned int uStack_40;


int
fn_828008C0(int param_1,int param_2,unsigned int param_3,unsigned int *param_4,unsigned __int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  int uVar3;
  unsigned int uStack_40;
  unsigned int auStack_3c;
  
  iVar1 = (param_2 + 8) * 4;
  uVar2 = fn_82817B08(*(unsigned int *)(*(int *)(param_1 + 4) + iVar1));
  if (uVar2 == 0) {
    return 0;
  }
  if (param_3 >= uVar2) {
    return 0;
  }
  {
    uStack_40 = 0;
    fn_82817B50(*(unsigned int *)(*(int *)(param_1 + 4) + iVar1),param_3,&uStack_40);
    fn_82817BC8(uStack_40,&auStack_3c);
    *param_4 = auStack_3c;
    fn_82817C98(uStack_40,param_5);
    return 1;
  }
}

