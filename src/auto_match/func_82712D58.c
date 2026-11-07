typedef unsigned int uint;
extern void fn_82681898(int a, double b);
extern void fn_826A7398(int a);
extern uint fn_82712A28(void);
extern double lbl_8200F0A8;

void fn_82712D58(int param_1)
{
  fn_826A7398(*(int *)(param_1 + 0x18));
  fn_82681898(*(int *)(param_1 + 4), (double)fn_82712A28() * lbl_8200F0A8);
}
