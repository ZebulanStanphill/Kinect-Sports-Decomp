#define true 1
extern int fn_82D2C0B8();
extern int fn_82D2CAF8();
extern int fn_82D309F0();


void fn_82D310C8(unsigned __int64 param_1,unsigned int *param_2,unsigned char *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  *param_3 = 0;
  iVar3 = 0;
  param_3[0x20] = 0;
  while( true ) {
    uVar2 = fn_82D2C0B8(param_1,param_2);
    if ((uVar2 & 0xffffffff) != 0) {
      fn_82D2CAF8(param_3 + 4,uVar2);
      *param_3 = 1;
      fn_82D309F0(param_1,param_2);
    }
    uVar1 = *(unsigned int *)((param_2[1] + 5) * 4 + *param_2);
    if ((uVar1 & 0xfffffffc) == 0) break;
    iVar3 = iVar3 + 1;
    param_2[1] = uVar1 & 3;
    *param_2 = uVar1 & 0xfffffffc;
    param_3 = param_3 + 0x20;
    if (1 < iVar3) {
      return;
    }
  }
  return;
}

