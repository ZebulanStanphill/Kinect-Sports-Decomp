extern int fn_82639030();
extern int fn_8263A120();
extern int fn_82640A98();
extern int fn_82640F10();


void fn_82852CA0(int param_1,int param_2)

{
  fn_82639030(*(unsigned int *)(param_1 + 4),*(int *)(param_1 + 0x11c) == 0);
  fn_8263A120(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_2 + 0xc));
  if ((1 << (*(unsigned int *)(param_1 + 0xfc) & 0x3f) & *(unsigned int *)(param_2 + 0x10)) == 0) {
    fn_82640A98(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_2 + 4),0,0,
                      *(unsigned int *)(param_2 + 8));
  }
  else {
    fn_82640F10();
  }
  return;
}

