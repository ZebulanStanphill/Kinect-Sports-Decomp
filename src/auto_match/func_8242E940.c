extern int fn_82438BD8();
extern int fn_8243CFD0();
extern int fn_82445EE8();
extern int fn_824C5630();
extern int fn_8265CA20();
extern unsigned int lbl_821B90FC;


void fn_8242E940(int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    fn_824C5630(iVar1 + 0xd4);
    *(unsigned char ***)(iVar1 + 0x60) = &lbl_821B90FC;
    fn_8265CA20(*(unsigned int *)(iVar1 + 100));
    fn_82438BD8(iVar1 + 0x1c);
    fn_82445EE8(iVar1 + 0x10);
    fn_8243CFD0(iVar1 + 8);
    fn_8265CA20(*(unsigned int *)(iVar1 + 4));
    fn_8265CA20(iVar1);
  }
  return;
}

