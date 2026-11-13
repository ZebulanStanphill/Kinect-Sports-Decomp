extern int fn_82A3C038();
extern unsigned int lbl_820893D0;
extern unsigned int lbl_8208949C;


void fn_82A3C188(int param_1,unsigned int param_2)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int iVar3;
  char cVar7;
  unsigned char *puVar5;
  unsigned __int64 uVar4;
  int iVar6;
  int iVar8;
  unsigned int uVar9;
  
  uVar9 = 0;
  if (param_2 != 0) {
    iVar8 = 0;
    do {
      if ((1 << (uVar9 & 7) & (unsigned int)*(unsigned char *)((uVar9 >> 3) + *(int *)(param_1 + 0x2c))) == 0) {
        bVar1 = *(unsigned char *)(*(int *)(param_1 + 0x28) + uVar9);
        iVar6 = (unsigned int)bVar1 + param_1;
        *(unsigned int *)(param_1 + 0x14) =
             (unsigned int)*(unsigned short *)((bVar1 + 0x19ec) * 2 + param_1) <<
             ((int)*(char *)(param_1 + 0x18) - (unsigned int)*(unsigned char *)(iVar6 + 0x2530) & 0x3f) |
             *(unsigned int *)(param_1 + 0x14);
        cVar7 = *(char *)(param_1 + 0x18) - *(char *)(iVar6 + 0x2530);
        *(char *)(param_1 + 0x18) = cVar7;
        while (cVar7 < '\x11') {
          if (*(unsigned int *)(param_1 + 0x85c) <= *(unsigned int *)(param_1 + 0x858)) {
            *(unsigned char *)(param_1 + 0x19) = 1;
            *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(param_1 + 0x854);
          }
          **(unsigned char **)(param_1 + 0x858) = *(unsigned char *)(param_1 + 0x15);
          puVar5 = (unsigned char *)(*(int *)(param_1 + 0x858) + 1);
          *(unsigned char **)(param_1 + 0x858) = puVar5;
          *puVar5 = *(unsigned char *)(param_1 + 0x14);
          cVar7 = *(char *)(param_1 + 0x18) + '\x10';
          *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
          *(char *)(param_1 + 0x18) = cVar7;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
        }
        iVar6 = *(int *)(param_1 + 0x860) + 1;
      }
      else {
        uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x24) + iVar8);
        iVar8 = iVar8 + 4;
        bVar1 = *(unsigned char *)(*(int *)(param_1 + 0x28) + uVar9);
        if (uVar2 < 0x400) {
          uVar4 = (unsigned __int64)*(unsigned char *)(uVar2 + param_1 + 0x454);
        }
        else if (uVar2 < 0x80000) {
          uVar4 = (unsigned __int64)*(unsigned char *)((uVar2 >> 9) + param_1 + 0x454) + 0x12;
        }
        else {
          uVar4 = ((unsigned __int64)(uVar2 >> 0x11) & 0xff) + 0x22;
        }
        cVar7 = *(char *)(param_1 + 0x18);
        uVar4 = uVar4 & 0xff;
        iVar6 = (int)uVar4;
        if (bVar1 < 7) {
          iVar3 = (iVar6 + 0x4c6) * 8 + (unsigned int)bVar1;
          *(unsigned int *)(param_1 + 0x14) =
               (unsigned int)*(unsigned short *)((iVar6 * 8 + (unsigned int)bVar1 + 0x1aec) * 2 + param_1) <<
               ((int)cVar7 - (unsigned int)*(unsigned char *)(iVar3 + param_1) & 0x3f) | *(unsigned int *)(param_1 + 0x14);
          cVar7 = cVar7 - *(char *)(iVar3 + param_1);
          *(char *)(param_1 + 0x18) = cVar7;
          while (cVar7 < '\x11') {
            if (*(unsigned int *)(param_1 + 0x85c) <= *(unsigned int *)(param_1 + 0x858)) {
              *(unsigned char *)(param_1 + 0x19) = 1;
              *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(param_1 + 0x854);
            }
            **(unsigned char **)(param_1 + 0x858) = *(unsigned char *)(param_1 + 0x15);
            puVar5 = (unsigned char *)(*(int *)(param_1 + 0x858) + 1);
            *(unsigned char **)(param_1 + 0x858) = puVar5;
            *puVar5 = *(unsigned char *)(param_1 + 0x14);
            *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
            cVar7 = *(char *)(param_1 + 0x18) + '\x10';
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
            *(char *)(param_1 + 0x18) = cVar7;
          }
        }
        else {
          iVar3 = (int)(uVar4 << 3) + param_1;
          *(unsigned int *)(param_1 + 0x14) =
               (unsigned int)*(unsigned short *)((int)(uVar4 << 4) + param_1 + 0x35e6) <<
               ((int)cVar7 - (unsigned int)*(unsigned char *)(iVar3 + 0x2637) & 0x3f) | *(unsigned int *)(param_1 + 0x14);
          cVar7 = cVar7 - *(char *)(iVar3 + 0x2637);
          *(char *)(param_1 + 0x18) = cVar7;
          while (cVar7 < '\x11') {
            if (*(unsigned int *)(param_1 + 0x85c) <= *(unsigned int *)(param_1 + 0x858)) {
              *(unsigned char *)(param_1 + 0x19) = 1;
              *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(param_1 + 0x854);
            }
            **(unsigned char **)(param_1 + 0x858) = *(unsigned char *)(param_1 + 0x15);
            puVar5 = (unsigned char *)(*(int *)(param_1 + 0x858) + 1);
            *(unsigned char **)(param_1 + 0x858) = puVar5;
            *puVar5 = *(unsigned char *)(param_1 + 0x14);
            cVar7 = *(char *)(param_1 + 0x18) + '\x10';
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
            *(char *)(param_1 + 0x18) = cVar7;
            *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
          }
          *(unsigned int *)(param_1 + 0x14) =
               (unsigned int)*(unsigned short *)((bVar1 + 0x1ff2) * 2 + param_1) <<
               ((int)*(char *)(param_1 + 0x18) - (unsigned int)*(unsigned char *)((unsigned int)bVar1 + param_1 + 0x27e6) &
               0x3f) | *(unsigned int *)(param_1 + 0x14);
          cVar7 = *(char *)(param_1 + 0x18) - *(char *)((unsigned int)bVar1 + param_1 + 0x27e6);
          *(char *)(param_1 + 0x18) = cVar7;
          while (cVar7 < '\x11') {
            if (*(unsigned int *)(param_1 + 0x85c) <= *(unsigned int *)(param_1 + 0x858)) {
              *(unsigned char *)(param_1 + 0x19) = 1;
              *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(param_1 + 0x854);
            }
            **(unsigned char **)(param_1 + 0x858) = *(unsigned char *)(param_1 + 0x15);
            puVar5 = (unsigned char *)(*(int *)(param_1 + 0x858) + 1);
            *(unsigned char **)(param_1 + 0x858) = puVar5;
            *puVar5 = *(unsigned char *)(param_1 + 0x14);
            cVar7 = *(char *)(param_1 + 0x18) + '\x10';
            *(char *)(param_1 + 0x18) = cVar7;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
            *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
          }
        }
        if ((&lbl_8208949C)[iVar6] != 0) {
          *(unsigned int *)(param_1 + 0x14) =
               (*(unsigned int *)(&lbl_820893D0 + (int)(uVar4 << 2)) & uVar2) <<
               ((int)*(char *)(param_1 + 0x18) - (unsigned int)(unsigned char)(&lbl_8208949C)[iVar6] & 0x3f) |
               *(unsigned int *)(param_1 + 0x14);
          cVar7 = *(char *)(param_1 + 0x18) - (&lbl_8208949C)[iVar6];
          *(char *)(param_1 + 0x18) = cVar7;
          while (cVar7 < '\x11') {
            if (*(unsigned int *)(param_1 + 0x85c) <= *(unsigned int *)(param_1 + 0x858)) {
              *(unsigned char *)(param_1 + 0x19) = 1;
              *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(param_1 + 0x854);
            }
            **(unsigned char **)(param_1 + 0x858) = *(unsigned char *)(param_1 + 0x15);
            puVar5 = (unsigned char *)(*(int *)(param_1 + 0x858) + 1);
            *(unsigned char **)(param_1 + 0x858) = puVar5;
            *puVar5 = *(unsigned char *)(param_1 + 0x14);
            cVar7 = *(char *)(param_1 + 0x18) + '\x10';
            *(char *)(param_1 + 0x18) = cVar7;
            *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
          }
        }
        iVar6 = (unsigned int)bVar1 + *(int *)(param_1 + 0x860) + 2;
      }
      uVar9 = uVar9 + 1;
      *(int *)(param_1 + 0x860) = iVar6;
      if (iVar6 == 0x8000) {
        fn_82A3C038(param_1);
        *(unsigned char *)(param_1 + 0x871) = 0;
      }
    } while (uVar9 < param_2);
  }
  return;
}

