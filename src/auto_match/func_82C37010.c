typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_90;
extern int fn_82C30370();


unsigned __int64 fn_82C37010(int param_1,int param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int auStack_90;
  __int64 lStack_88;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xcc) == 1) {
    if (*(int *)(param_1 + 0x1cc) == 0) {
      iVar5 = *(int *)(param_3 + 0x38);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x148);
    }
    sVar1 = *(short *)(**(short **)(param_1 + 0x248) * 0x6f0 + *(int *)(param_1 + 0x140) + 0x76);
    if (*(short *)(param_1 + 0xca) < sVar1) {
      do {
        uVar3 = fn_82C30370(param_2 + 0xe0,*(unsigned short *)(param_1 + 0x6e),&auStack_90);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar7 = 1 << (*(unsigned short *)(param_1 + 0x6e) - 1 & 0x3f);
        if ((uVar7 & auStack_90) != 0) {
          auStack_90 = auStack_90 | ~(uVar7 - 1);
        }
        lStack_88 = (__int64)(int)(auStack_90 << 1);
        *(float *)(*(short *)(param_1 + 0xca) * 4 + iVar5) = (float)lStack_88;
        sVar4 = *(short *)(param_1 + 0xca) + 1;
        *(short *)(param_1 + 0xca) = sVar4;
      } while (sVar4 < sVar1);
    }
  }
  else {
    sVar1 = *(short *)(**(short **)(param_1 + 0x248) * 0x6f0 + *(int *)(param_1 + 0x140) + 0x76);
    if (*(char *)(param_2 + 0x91) < '\x01') {
      do {
        if (*(int *)(param_1 + 0x1cc) == 0) {
          iVar5 = *(int *)(param_3 + 0x38);
        }
        else {
          iVar5 = *(int *)(param_1 + 0x148);
        }
        puVar8 = (unsigned int *)((int)*(char *)(param_2 + 0x91) * (int)sVar1 * 4 + iVar5);
        iVar5 = *(int *)(param_2 + 0x48);
        if (iVar5 == 6) {
          if (((*(int *)(param_1 + 0x78) == 1) && (*(int *)(param_1 + 0xa4) == 1)) &&
             (*(short *)(param_2 + 0x94) < *(short *)(param_1 + 0xa8))) {
            do {
              sVar4 = *(short *)(param_1 + 0xac) + *(short *)(param_1 + 0xaa);
              uVar3 = fn_82C30370(param_2 + 0xe0,sVar4,&auStack_90);
              if ((int)uVar3 < 0) {
                return uVar3;
              }
              uVar7 = 0x20 - (int)sVar4;
              *(int *)(*(short *)(param_2 + 0x94) * 4 + param_3 + 0x5b0) =
                   (int)(auStack_90 << (uVar7 & 0x3f)) >> (uVar7 & 0x3f);
              sVar4 = *(short *)(param_2 + 0x94) + 1;
              *(short *)(param_2 + 0x94) = sVar4;
            } while (sVar4 < *(short *)(param_1 + 0xa8));
          }
          *(unsigned int *)(param_2 + 0x48) = 7;
LAB_82c37250:
          uVar3 = fn_82C30370(param_2 + 0xe0,5,&auStack_90);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          if ((int)(unsigned int)*(unsigned short *)(param_1 + 0x6e) < (int)auStack_90) {
            return 0xffffffff80040002;
          }
          *(unsigned int *)(param_2 + 0x48) = 10;
          *(unsigned int *)(param_2 + 0x50) = 0;
          *(short *)(param_2 + 0xc4) = (short)auStack_90;
          *(unsigned short *)(param_1 + 0xca) = 0;
LAB_82c37288:
          if ((*(int *)(param_1 + 0xc0) == 1) && (*(short *)(param_1 + 0xca) == 0)) {
            if (*(int *)(param_2 + 0x50) == 0) {
              uVar3 = fn_82C30370(param_2 + 0xe0,1,&auStack_90);
              if ((int)uVar3 < 0) {
                return uVar3;
              }
              *(unsigned int *)(param_2 + 0x50) = 1;
              *(unsigned int *)(param_2 + 0x54) = auStack_90;
LAB_82c372d8:
              uVar3 = fn_82C30370(param_2 + 0xe0,*(unsigned short *)(param_1 + 0x6e),&auStack_90);
              if ((int)uVar3 < 0) {
                return uVar3;
              }
              uVar7 = 1 << (*(unsigned short *)(param_1 + 0x6e) & 0x3f);
              auStack_90 =
                   *(int *)(param_2 + 0x54) << (*(unsigned short *)(param_1 + 0x6e) & 0x3f) | auStack_90;
              if ((uVar7 & auStack_90) != 0) {
                auStack_90 = auStack_90 | ~(uVar7 - 1);
              }
              *puVar8 = auStack_90;
            }
            else if (*(int *)(param_2 + 0x50) == 1) goto LAB_82c372d8;
            *(short *)(param_1 + 0xca) = *(short *)(param_1 + 0xca) + 1;
          }
          if ((int)*(short *)(param_1 + 0xca) < (int)sVar1) {
            do {
              if (*(int *)(param_2 + 0x4c) == 0) {
                while( true ) {
                  uVar3 = fn_82C30370(param_2 + 0xe0,1,&auStack_90);
                  if ((int)uVar3 < 0) {
                    return uVar3;
                  }
                  if (auStack_90 != 1) break;
                  *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + 1;
                }
                *(unsigned int *)(param_2 + 0x4c) = 3;
LAB_82c37398:
                auStack_90 = 0;
                uVar3 = fn_82C30370(param_2 + 0xe0,*(unsigned short *)(param_2 + 0xc4),&auStack_90);
                if ((int)uVar3 < 0) {
                  return uVar3;
                }
                *(unsigned int *)(param_2 + 0xd0) = auStack_90;
              }
              else if (*(int *)(param_2 + 0x4c) == 3) goto LAB_82c37398;
              puVar8[*(short *)(param_1 + 0xca)] =
                   (*(int *)(param_2 + 200) << (*(unsigned short *)(param_2 + 0xc4) & 0x3f)) +
                   *(int *)(param_2 + 0xd0);
              *(unsigned int *)(param_2 + 0x4c) = 0;
              *(unsigned int *)(param_2 + 200) = 0;
              *(unsigned int *)(param_2 + 0xd0) = 0;
              sVar4 = *(short *)(param_1 + 0xca) + 1;
              *(short *)(param_1 + 0xca) = sVar4;
            } while (sVar4 < sVar1);
          }
        }
        else {
          if (iVar5 == 7) goto LAB_82c37250;
          if (iVar5 == 10) goto LAB_82c37288;
        }
        bVar2 = *(int *)(param_1 + 0xc0) == 1;
        uVar7 = (unsigned int)bVar2;
        if ((short)(unsigned short)bVar2 < sVar1) {
          iVar5 = (int)sVar1 - uVar7;
          puVar8 = puVar8 + uVar7;
          do {
            uVar7 = *puVar8;
            if ((uVar7 & 1) == 0) {
              *puVar8 = (int)uVar7 >> 1;
            }
            else {
              *puVar8 = -((int)(uVar7 + 1) >> 1);
            }
            puVar8 = puVar8 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *(unsigned int *)(param_2 + 0x48) = 6;
        *(unsigned short *)(param_2 + 0x94) = 0;
        *(unsigned short *)(param_1 + 0xca) = 0;
        *(unsigned int *)(param_2 + 200) = 0;
        *(unsigned int *)(param_2 + 0x4c) = 0;
        *(unsigned int *)(param_2 + 0xd0) = 0;
        cVar6 = *(char *)(param_2 + 0x91) + '\x01';
        *(char *)(param_2 + 0x91) = cVar6;
      } while (cVar6 < '\x01');
    }
  }
  return uVar3;
}

