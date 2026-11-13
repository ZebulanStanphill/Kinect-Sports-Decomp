typedef unsigned char bool;
#define true 1
extern int fn_82A6D090();
extern int fn_82A6D200();
extern int fn_82A74488();
extern int fn_82A74640();
extern int fn_82A75DF8();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


void fn_82A74760(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned int *puVar7;
  int iStack_50;
  unsigned int uStack_4c;
  int aiStack_48;
  
  iVar2 = *param_1;
  piVar6 = param_1 + 0x38;
  puVar7 = (unsigned int *)(param_1 + 0x81);
  while( true ) {
    do {
      uVar5 = (unsigned __int64)*puVar7 - 0xf;
    } while (3 < (uVar5 & 0xffffffff));
    bVar1 = (int)uVar5 != 0;
    if ((unsigned __int64)*puVar7 == 0x10 && bVar1) break;
    if (uVar5 == 2 && bVar1) {
      iVar4 = fn_82A74488(&iStack_50,0,piVar6,param_1,puVar7);
      if (iVar4 < 0) {
        return;
      }
      *(int *)(iVar2 + 0x14) = iStack_50;
      *puVar7 = 0x10;
      break;
    }
    if (bVar1) goto LAB_82a74904;
    iVar4 = fn_82A75DF8(*(unsigned int *)(param_2 + 0x18),piVar6,&uStack_4c,&iStack_50,
                              &aiStack_48);
    if (iVar4 < 0) {
      return;
    }
    iVar4 = fn_82A6D200(piVar6,uStack_4c);
    if (iVar4 < 0) {
      return;
    }
    if (iStack_50 != 0) {
      if (iStack_50 == 1) {
        *(unsigned int *)(iVar2 + 0x14) = 0;
        uVar3 = *(unsigned int *)(param_2 + 0x24);
        *(unsigned int *)(iVar2 + 0x18) = 0;
        *(int *)(iVar2 + 0x10) = (int)(short)(((short)uVar3 - *(short *)(iVar2 + 0xca)) + -1);
      }
      else {
        iVar4 = fn_82A6D200(piVar6,1);
        if (-1 < iVar4) {
          *(int *)(iVar2 + 0x10) =
               (int)(short)(*(short *)((iStack_50 + -2) * 2 + *(int *)(param_2 + 0x1c)) +
                           (short)param_1[0x84]);
          param_1[0x84] = 0;
          *(unsigned int *)(iVar2 + 0x14) =
               (unsigned int)*(unsigned short *)((iStack_50 + -2) * 2 + *(int *)(param_2 + 0x20));
          *(int *)(iVar2 + 0x18) = -1 - (aiStack_48 >> 0x1f);
        }
      }
      return;
    }
    *puVar7 = 0x11;
    *(unsigned int *)(iVar2 + 0x18) = 0;
  }
  iVar4 = fn_82A74640(&iStack_50,*(unsigned short *)(param_1 + 0x4e),piVar6);
  if (iVar4 < 0) {
    return;
  }
  *(int *)(iVar2 + 0x10) = (int)(short)((short)param_1[0x84] + (short)iStack_50);
  param_1[0x84] = 0;
  *puVar7 = 0x12;
LAB_82a74904:
  iVar4 = fn_82A6D090(piVar6,1,&iStack_50);
  if (iVar4 < 0) {
    return;
  }
  *(int *)(iVar2 + 0x18) = iStack_50 + -1;
  *puVar7 = 0xf;
  return;
}

