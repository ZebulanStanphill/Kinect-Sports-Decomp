extern int fn_8267BE38();
extern int fn_8268B120();
extern int fn_8268B1F0();
extern int fn_8268BB68();
extern int fn_826BD078();
extern unsigned int lbl_831E7E64;
extern unsigned int stack0x00000014;
extern unsigned int uStack00000014;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8268BF50(unsigned int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uStack00000014;
  int aiStack_50 [4];
  unsigned char uStack_40;
  unsigned int uStack_3c;
  
  aiStack_50[1] = 0;
  aiStack_50[2] = 0;
  aiStack_50[0] = 0;
  aiStack_50[3] = 0x200;
  uStack_40 = 0;
  uStack_3c = lbl_831E7E64;
  uStack00000014 = param_1;
  uVar1 = fn_826BD078(&stack0x00000014);
  iVar4 = 0;
  if ((uVar1 & 0xffffffff) != 0) {
    do {
      uVar2 = 0xffffffff82005c40;
      if ((uVar1 & 0xffffffff) == 0x3c) {
LAB_8268bfe4:
        uVar3 = 4;
LAB_8268c020:
        fn_8268B1F0(aiStack_50,uVar2,uVar3);
      }
      else {
        if ((uVar1 & 0xffffffff) == 0x3e) {
          uVar2 = 0xffffffff82005c48;
          goto LAB_8268bfe4;
        }
        uVar2 = 0xffffffff82005c50;
        if ((uVar1 & 0xffffffff) == 0x22) {
LAB_8268c008:
          uVar3 = 6;
          goto LAB_8268c020;
        }
        if ((uVar1 & 0xffffffff) == 0x27) {
          uVar2 = 0xffffffff82005c58;
          goto LAB_8268c008;
        }
        if ((uVar1 & 0xffffffff) == 0x26) {
          uVar3 = 5;
          uVar2 = 0xffffffff82005c60;
          goto LAB_8268c020;
        }
        fn_8268B120(aiStack_50,uVar1);
      }
      uVar1 = fn_826BD078(&stack0x00000014);
      iVar4 = aiStack_50[0];
    } while ((uVar1 & 0xffffffff) != 0);
  }
  fn_8268BB68(param_3,aiStack_50);
  if (iVar4 != 0) {
    fn_8267BE38(iVar4);
  }
  return;
}

