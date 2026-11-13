#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_34;
extern int fn_829E5CA0();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned __int64 fn_829E5FB8(int param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  int aiStack_50;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int auStack_34 [5];
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 1) {
    *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_1 + 0xc);
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x10);
    *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_1 + 0x14);
    *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x18);
  }
  uVar2 = (**(int (***)())*param_2)(param_2,&aiStack_50);
  if (-1 < (int)uVar2) {
    uVar4 = 2;
    if (aiStack_50 == 0) {
      uVar2 = (**(int (***)())(*param_2 + 4))(param_2,&uStack_40,&uStack_3c,&uStack_38,auStack_34);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      iVar3 = fn_829E5CA0(param_1,CONCAT44(uStack_40,uStack_3c),CONCAT44(uStack_38,auStack_34[0]))
      ;
      if (iVar3 < 0) {
        aiStack_50 = 1;
      }
      if (aiStack_50 == 0) {
        uVar4 = 1;
        *(unsigned int *)(param_1 + 0xc) = uStack_40;
        *(unsigned int *)(param_1 + 0x10) = uStack_3c;
        *(unsigned int *)(param_1 + 0x14) = uStack_38;
        *(unsigned int *)(param_1 + 0x18) = auStack_34[0];
      }
    }
    *(int *)(param_1 + 4) = iVar1;
    uVar2 = 0;
    *(unsigned int *)(param_1 + 8) = uVar4;
    *(int *)(param_1 + 0x2c) = aiStack_50;
  }
  return uVar2;
}

