extern int fn_82639030();
extern int fn_8263A120();
extern int fn_82640A98();
extern int fn_82640F10();
extern int fn_828116B8();


void fn_82852F60(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  iVar1 = fn_828116B8(param_3,*(unsigned int *)(param_2 + 0x14));
  if (iVar1 != 0) {
    fn_82639030(*(unsigned int *)(param_1 + 4),*(int *)(param_1 + 0x11c) == 0);
    fn_8263A120(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_2 + 0xc));
    if ((1 << (*(unsigned int *)(param_1 + 0xfc) & 0x3f) & *(unsigned int *)(param_2 + 0x10)) == 0) {
      fn_82640A98(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_2 + 4),0,0,
                        *(unsigned int *)(param_2 + 8));
    }
    else {
      fn_82640F10();
    }
  }
  return;
}

