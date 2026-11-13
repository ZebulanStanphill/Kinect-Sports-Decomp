extern unsigned int *auStack_50;
extern int fn_8268D008();
extern int fn_826C98F8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


int * fn_8269B1E0(int *param_1,unsigned __int64 param_2,char param_3,int *param_4)

{
  char cVar2;
  int iVar1;
  unsigned char auStack_50 [16];
  struct { int first; int second; } stack_pair_40;

  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  cVar2 = (**(int (***)())(*param_1 + 8))();
  if (cVar2 != '\0') {
    stack_pair_40.first = param_1[0x11];
    stack_pair_40.second = param_1[0x12];
    iStack_38 = param_1[0x13];
    iStack_34 = param_1[0x14];
    iStack_30 = param_1[0x15];
    iStack_2c = param_1[0x16];
    fn_8268D008(&stack_pair_40.first,auStack_50,param_2);
    if ((*(short *)(param_1 + 0x19) == 0) &&
       (cVar2 = (**(int (***)())(*(int *)param_1[0x1a] + 0x14))
                          ((int *)param_1[0x1a],auStack_50,1,param_1), cVar2 != '\0')) {
      while ((param_1 = (int *)param_1[8], param_1 != (int *)0x0 &&
             (iVar1 = (**(int (***)())(param_1[0x1a] + 8))(param_1 + 0x1a), iVar1 == 2))) {
        if (((param_3 != '\0') || (cVar2 = fn_826C98F8(param_1), cVar2 != '\0')) ||
           ((param_1[0x71] != 0 && (cVar2 = fn_826C98F8(), cVar2 != '\0')))) {
          if (param_4 == (int *)0x0) {
            return param_1;
          }
          if (param_4 != param_1) {
            return param_1;
          }
        }
      }
    }
  }
  return (int *)0x0;
}

