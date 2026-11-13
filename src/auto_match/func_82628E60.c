extern int fn_827DBD80();
extern unsigned int lbl_8326B7C8;


void fn_82628E60(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    fn_827DBD80(lbl_8326B7C8,*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x10),
                      param_2,param_3,0);
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}

