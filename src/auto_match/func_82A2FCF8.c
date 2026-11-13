#define true 1
extern unsigned int *auStack_58;
extern int fn_82A2E058();
extern int fn_82A2E6A8();
extern int memcpy();
extern int memset();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64
fn_82A2FCF8(int param_1,int param_2,__int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned char auStack_58 [8];
  
  while( true ) {
    uVar4 = 0x1000 - (param_5 & 0xfff);
    if ((param_4 & 0xffffffff) < (uVar4 & 0xffffffff)) {
      uVar4 = param_4;
    }
    if ((unsigned __int64)*(unsigned int *)(param_2 + 0x1c) <= (param_5 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
      memset(param_3,0,uVar4);
    }
    uVar2 = fn_82A2E6A8(param_1,param_2,param_5,&uStack_60,auStack_58,0);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar2 = fn_82A2E058(param_1,uStack_60,&uStack_5c);
    uVar3 = uStack_5c;
    if ((int)uVar2 < 0) break;
    memcpy(param_3,(unsigned __int64)uStack_5c + (param_5 & 0xfff),uVar4);
    uVar3 = uVar3 - *(int *)(param_1 + 0x34);
    iVar1 = (((int)uVar3 >> 0xc) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 0xfff) != 0)) * 8 +
            *(int *)(param_1 + 0x30);
    *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
    param_4 = param_4 - uVar4;
    param_3 = uVar4 + param_3;
    param_5 = uVar4 + param_5;
    if (param_4 == 0) {
      return 0;
    }
  }
  return uVar2;
}

