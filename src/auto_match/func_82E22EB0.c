extern int fn_82A1F2F8();
extern int fn_82E23588();
extern int fn_82E23728();


int fn_82E22EB0(int param_1,unsigned int param_2,unsigned int param_3,int param_4,
                      unsigned int param_5)

{
  int lVar1;
  unsigned int uVar2;
  
  lVar1 = fn_82E23728(param_1 + 0x30,param_1 + 0x20);
  if (lVar1 == 0) {
    *(unsigned int *)(param_1 + 0x148) = param_2;
    *(unsigned int *)(param_1 + 0x14c) = param_3;
    lVar1 = fn_82E23588(param_1 + 0x168,param_5,0);
    if (lVar1 == 0) {
      uVar2 = fn_82A1F2F8();
      *(unsigned int *)(param_1 + 0x154) = uVar2;
      *(unsigned int *)(param_1 + 0x180) = 1;
      *(unsigned int *)(param_1 + 0x178) = 1;
      *(int *)(param_1 + 0x158) = param_4 * 1000;
      *(unsigned int *)(param_1 + 0x17c) = 0;
    }
  }
  return lVar1;
}

