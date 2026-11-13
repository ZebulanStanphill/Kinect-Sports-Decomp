#define true 1
#define TBLr 0
extern int fn_82646E80();
extern int fn_82646F48();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;


void fn_82643D58(int param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  int in_r13;
  int aiStack_40 [3];
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  uVar1 = (*(unsigned int **)(param_1 + 0x2a90))[1];
  uVar3 = param_3 - uVar1 & 3;
  if ((uVar3 != 0) && ((uVar3 != 1 || ((uVar1 & 0xfffffffc) < param_2)))) {
    aiStack_40[2] = **(unsigned int **)(param_1 + 0x2a90);
    aiStack_40[1] = 2;
    uStack_34 = *(unsigned int *)(*(int *)(in_r13 + 0x100) + 0x58);
    uVar2 = TBLr;
    uStack_2c = (unsigned int)uVar2;
    aiStack_40[0] = param_1;
    uStack_30 = uStack_34;
    while( true ) {
      iVar4 = fn_82646F48(aiStack_40);
      if (iVar4 == 0) break;
      uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x2a90) + 4);
      uVar3 = param_3 - uVar1 & 3;
      if ((uVar3 == 0) || ((uVar3 == 1 && (param_2 <= (uVar1 & 0xfffffffc))))) break;
    }
    fn_82646E80(aiStack_40);
  }
  return;
}

