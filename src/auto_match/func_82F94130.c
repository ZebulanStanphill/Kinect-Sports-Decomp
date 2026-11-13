#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82CE06D8();
extern int fn_82F8E108();
extern int fn_82F8E248();
extern int fn_82F8F000();
extern unsigned int lbl_8216C0F0;
extern unsigned int lbl_8216C0FC;


void fn_82F94130(unsigned int *param_1)

{
  int iVar1;
  unsigned int *puStack00000014;
  
  *param_1 = &lbl_8216C0FC;
  param_1[1] = &lbl_8216C0F0;
  puStack00000014 = param_1;
  if (*(char *)(param_1 + 5) != '\0') {
    iVar1 = fn_82CE06D8(param_1[4]);
    if (iVar1 == 0) {
      fn_82F8E108(puStack00000014,0,0xffffffff8216c12c);
    }
    else {
      fn_82F8E248(puStack00000014,iVar1,0xffffffff8216c14c);
    }
  }
  fn_82F8F000(ZEXT48(puStack00000014) + 0x18);
  return;
}

