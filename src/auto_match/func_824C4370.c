extern unsigned int *auStack_40;
extern int fn_824C04E0();
extern int fn_8251CF80();
extern int fn_82520158();
extern int fn_8256BF18();
extern unsigned int lbl_832766F7;
extern unsigned int uRam832766f1;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_824C4370(int param_1)

{
  int iVar1;
  unsigned int auStack_40;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  
  uRam832766f1 = 0;
  if (lbl_832766F7 != '\0') {
    fn_82520158(0xffffffff821bd350,&auStack_40,0);
    iVar1 = fn_8256BF18();
    *(unsigned int *)(iVar1 + 0x68) = auStack_40;
  }
  fn_824C04E0(*(unsigned int *)(param_1 + 4),1);
  stack_pair_30.first = 0;
  stack_pair_30.second = 0;
  uStack_28 = 0;
  fn_8251CF80(param_1 + 8,0,&stack_pair_30.first);
  return;
}

