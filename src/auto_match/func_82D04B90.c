#define true 1
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE7E00();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


void fn_82D04B90(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  do {
    uVar1 = param_1[2];
    uVar2 = uVar1 & 0x3fffffff;
    uVar3 = thunk_FUN_82f6ede8(*param_1,uVar2,param_2,&stack0x00000020);
    if ((int)uVar3 < 0) {
      uVar3 = (uVar1 & 0x3fffffff) << 1;
      if (uVar3 < 0x100) {
        uVar3 = 0xff;
      }
    }
    else if ((int)uVar3 < (int)uVar2) {
      fn_82CE7E00(param_1,uVar3);
      return;
    }
    iVar6 = uVar3 + 1;
    iVar4 = fn_82CE5410();
    if ((int)(param_1[2] & 0x3fffffffU) < iVar6) {
      iVar5 = (param_1[2] & 0x3fffffffU) << 1;
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
      }
      fn_82CE6310(*(unsigned int *)(iVar4 + 0xc),param_1,iVar5,1);
    }
    param_1[1] = iVar6;
    *(unsigned char *)(*param_1 + uVar3) = 0;
  } while( true );
}

