extern unsigned int *auStack_20;
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E508();
extern unsigned int lbl_8326183C;


extern int fn_82F4D7D8();

void fn_82F4E058(void)

{
  int uVar1;
  unsigned int auStack_20 [4];
  
  if (*(unsigned int *)(lbl_8326183C + 0x2b00) == 0) {
    auStack_20[0] = 0;
    uVar1 = fn_82A1E0C0(0,0,fn_82F4D7D8,0,4,auStack_20);
    *(int *)(lbl_8326183C + 0x2b00) = uVar1;
    fn_82A1E508(uVar1,3);
    fn_82A1E2C0(*(unsigned int *)(lbl_8326183C + 0x2b00));
  }
  return;
}

