extern unsigned int *auStack_20;
extern int fn_8302C908();
extern int fn_8302D408();
extern int fn_8302E4C0();
extern unsigned int stack0x00000024;


unsigned __int64 fn_8302E780(int param_1,unsigned int param_2)

{
  char cVar1;
  unsigned int auStack_20 [2];
  
  cVar1 = fn_8302C908();
  if (cVar1 != '\0') {
    (**(int (***)())(**(int **)(param_1 + 0x88) + 0x1c))();
    *(unsigned char *)(param_1 + 0x11f) = *(unsigned char *)(param_1 + 0x11f) & 0xef;
    auStack_20[0] = param_2;
    fn_8302E4C0(param_1,auStack_20,&stack0x00000024);
    fn_8302D408(param_1);
  }
  return 1;
}

