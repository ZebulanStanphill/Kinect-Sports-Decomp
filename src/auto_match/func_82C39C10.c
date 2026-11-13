#define true 1
extern int fn_82A6D200();
extern int fn_82A75588();
extern int fn_82A75DF8();
extern int fn_82C30370();
extern unsigned int iStack_60;
extern unsigned int uStack_5c;


unsigned __int64 fn_82C39C10(int *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  unsigned char *pbVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  short sVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iStack_60;
  unsigned int uStack_5c;
  int aiStack_58;
  
  iVar1 = *param_1;
  uVar6 = 0;
  if (param_1[10] == 6) {
    if ((int)*(short *)((int)param_1 + 0x96) < (int)(unsigned int)*(unsigned short *)(iVar1 + 0x22)) {
      do {
        iVar9 = *(short *)((int)param_1 + 0x96) * 0x6f0 + *(int *)(iVar1 + 0x140);
        uVar6 = fn_82A75588(param_1 + 0x38,
                                  (unsigned __int64)*(unsigned int *)(iVar1 + 0x130) -
                                  (unsigned __int64)*(unsigned int *)(iVar1 + 400));
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        if (*(int *)(iVar9 + 0x28) == 0) {
          *(unsigned int *)(iVar9 + 0x24) = 0;
        }
        else {
          pcVar2 = *(char **)(iVar9 + 0xc);
          *pcVar2 = '\0';
          *(int *)(iVar9 + 0x24) = *(int *)(iVar1 + 0x194) - *(int *)(iVar1 + 0x108);
          while( true ) {
            sVar7 = *(short *)(param_1 + 0x26);
            piVar8 = (int *)(sVar7 * 4 + *(int *)(iVar1 + 0x134));
            iVar11 = *piVar8;
            iVar10 = *(int *)(iVar1 + 0x194);
            if (*(int *)(iVar1 + 0x194) <= iVar11) {
              iVar10 = iVar11;
            }
            iVar11 = *(int *)(iVar1 + 0x10c);
            if (iVar11 <= iVar10) break;
            iVar3 = piVar8[1];
            if (iVar3 <= iVar11) {
              iVar11 = iVar3;
            }
            uVar6 = fn_82C30370(param_1 + 0x38,1,&iStack_60);
            if ((int)uVar6 < 0) {
              return uVar6;
            }
            pcVar2[*(short *)(param_1 + 0x26)] = (char)iStack_60;
            if (pcVar2[*(short *)(param_1 + 0x26)] == '\0') {
              *(int *)(iVar9 + 0x24) = (*(int *)(iVar9 + 0x24) - iVar10) + iVar11;
            }
            else {
              *pcVar2 = *pcVar2 + '\x01';
            }
            *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
          }
          if ((int)sVar7 < *(int *)(iVar1 + 0x130)) {
            pcVar2[sVar7] = '\0';
          }
        }
        *(short *)(param_1 + 0x26) = (short)*(unsigned int *)(iVar1 + 400);
        sVar7 = *(short *)((int)param_1 + 0x96) + 1;
        *(short *)((int)param_1 + 0x96) = sVar7;
      } while ((int)sVar7 < (int)(unsigned int)*(unsigned short *)(iVar1 + 0x22));
    }
    param_1[10] = 7;
    *(unsigned short *)((int)param_1 + 0x96) = 0;
    *(unsigned short *)(param_1 + 0x26) = 0;
  }
  else if (param_1[10] != 7) {
    return 0;
  }
  if ((int)*(short *)((int)param_1 + 0x96) < (int)(unsigned int)*(unsigned short *)(iVar1 + 0x22)) {
    do {
      iVar9 = *(short *)((int)param_1 + 0x96) * 0x6f0 + *(int *)(iVar1 + 0x140);
      if (*(int *)(iVar9 + 0x28) != 0) {
        pbVar4 = *(unsigned char **)(iVar9 + 0xc);
        piVar8 = *(int **)(iVar9 + 0x14);
        if (*pbVar4 != 0) {
          if (*(short *)(param_1 + 0x26) == 0) {
            uVar6 = fn_82C30370(param_1 + 0x38,7,&iStack_60);
            if ((int)uVar6 < 0) {
              return uVar6;
            }
            *piVar8 = iStack_60 + -0x13;
            *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
          }
          if (*(short *)(param_1 + 0x26) < (short)(unsigned short)*pbVar4) {
            do {
              uVar6 = fn_82A75DF8(0xffffffff820ef740,param_1 + 0x38,&uStack_5c,&aiStack_58,0);
              if ((int)uVar6 < 0) {
                return uVar6;
              }
              uVar6 = fn_82A6D200(param_1 + 0x38,uStack_5c);
              if ((int)uVar6 < 0) {
                return uVar6;
              }
              piVar5 = piVar8 + *(short *)(param_1 + 0x26);
              *piVar5 = piVar5[-1] + aiStack_58 + -0x12;
              sVar7 = *(short *)(param_1 + 0x26);
              *(short *)(param_1 + 0x26) = sVar7 + 1;
            } while ((short)(sVar7 + 1) < (short)(unsigned short)*pbVar4);
          }
        }
      }
      *(unsigned short *)(param_1 + 0x26) = 0;
      sVar7 = *(short *)((int)param_1 + 0x96) + 1;
      *(short *)((int)param_1 + 0x96) = sVar7;
    } while ((int)sVar7 < (int)(unsigned int)*(unsigned short *)(iVar1 + 0x22));
  }
  return uVar6;
}

