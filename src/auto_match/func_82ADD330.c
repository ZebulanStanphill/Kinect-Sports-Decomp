extern int fn_82AC64B8();
extern int fn_82B41D68();
extern int fn_82B8F208();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int uStack_58;
extern unsigned int uStack_68;


void fn_82ADD330(unsigned __int64 param_1,int param_2,int param_3,int param_4,unsigned int *param_5,
                  unsigned int *param_6)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int aiStack_70 [2];
  unsigned int uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  unsigned char uStack_58;
  
  aiStack_70[0] = *(int *)(param_2 + 0x1c);
  uStack_68 = 0;
  iStack_60 = 0;
  iStack_5c = 0;
  uStack_58 = 0;
  iVar4 = 0;
  iVar5 = 0;
  fn_82B8F208(aiStack_70,*(unsigned int *)(aiStack_70[0] + 8));
  while (uVar1 = fn_82AC64B8(aiStack_70), (uVar1 & 0xffffffff) != 0) {
    iVar2 = fn_82B41D68(param_1,param_2,uVar1,0,1);
    if (param_3 == iVar2) {
      if (iStack_60 == 0) {
        uVar3 = *(unsigned int *)(iStack_64 + 0x10);
      }
      else {
        uVar3 = *(unsigned int *)(iStack_5c + 0x44) & 0xfffffff;
      }
      iVar4 = uVar3 + iVar4;
    }
    if (param_4 == iVar2) {
      if (iStack_60 == 0) {
        uVar3 = *(unsigned int *)(iStack_64 + 0x10);
      }
      else {
        uVar3 = *(unsigned int *)(iStack_5c + 0x44) & 0xfffffff;
      }
      iVar5 = uVar3 + iVar5;
    }
  }
  uVar3 = *param_5 + iVar5;
  if (0xfffffff < uVar3) {
    uVar3 = 0xfffffff;
  }
  *param_5 = uVar3;
  uVar3 = *param_6 + iVar4;
  if (0xfffffff < uVar3) {
    uVar3 = 0xfffffff;
  }
  *param_6 = uVar3;
  return;
}

