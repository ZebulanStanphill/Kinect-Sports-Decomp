extern unsigned int *auStack_50;
extern unsigned int lbl_8214C010;
extern unsigned int lbl_8214C014;
extern unsigned int lbl_8214C018;
extern unsigned int lbl_8214C01C;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


unsigned __int64 fn_82E49A70(int param_1)

{
  unsigned short auStack_50;
  unsigned int uStack_48;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  uStack_48 = 5;
  stack_pair_40.first = lbl_8214C010;
  auStack_50 = 3;
  stack_pair_40.second = lbl_8214C014;
  uStack_38 = lbl_8214C018;
  uStack_34 = lbl_8214C01C;
  uStack_30 = 10;
  (**(int (***)())(**(int **)(param_1 + 0xbc) + 0x18))(*(int **)(param_1 + 0xbc),&stack_pair_40.first,&auStack_50);
  uStack_48 = 100;
  auStack_50 = 3;
  uStack_30 = 0x11;
  (**(int (***)())(**(int **)(param_1 + 0xbc) + 0x18))(*(int **)(param_1 + 0xbc),&stack_pair_40.first,&auStack_50);
  uStack_30 = 0x1c;
  (**(int (***)())(**(int **)(param_1 + 0xbc) + 0x18))(*(int **)(param_1 + 0xbc),&stack_pair_40.first,&auStack_50);
  uStack_30 = 0x19;
  (**(int (***)())(**(int **)(param_1 + 0xbc) + 0x18))(*(int **)(param_1 + 0xbc),&stack_pair_40.first,&auStack_50);
  return 0;
}

