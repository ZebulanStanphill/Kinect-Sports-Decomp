typedef unsigned char bool;
#define false 0
extern int fn_82381BC0();
extern int fn_8243DAE0();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


int * fn_8243D5E8(int *param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar6;
  bool bVar7;
  unsigned int uStack00000024;
  int aiStack_50 [2];
  int iStack_48;
  int iStack_44;
  
  puVar1 = *(unsigned int **)(param_2 + 4);
  uVar5 = 0;
  if ((int)(puVar1[1] - *puVar1) / 0x30 != 0) {
    lVar6 = 0;
    uStack00000024 = param_3;
    do {
      fn_8243DAE0(&iStack_48,(unsigned __int64)*puVar1 + lVar6 + 0x1c,&stack0x00000024);
      iVar4 = iStack_44;
      aiStack_50[0] = iStack_48;
      while (aiStack_50[0] != iVar4) {
        iVar2 = *(int *)(*(int *)(aiStack_50[0] + 0x10) + 0x30);
        if (((iVar2 == 0) || (iVar2 == 2)) || (iVar2 == 3)) {
          piVar3 = (int *)(*(int *)(aiStack_50[0] + 0x10) + 0x38);
          if (piVar3 == (int *)0x0) {
            bVar7 = false;
          }
          else {
            bVar7 = *piVar3 != 0;
          }
          if (bVar7) {
            iVar4 = *piVar3;
            goto LAB_8243d6c4;
          }
        }
        fn_82381BC0(aiStack_50);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x30;
    } while (uVar5 < (unsigned int)((int)(puVar1[1] - *puVar1) / 0x30));
  }
  iVar4 = 0;
LAB_8243d6c4:
  *param_1 = iVar4;
  return param_1;
}

