typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F6EDE8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_21;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64
fn_82AA1C90(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  bool bVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  char acStack_820 [2047];
  unsigned char uStack_21;
  
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  lVar2 = fn_82F6EDE8(acStack_820,0x7ff,param_2,&stack0x00000020);
  uStack_21 = 0;
  if (lVar2 < 0) {
    return 0xffffffff80004005;
  }
  if ((int)lVar2 < 1) {
    return 0;
  }
  if (param_1[4] != 0) {
    param_1[4] = 0;
    if (((acStack_820[0] == ' ') || (acStack_820[0] == '-')) ||
       (('/' < acStack_820[0] && (acStack_820[0] < ':')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) && (uVar3 = (*(int (**)())*param_1)(param_1[1],0xffffffff821aa89c,1), (int)uVar3 < 0))
    goto LAB_82aa1d98;
  }
  uVar3 = (*(int (**)())*param_1)(param_1[1],acStack_820,lVar2);
  if (-1 < (int)uVar3) {
    return uVar3;
  }
LAB_82aa1d98:
  if (-1 < (int)param_1[2]) {
    param_1[2] = (int)uVar3;
  }
  return uVar3;
}

