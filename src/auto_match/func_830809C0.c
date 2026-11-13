extern unsigned int *auStack_430;
extern int fn_82CEDF40();
extern int fn_82CFBBA8();
extern int fn_82CFBBF0();
extern int fn_82CFBE40();
extern unsigned int stack0x00000028;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_830809C0(int param_1,unsigned __int64 param_2,char *param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned char auStack_430 [1040];
  
  iVar3 = 0;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  if (0 < *(int *)(param_1 + 0x14)) {
    lVar4 = 0;
    do {
      iVar2 = fn_82CFBBF0((unsigned __int64)*(unsigned int *)(param_1 + 0x10) + lVar4,param_2);
      if (iVar2 == 0) {
        return;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 8) != 0) {
    if (*param_3 == '#') {
      fn_82CFBBA8(auStack_430,0xffffffff82186f1c);
      uVar1 = fn_82CFBE40(auStack_430);
      fn_82CEDF40(*(unsigned int *)(param_1 + 8),auStack_430,uVar1);
      param_3 = param_3 + 1;
    }
    thunk_FUN_82f6ede8(auStack_430,0x400,param_3,&stack0x00000028);
    uVar1 = fn_82CFBE40(auStack_430);
    fn_82CEDF40(*(unsigned int *)(param_1 + 8),auStack_430,uVar1);
  }
  return;
}

