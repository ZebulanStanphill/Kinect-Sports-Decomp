extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_82672C20();


void fn_8227D9B0(int param_1)

{
  if ((*(int *)(param_1 + 0x34) == 0) || (*(int *)(param_1 + 0x38) != 0)) {
    *(unsigned int *)(param_1 + 0x34) = 1;
    *(unsigned int *)(param_1 + 0x38) = 0;
    fn_8266F640(*(unsigned int *)(param_1 + 0x3c),0);
    fn_8266F628(*(unsigned int *)(param_1 + 0x3c),0);
    fn_82672C20(*(unsigned int *)(param_1 + 0x3c),"_root.mainCtrl.show",0,0);
  }
  return;
}

