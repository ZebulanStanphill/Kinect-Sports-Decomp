extern int fn_82C9F2F0();
extern int fn_82C9F4B0();
extern int fn_82CA0CC8();
extern int fn_82CA0E40();
extern unsigned int uRam8329f138;
extern unsigned int uRam8329f13c;


void fn_82CA2398(int param_1,int param_2)

{
  uRam8329f13c = *(unsigned int *)(param_1 + 0x4fb0);
  *(int (***)())(param_1 + 0x3e30) = fn_82CA0CC8;
  *(int (***)())(param_1 + 0x3e2c) = fn_82CA0E40;
  uRam8329f138 = *(unsigned int *)(param_1 + 0x4fb4);
  if (param_2 == 0) {
    return;
  }
  *(int (***)())(param_1 + 0x3e30) = fn_82C9F2F0;
  *(int (***)())(param_1 + 0x3e2c) = fn_82C9F4B0;
  return;
}

