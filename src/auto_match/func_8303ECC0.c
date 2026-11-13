extern int fn_83009E78();
extern int fn_8302BBA8();
extern int fn_83032738();
extern unsigned int iStack_3c;
extern unsigned int uStack_2b;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_8303ECC0(int param_1,unsigned int param_2,unsigned int param_3)

{
  int *piVar1;
  int *piVar2;
  struct { unsigned int first; int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned char uStack_2c;
  unsigned char uStack_2b;
  
  piVar1 = (int *)fn_83009E78();
  if (piVar1 != (int *)0x0) {
    uStack_2b = *(unsigned char *)(param_1 + 0x28);
    stack_pair_40.second = param_1 + 0x1c;
    uStack_30 = *(unsigned int *)(param_1 + 0x14) >> 3 & 0x1f;
    uStack_2c = 0;
    stack_pair_40.first = param_2;
    uStack_38 = param_3;
    uStack_34 = fn_8302BBA8(param_1);
    (**(int (***)())(*piVar1 + 0x20))(piVar1,&stack_pair_40.first);
    piVar2 = (int *)fn_83032738();
    if (piVar2 != (int *)0x0) {
      (**(int (***)())(*piVar2 + 0x20))(piVar2,&stack_pair_40.first);
      (**(int (***)())(*piVar2 + 8))(piVar2);
    }
    (**(int (***)())(*piVar1 + 8))(piVar1);
  }
  return;
}

