extern int fn_82AB15D0();
extern int fn_82BA02A8();
extern int fn_82BA0750();
extern int fn_82BA1C20();
extern int fn_82BA20F0();
extern int fn_82BA2408();
extern int fn_82BA2600();
extern int fn_82BA2EC0();
extern int fn_82BA40E8();
extern int fn_82BA47F0();
extern int fn_82BA48F0();
extern int fn_82BA6530();
extern int fn_82BA66C0();
extern int fn_82BA6EA8();
extern int fn_82BC7030();
extern int fn_82BC9680();
extern int fn_82BCFC38();


void fn_82BA6F68(int param_1,unsigned __int64 param_2)

{
  fn_82BC9680();
  if (*(char *)(param_1 + 0x860) == '\0') {
    if ((*(int *)(param_1 + 0x6c) == 0) && (*(int *)(param_1 + 0x70) == 0)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820deba8,0xffffffff820deb50,0x214);
    }
    fn_82BA40E8(param_1);
    fn_82BA6EA8(param_1);
    fn_82BA1C20(param_1);
    fn_82BA6530(param_1);
  }
  else {
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x7ec) != '\0') {
      fn_82BA2EC0(param_1);
    }
    fn_82BA47F0(param_1);
    fn_82BA48F0(param_1);
    fn_82BA20F0(param_1);
    fn_82BA2408(param_1);
    if ((*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x858) >> 0xf & 1) != 0) {
      fn_82BA66C0(param_1);
    }
    *(unsigned int *)(param_1 + 0x828) = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x57c);
    fn_82BA2600(param_1,param_2);
  }
  fn_82BC7030(param_1);
  fn_82BA0750(param_1);
  fn_82BCFC38(param_1);
  if (*(int *)(param_1 + 0x86c) != 0) {
    fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820def58);
  }
  return;
}

