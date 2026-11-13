#define true 1
extern unsigned int lbl_82FA6348;


void fn_82FA6380(int param_1,int (**param_2)(),unsigned __int64 param_3)

{
  unsigned int uVar1;
  
  if (param_2 == (int (**)())0x0) {
    param_2 = (int (**)())&lbl_82FA6348;
  }
  param_1 = param_1 + 0xc60;
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    uVar1 = *(unsigned int *)(param_1 + 4);
    if ((uVar1 & 0xfffffffc) == 0) break;
    (*param_2)(param_1 + 8,uVar1 & 0xfffffffc,~uVar1 & 1,param_3,0xffffffff8216cb74,0);
    param_1 = (*(unsigned int *)(param_1 + 4) & 0xfffffffc) + param_1 + 4;
  }
  return;
}

