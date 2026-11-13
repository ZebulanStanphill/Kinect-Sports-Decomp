#define true 1
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE6460();
extern int fn_82F6EDE8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


void fn_82CFC788(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  int iVar3;
  __int64 lVar2;
  unsigned int uVar4;
  unsigned int uVar5;
  __int64 lVar6;
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
  if ((param_1[2] & 0x3fffffff) < 0x3f) {
    iVar3 = fn_82CE5410();
    if ((param_1[2] & 0x3fffffff) < 0x100) {
      uVar5 = (param_1[2] & 0x3fffffff) << 1;
      if (uVar5 < 0x101) {
        uVar5 = 0x100;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_1,uVar5,1);
    }
  }
  do {
    while( true ) {
      uVar5 = param_1[2];
      uVar1 = (unsigned __int64)uVar5 & 0x3fffffff;
      lVar2 = fn_82F6EDE8(*param_1,uVar1,param_2,&stack0x00000020);
      iVar3 = (int)lVar2;
      if (iVar3 < 0) break;
      if (iVar3 < (int)uVar1) {
        param_1[1] = iVar3 + 1;
        iVar3 = fn_82CE5410();
        if ((int)param_1[1] < (int)(param_1[2] & 0x3fffffff)) {
          fn_82CE6460(*(unsigned int *)(iVar3 + 0x10),param_1,1,0);
        }
        return;
      }
      lVar2 = lVar2 + 1;
      iVar3 = fn_82CE5410();
      uVar4 = *(unsigned int *)(iVar3 + 0x10);
      if ((int)(param_1[2] & 0x3fffffff) < (int)lVar2) {
        lVar6 = ((unsigned __int64)(unsigned int)param_1[2] & 0x3fffffff) << 1;
        if ((int)lVar6 <= (int)lVar2) {
          lVar6 = lVar2;
        }
LAB_82cfc860:
        fn_82CE6310(uVar4,param_1,lVar6,1);
      }
LAB_82cfc870:
      param_1[1] = (int)lVar2;
    }
    lVar2 = ((unsigned __int64)uVar5 & 0x3fffffff) << 1;
    if ((unsigned int)lVar2 < 0x100) {
      lVar2 = 0xff;
    }
    lVar2 = lVar2 + 1;
    iVar3 = fn_82CE5410();
    uVar4 = *(unsigned int *)(iVar3 + 0x10);
    iVar3 = (int)lVar2;
    if (iVar3 <= (int)(param_1[2] & 0x3fffffff)) goto LAB_82cfc870;
    lVar6 = ((unsigned __int64)(unsigned int)param_1[2] & 0x3fffffff) << 1;
    if (iVar3 < (int)lVar6) goto LAB_82cfc860;
    fn_82CE6310(uVar4,param_1,lVar2,1);
    param_1[1] = iVar3;
  } while( true );
}

