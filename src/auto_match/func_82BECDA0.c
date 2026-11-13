extern int fn_82BE8D28();
extern int fn_82BE8D50();


void fn_82BECDA0(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    fn_82BE8D50(*(unsigned int *)(param_1 + 0xc));
  }
  *(int *)(param_1 + 0xc) = (int)param_2;
  if ((param_2 & 0xffffffff) != 0) {
    fn_82BE8D28(param_2);
  }
  *(unsigned int *)(param_1 + 0x18) = param_4;
  *(unsigned __int64 *)(param_1 + 0x10) = param_3;
  return;
}

