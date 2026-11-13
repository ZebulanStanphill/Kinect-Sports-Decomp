#define true 1
extern unsigned int *auStack_48;
extern int fn_82A2BAF0();
extern int fn_82A2E6A8();
extern int fn_82A2FA90();
extern int fn_82A2FCF8();
extern int memcpy();
extern unsigned int iStack_4c;
extern unsigned int uStack_50;


unsigned __int64
fn_82A2FDE0(int param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned int uStack_50;
  int iStack_4c;
  unsigned char auStack_48 [8];
  
  if ((param_5 & 0xfff) != 0) {
    lVar6 = 0x1000 - (param_5 & 0xfff);
    uVar3 = fn_82A2FCF8();
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    param_3 = lVar6 + param_3;
    param_4 = param_4 - lVar6;
    param_5 = lVar6 + param_5;
  }
  while( true ) {
    uVar3 = fn_82A2E6A8(param_1,param_2,param_5,&uStack_50,auStack_48,0);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    iVar4 = fn_82A2BAF0(param_1,uStack_50,0,&iStack_4c,auStack_48);
    iVar1 = iStack_4c;
    if (iVar4 == 0) break;
    memcpy(param_3,iStack_4c,0x1000);
    param_4 = param_4 - 0x1000;
    uVar5 = iVar1 - *(int *)(param_1 + 0x34);
    param_3 = param_3 + 0x1000;
    param_5 = param_5 + 0x1000;
    iVar1 = (((int)uVar5 >> 0xc) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 0xfff) != 0)) * 8 +
            *(int *)(param_1 + 0x30);
    *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
    if ((param_4 & 0xffffffff) < 0x1000) {
LAB_82a2fef8:
      if (((param_4 & 0xffffffff) == 0) ||
         (uVar3 = fn_82A2FCF8(param_1,param_2,param_3,param_4,param_5), -1 < (int)uVar3)) {
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  if (0xfff < (param_4 & 0xffffffff)) {
    uVar2 = param_4 & 0xfffff000;
    uVar3 = fn_82A2FA90(param_1,param_2,param_3,uVar2,param_5);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    param_3 = uVar2 + param_3;
    param_4 = param_4 - uVar2;
    param_5 = uVar2 + param_5;
  }
  goto LAB_82a2fef8;
}

