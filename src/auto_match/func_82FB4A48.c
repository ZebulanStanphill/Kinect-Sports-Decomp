#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _iStack_30 ((*(unsigned __int64*)&iStack_30))
extern int fn_82FA8948();
extern int fn_82FA9208();
extern int fn_82FB4990();
extern unsigned int iStack_30;
extern unsigned int lbl_8216CC20;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


void fn_82FB4A48(int param_1,int param_2,char param_3)

{
  int iVar1;
  struct { int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  
  if (param_3 != '\0') {
    if (*(char *)(param_1 + 0x44) == '\0') {
      iVar1 = -(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x34));
      if ((param_2 != 0) && (*(int *)(param_2 + 0x48) <= iVar1)) {
        iVar1 = *(int *)(param_2 + 0x48);
      }
      uStack_28 = 0;
      _iStack_30 = CONCAT44((int)((double)(__int64)iVar1 * lbl_8216CC20),
                            *(unsigned int *)(param_1 + 0x3c));
      fn_82FA8948(*(unsigned int *)(param_1 + 0x40),&stack_pair_30.first,0);
    }
    (**(int (***)())(**(int **)(param_1 + 0x40) + 0x2c))(*(int **)(param_1 + 0x40),param_1);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  *(unsigned char *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x30) & 0x7fffffff;
  if (iVar1 != 0) {
    (**(int (***)())(*(int *)(iVar1 + 4) + 4))(iVar1 + 4,0);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  *(unsigned int *)(param_1 + 0x1c) = 0;
  if (iVar1 != 0) {
    fn_82FA9208();
  }
  fn_82FB4990(param_1);
  return;
}

