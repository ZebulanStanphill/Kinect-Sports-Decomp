#define true 1
extern int fn_82C038C8();
extern int fn_82C09CA0();
extern int fn_82C1D908();
extern int fn_82F68CC0();


unsigned __int64 fn_82C0B000(int param_1,int *param_2,unsigned int *param_3,int param_4)

{
  char cVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned char *apbStack_70 [28];
  
  apbStack_70[0] = (unsigned char *)0x0;
  *(unsigned int *)(param_4 + 4) = 0;
  uVar7 = 0x80;
  if (param_1 != 0) {
    if (param_2 == (int *)0x0) goto LAB_82c0b618;
    if (param_3 != (unsigned int *)0x0) {
      *param_2 = 0;
      *param_3 = 0;
      cVar1 = *(char *)(param_1 + 0x20d);
      while (cVar1 != '\x01') {
        if (*(int *)(param_1 + 0x1a4) == 0) {
          if (*(__int64 *)(param_1 + 0x198) != 0) {
LAB_82c0b0b0:
            if (*(int *)(param_1 + 0x1a4) == 0) {
              if (*(__int64 *)(param_1 + 0x198) == 0) {
                return 3;
              }
              *(unsigned int *)(param_1 + 0x1a0) = 1;
              *(unsigned __int64 *)(param_1 + 0x198) =
                   *(__int64 *)(param_1 + 0x198) - (unsigned __int64)*(unsigned int *)(param_1 + 0x48);
              *(unsigned int *)(param_1 + 0x1a4) = *(unsigned int *)(param_1 + 0x48);
            }
            goto LAB_82c0b0dc;
          }
          uVar3 = *(unsigned int *)(param_1 + 0x188);
          *(unsigned int *)(param_1 + 0x188) = 7;
          iVar4 = fn_82C09CA0(param_1);
          if (iVar4 == 0x12) goto LAB_82c0b5fc;
          *(unsigned int *)(param_1 + 0x188) = uVar3;
          if (*(char *)(param_1 + 0x20d) != '\x01') {
            if (iVar4 == 6) {
              *param_3 = 0;
              return 0xffffffff80040005;
            }
            if (iVar4 != 0) {
              return 3;
            }
            goto LAB_82c0b0b0;
          }
        }
        else {
LAB_82c0b0dc:
          if (*(unsigned int *)(param_1 + 0x1a4) < uVar7) {
            uVar7 = *(unsigned int *)(param_1 + 0x1a4);
          }
          uVar5 = fn_82C038C8(param_1,*(unsigned __int64 *)(param_1 + 400),uVar7,param_2);
          *param_3 = uVar5;
          if (uVar5 != uVar7) {
            return 0xffffffff80040005;
          }
          if (*(int *)(param_1 + 0x228) == 0) {
            if (0x100 < uVar5) goto LAB_82c0b5ec;
            fn_82F68CC0(*(unsigned int *)(param_1 + 0x264),*param_2);
            *param_2 = *(int *)(param_1 + 0x264);
          }
          else {
            uVar6 = (unsigned __int64)*(unsigned short *)(param_1 + 0x206);
            if (*(unsigned int *)(param_1 + 0x18) < uVar6) {
              return 0xffffffff80004005;
            }
            if ((unsigned __int64)*(unsigned int *)(param_1 + 0x18) <
                ((uVar6 - *(unsigned int *)(param_1 + 0x1a4) & 0xffffffff) - *(unsigned __int64 *)(param_1 + 0x198)
                ) + (unsigned __int64)uVar5) {
              return 0xffffffff80004005;
            }
            fn_82F68CC0(((uVar6 - (*(unsigned __int64 *)(param_1 + 0x198) & 0xffffffff)) -
                         (unsigned __int64)*(unsigned int *)(param_1 + 0x1a4)) +
                         (unsigned __int64)*(unsigned int *)(param_1 + 0x264),*param_2);
          }
          *(unsigned __int64 *)(param_1 + 400) = (unsigned __int64)*param_3 + *(__int64 *)(param_1 + 400);
          iVar4 = *(int *)(param_1 + 0x1a4) - *param_3;
          *(int *)(param_1 + 0x1a4) = iVar4;
          if (*(int *)(param_1 + 0x224) != 0) {
            return 3;
          }
          if (*(int *)(param_1 + 0x228) != 0) {
            if ((iVar4 == 0) && (*(__int64 *)(param_1 + 0x198) == 0)) {
              iVar4 = fn_82C1D908(*(unsigned int *)(param_1 + 0x250),
                                        *(unsigned int *)(param_1 + 0x264),
                                        *(unsigned short *)(param_1 + 0x206),param_1 + 600);
              if (iVar4 < 0) goto LAB_82c0b510;
              *param_2 = *(int *)(param_1 + 0x264);
              *param_3 = (unsigned int)*(unsigned short *)(param_1 + 0x206);
            }
            else {
              *param_2 = 0;
              *param_3 = 0;
            }
          }
          if (*(int *)(param_1 + 0x1a0) != 0) {
            *(unsigned int *)(param_1 + 0x1a0) = 0;
            if (*(unsigned __int64 *)(param_1 + 0x198) ==
                ((unsigned __int64)*(unsigned short *)(param_1 + 0x206) - (unsigned __int64)*(unsigned int *)(param_1 + 0x48) &
                0xffffffff)) {
              *(unsigned int *)(param_4 + 4) = 1;
              *(unsigned __int64 *)(param_4 + 8) =
                   ((unsigned __int64)*(unsigned int *)(param_1 + 0x200) - (unsigned __int64)*(unsigned int *)(param_1 + 0x24) &
                   0xffffffff) * 10000;
            }
            if (*(int *)(param_1 + 0x228) == 0) {
              return 3;
            }
          }
          if (*(int *)(param_1 + 0x228) == 0) {
            return 0;
          }
          if (*param_2 != 0) {
            return 3;
          }
        }
        cVar1 = *(char *)(param_1 + 0x20d);
      }
      bVar2 = *(unsigned char *)(param_1 + 0x20c);
      do {
        uVar6 = (unsigned __int64)bVar2 - 1;
        if (3 < (uVar6 & 0xffffffff)) {
          return 3;
        }
        if ((int)uVar6 == 0) {
          iVar4 = fn_82C038C8(param_1,*(unsigned __int64 *)(param_1 + 400),1,apbStack_70);
          if (iVar4 != 1) {
            return 0xffffffff80040005;
          }
          if (apbStack_70[0] == (unsigned char *)0x0) {
            return 0xffffffff80040005;
          }
          *(unsigned short *)(param_1 + 0x218) = 0;
          *(unsigned int *)(param_1 + 0x1a0) = 1;
          *(unsigned int *)(param_1 + 0x1a4) = *(unsigned int *)(param_1 + 0x48);
          *(__int64 *)(param_1 + 400) = *(__int64 *)(param_1 + 400) + 1;
          bVar2 = *apbStack_70[0];
          *(unsigned short *)(param_1 + 0x210) = (unsigned short)bVar2;
          *(unsigned char *)(param_1 + 0x20e) = bVar2;
          if (bVar2 != 0) {
            *(unsigned short *)(param_1 + 0x210) = (unsigned short)bVar2 - (short)*(unsigned int *)(param_1 + 0x48);
          }
          bVar2 = *(unsigned char *)(param_1 + 0x20e);
          if ((unsigned short)bVar2 < *(unsigned short *)(param_1 + 0x20a)) {
            *(unsigned char *)(param_1 + 0x20c) = 2;
            *(unsigned short *)(param_1 + 0x208) = bVar2 + 1;
          }
          else {
            if (*(unsigned short *)(param_1 + 0x20a) == (unsigned short)bVar2) {
              *(unsigned short *)(param_1 + 0x208) = (unsigned short)bVar2;
            }
            *(unsigned char *)(param_1 + 0x20c) = 2;
          }
        }
        else if (uVar6 == 1) {
          if (*(int *)(param_1 + 0x1a4) != 0) {
LAB_82c0b4d0:
            if (*(unsigned int *)(param_1 + 0x1a4) < uVar7) {
              uVar7 = *(unsigned int *)(param_1 + 0x1a4);
            }
            uVar5 = fn_82C038C8(param_1,*(unsigned __int64 *)(param_1 + 400),uVar7,param_2);
            *param_3 = uVar5;
            if (uVar5 != uVar7) {
              return 0xffffffff80040005;
            }
            if (*(int *)(param_1 + 0x228) != 0) {
LAB_82c0b510:
              *param_2 = 0;
              *param_3 = 0;
              return 3;
            }
            if ((uVar5 < 0x101) && (*param_2 != 0)) {
              fn_82F68CC0(*(unsigned int *)(param_1 + 0x264));
              *param_2 = *(int *)(param_1 + 0x264);
              *(unsigned __int64 *)(param_1 + 400) = (unsigned __int64)*param_3 + *(__int64 *)(param_1 + 400);
              *(unsigned int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) - *param_3;
              if (*(int *)(param_1 + 0x224) != 0) {
                return 3;
              }
              if (*(int *)(param_1 + 0x1a0) == 0) {
                return 0;
              }
              if ((unsigned int)*(unsigned short *)(param_1 + 0x210) ==
                  (unsigned int)*(unsigned char *)(param_1 + 0x20e) - *(int *)(param_1 + 0x48)) {
                *(unsigned int *)(param_4 + 4) = 1;
                *(unsigned __int64 *)(param_4 + 8) =
                     (((__int64)*(int *)(param_1 + 0x214) *
                       (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x218) -
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x24)) + (unsigned __int64)*(unsigned int *)(param_1 + 0x200)
                     & 0xffffffff) * 10000;
                *(short *)(param_1 + 0x218) = *(short *)(param_1 + 0x218) + 1;
              }
              *(unsigned int *)(param_1 + 0x1a0) = 0;
              return 3;
            }
LAB_82c0b5ec:
            *param_2 = 0;
            return 3;
          }
          if (*(short *)(param_1 + 0x210) != 0) {
            if (*(short *)(param_1 + 0x210) == 0) {
              return 3;
            }
            *(unsigned int *)(param_1 + 0x1a0) = 1;
            *(short *)(param_1 + 0x210) =
                 *(short *)(param_1 + 0x210) - (short)*(unsigned int *)(param_1 + 0x48);
            *(unsigned int *)(param_1 + 0x1a4) = *(unsigned int *)(param_1 + 0x48);
            goto LAB_82c0b4d0;
          }
          *(unsigned char *)(param_1 + 0x20c) = 3;
        }
        else if (uVar6 == 2) {
          if (*(unsigned short *)(param_1 + 0x208) < *(unsigned short *)(param_1 + 0x20a)) {
            iVar4 = fn_82C038C8(param_1,*(unsigned __int64 *)(param_1 + 400),1,apbStack_70);
            if (iVar4 != 1) {
              return 0xffffffff80040005;
            }
            if (apbStack_70[0] == (unsigned char *)0x0) {
              return 0xffffffff80040005;
            }
            *(unsigned int *)(param_1 + 0x1a0) = 1;
            *(__int64 *)(param_1 + 400) = *(__int64 *)(param_1 + 400) + 1;
            *(unsigned int *)(param_1 + 0x1a4) = *(unsigned int *)(param_1 + 0x48);
            bVar2 = *apbStack_70[0];
            *(unsigned short *)(param_1 + 0x210) = (unsigned short)bVar2;
            *(unsigned char *)(param_1 + 0x20e) = bVar2;
            if (bVar2 != 0) {
              *(unsigned short *)(param_1 + 0x210) = (unsigned short)bVar2 - (short)*(unsigned int *)(param_1 + 0x48);
            }
            *(unsigned char *)(param_1 + 0x20c) = 2;
            *(unsigned short *)(param_1 + 0x208) =
                 (unsigned short)*(unsigned char *)(param_1 + 0x20e) + *(short *)(param_1 + 0x208) + 1;
          }
          else {
            *(unsigned char *)(param_1 + 0x20c) = 4;
          }
        }
        else {
          uVar3 = *(unsigned int *)(param_1 + 0x188);
          *(unsigned char *)(param_1 + 0x20c) = 0;
          *(unsigned __int64 *)(param_1 + 0x198) = 0;
          *(unsigned char *)(param_1 + 0x20d) = 0;
          *(unsigned int *)(param_1 + 0x188) = 7;
          iVar4 = fn_82C09CA0(param_1);
          if (iVar4 == 0x12) {
LAB_82c0b5fc:
            *param_3 = 0;
            return 0;
          }
          *(unsigned int *)(param_1 + 0x188) = uVar3;
          if (iVar4 != 0) {
            return 3;
          }
        }
        bVar2 = *(unsigned char *)(param_1 + 0x20c);
      } while( true );
    }
  }
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
LAB_82c0b618:
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = 0;
  }
  return 0xffffffff80070057;
}

