extern unsigned int *auStack_60;
extern int fn_82BE8F88();
extern int fn_82BF2B20();
extern int fn_82CE08B8();
extern int fn_82CE08F0();
extern int fn_82CE0908();
extern int fn_82CE0928();
extern int fn_82CE0990();
extern unsigned int stack0x00000034;
extern unsigned int stack0x0000003c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack_4c;
extern unsigned int uStack_4e;
extern unsigned int uStack_50;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned __int64
fn_82BF2BE0(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned short param_4,
             unsigned int param_5,unsigned int param_6,int param_7)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piVar3;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int auStack_60 [4];
  unsigned short uStack_50;
  unsigned short uStack_4e;
  unsigned int uStack_4c;
  
  piVar3 = (int *)(param_1 + 0x14);
  *(unsigned int *)(param_1 + 0x18) = param_3;
  *(unsigned short *)(param_1 + 0x1c) = param_4;
  uStack_50 = 2;
  if (*(int *)(param_1 + 0x14) == -1) {
    uStack00000034 = param_5;
    uStack0000003c = param_6;
    uStack_4e = param_4;
    uStack_4c = param_3;
    uVar1 = fn_82CE08B8(2,1,6);
    *piVar3 = (int)uVar1;
    if ((int)uVar1 != -1) {
      uStack_6c = 1;
      fn_82CE08F0(uVar1,0xffffffff8004667e,&uStack_6c);
      fn_82CE0908(*piVar3,0xffff,0x1001,&stack0x00000034,4);
      fn_82CE0908(*piVar3,0xffff,0x1002,&stack0x0000003c,4);
      if ((param_7 == 0) && (iVar2 = fn_82BE8F88(), iVar2 != 0)) {
        *(unsigned int *)(param_1 + 0x20) = 0;
        uStack_68 = 1;
        fn_82CE0908(*piVar3,0xffff,0x5801,&uStack_68,4);
      }
      else {
        *(unsigned int *)(param_1 + 0x20) = 1;
      }
      uStack_64 = 0;
      auStack_60[0] = 0;
      uStack_70 = 4;
      fn_82CE0928(*piVar3,0xffff,0x1001,&uStack_64,&uStack_70);
      fn_82CE0928(*piVar3,0xffff,0x1002,auStack_60,&uStack_70);
      iVar2 = fn_82CE0990(*piVar3,&uStack_50,0x10);
      if ((iVar2 != -1) || (iVar2 = fn_82BF2B20(piVar3), iVar2 == 0)) {
        return 1;
      }
    }
  }
  return 0;
}

