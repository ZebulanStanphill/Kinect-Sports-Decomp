#define true 1
#define TBLr 0
extern int fn_82646E80();
extern int fn_82646F48();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;


unsigned int fn_82644388(int param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int in_r13;
  unsigned int uVar4;
  int aiStack_40 [3];
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  uVar4 = param_2 + param_3 & *(unsigned int *)(param_1 + 0x3b08);
  uVar1 = (*(unsigned int **)(param_1 + 0x2a90))[0xf];
  if (param_2 < uVar4) {
    if (uVar1 <= param_2) {
      return uVar4;
    }
  }
  else if (param_2 < uVar1) goto LAB_826443d4;
  if (uVar4 < uVar1) {
    return uVar4;
  }
LAB_826443d4:
  aiStack_40[2] = **(unsigned int **)(param_1 + 0x2a90);
  aiStack_40[1] = 1;
  uStack_34 = *(unsigned int *)(*(int *)(in_r13 + 0x100) + 0x58);
  uVar2 = TBLr;
  uStack_2c = (unsigned int)uVar2;
  aiStack_40[0] = param_1;
  uStack_30 = uStack_34;
LAB_82644400:
  do {
    iVar3 = fn_82646F48(aiStack_40);
    if (iVar3 == 0) goto LAB_8264443c;
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x2a90) + 0x3c);
    if (param_2 < uVar4) {
      if (uVar1 <= param_2) goto LAB_8264443c;
    }
    else if (param_2 < uVar1) goto LAB_82644400;
    if (uVar4 < uVar1) {
LAB_8264443c:
      fn_82646E80(aiStack_40);
      return uVar4;
    }
  } while( true );
}

