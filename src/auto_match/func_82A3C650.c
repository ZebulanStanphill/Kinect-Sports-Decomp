extern int fn_82A3C038();
extern unsigned int lbl_820893D0;
extern unsigned int lbl_8208949C;


void fn_82A3C650(int param_1,unsigned int param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  int iVar4;
  char cVar8;
  unsigned char *puVar6;
  unsigned __int64 uVar5;
  int iVar7;
  int iVar9;
  unsigned int uVar10;
  
  uVar10 = 0;
  if (param_2 != 0) {
    iVar9 = 0;
    do {
      if ((1 << (uVar10 & 7) & (unsigned int)*(unsigned char *)((uVar10 >> 3) + *(int *)(param_1 + 0x2c))) == 0) {
        bVar1 = *(unsigned char *)(*(int *)(param_1 + 0x28) + uVar10);
        iVar7 = (unsigned int)bVar1 + param_1;
        *(unsigned int *)(param_1 + 0x14) =
             (unsigned int)*(unsigned short *)((bVar1 + 0x19ec) * 2 + param_1) <<
             ((int)*(char *)(param_1 + 0x18) - (unsigned int)*(unsigned char *)(iVar7 + 0x2530) & 0x3f) |
             *(unsigned int *)(param_1 + 0x14);
        cVar8 = *(char *)(param_1 + 0x18) - *(char *)(iVar7 + 0x2530);
        *(char *)(param_1 + 0x18) = cVar8;
        while (cVar8 < '\x11') {
          if (*(unsigned int *)(param_1 + 0x85c) <= *(unsigned int *)(param_1 + 0x858)) {
            *(unsigned char *)(param_1 + 0x19) = 1;
            *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(param_1 + 0x854);
          }
          **(unsigned char **)(param_1 + 0x858) = *(unsigned char *)(param_1 + 0x15);
          puVar6 = (unsigned char *)(*(int *)(param_1 + 0x858) + 1);
          *(unsigned char **)(param_1 + 0x858) = puVar6;
          *puVar6 = *(unsigned char *)(param_1 + 0x14);
          cVar8 = *(char *)(param_1 + 0x18) + '\x10';
          *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
          *(char *)(param_1 + 0x18) = cVar8;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
        }
        iVar7 = *(int *)(param_1 + 0x860) + 1;
      }
      else {
        uVar3 = *(unsigned int *)(*(int *)(param_1 + 0x24) + iVar9);
        iVar9 = iVar9 + 4;
        bVar1 = *(unsigned char *)(*(int *)(param_1 + 0x28) + uVar10);
        if (uVar3 < 0x400) {
          uVar5 = (unsigned __int64)*(unsigned char *)(uVar3 + param_1 + 0x454);
        }
        else if (uVar3 < 0x80000) {
          uVar5 = (unsigned __int64)*(unsigned char *)((uVar3 >> 9) + param_1 + 0x454) + 0x12;
        }
        else {
          uVar5 = ((unsigned __int64)(uVar3 >> 0x11) & 0xff) + 0x22;
        }
        cVar8 = *(char *)(param_1 + 0x18);
        uVar5 = uVar5 & 0xff;
        iVar7 = (int)uVar5;
        if (bVar1 < 7) {
          iVar4 = (iVar7 + 0x4c6) * 8 + (unsigned int)bVar1;
          *(unsigned int *)(param_1 + 0x14) =
               (unsigned int)*(unsigned short *)((iVar7 * 8 + (unsigned int)bVar1 + 0x1aec) * 2 + param_1) <<
               ((int)cVar8 - (unsigned int)*(unsigned char *)(iVar4 + param_1) & 0x3f) | *(unsigned int *)(param_1 + 0x14);
          cVar8 = cVar8 - *(char *)(iVar4 + param_1);
          *(char *)(param_1 + 0x18) = cVar8;
          while (cVar8 < '\x11') {
            if (*(unsigned int *)(param_1 + 0x85c) <= *(unsigned int *)(param_1 + 0x858)) {
              *(unsigned char *)(param_1 + 0x19) = 1;
              *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(param_1 + 0x854);
            }
            **(unsigned char **)(param_1 + 0x858) = *(unsigned char *)(param_1 + 0x15);
            puVar6 = (unsigned char *)(*(int *)(param_1 + 0x858) + 1);
            *(unsigned char **)(param_1 + 0x858) = puVar6;
            *puVar6 = *(unsigned char *)(param_1 + 0x14);
            *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
            cVar8 = *(char *)(param_1 + 0x18) + '\x10';
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
            *(char *)(param_1 + 0x18) = cVar8;
          }
        }
        else {
          iVar4 = (int)(uVar5 << 3) + param_1;
          *(unsigned int *)(param_1 + 0x14) =
               (unsigned int)*(unsigned short *)((int)(uVar5 << 4) + param_1 + 0x35e6) <<
               ((int)cVar8 - (unsigned int)*(unsigned char *)(iVar4 + 0x2637) & 0x3f) | *(unsigned int *)(param_1 + 0x14);
          cVar8 = cVar8 - *(char *)(iVar4 + 0x2637);
          *(char *)(param_1 + 0x18) = cVar8;
          while (cVar8 < '\x11') {
            if (*(unsigned int *)(param_1 + 0x85c) <= *(unsigned int *)(param_1 + 0x858)) {
              *(unsigned char *)(param_1 + 0x19) = 1;
              *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(param_1 + 0x854);
            }
            **(unsigned char **)(param_1 + 0x858) = *(unsigned char *)(param_1 + 0x15);
            puVar6 = (unsigned char *)(*(int *)(param_1 + 0x858) + 1);
            *(unsigned char **)(param_1 + 0x858) = puVar6;
            *puVar6 = *(unsigned char *)(param_1 + 0x14);
            *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
            cVar8 = *(char *)(param_1 + 0x18) + '\x10';
            *(char *)(param_1 + 0x18) = cVar8;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
          }
          *(unsigned int *)(param_1 + 0x14) =
               (unsigned int)*(unsigned short *)((bVar1 + 0x1ff2) * 2 + param_1) <<
               ((int)*(char *)(param_1 + 0x18) - (unsigned int)*(unsigned char *)((unsigned int)bVar1 + param_1 + 0x27e6) &
               0x3f) | *(unsigned int *)(param_1 + 0x14);
          cVar8 = *(char *)(param_1 + 0x18) - *(char *)((unsigned int)bVar1 + param_1 + 0x27e6);
          *(char *)(param_1 + 0x18) = cVar8;
          while (cVar8 < '\x11') {
            if (*(unsigned int *)(param_1 + 0x85c) <= *(unsigned int *)(param_1 + 0x858)) {
              *(unsigned char *)(param_1 + 0x19) = 1;
              *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(param_1 + 0x854);
            }
            **(unsigned char **)(param_1 + 0x858) = *(unsigned char *)(param_1 + 0x15);
            puVar6 = (unsigned char *)(*(int *)(param_1 + 0x858) + 1);
            *(unsigned char **)(param_1 + 0x858) = puVar6;
            *puVar6 = *(unsigned char *)(param_1 + 0x14);
            cVar8 = *(char *)(param_1 + 0x18) + '\x10';
            *(char *)(param_1 + 0x18) = cVar8;
            *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
          }
        }
        bVar2 = (&lbl_8208949C)[iVar7];
        if (bVar2 < 3) {
          if (bVar2 != 0) {
            *(unsigned int *)(param_1 + 0x14) =
                 (*(unsigned int *)(&lbl_820893D0 + (int)(uVar5 << 2)) & uVar3) <<
                 ((int)*(char *)(param_1 + 0x18) - (unsigned int)bVar2 & 0x3f) | *(unsigned int *)(param_1 + 0x14);
            cVar8 = *(char *)(param_1 + 0x18) - (&lbl_8208949C)[iVar7];
            *(char *)(param_1 + 0x18) = cVar8;
            while (cVar8 < '\x11') {
              if (*(unsigned int *)(param_1 + 0x85c) <= *(unsigned int *)(param_1 + 0x858)) {
                *(unsigned char *)(param_1 + 0x19) = 1;
                *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(param_1 + 0x854);
              }
              **(unsigned char **)(param_1 + 0x858) = *(unsigned char *)(param_1 + 0x15);
              puVar6 = (unsigned char *)(*(int *)(param_1 + 0x858) + 1);
              *(unsigned char **)(param_1 + 0x858) = puVar6;
              *puVar6 = *(unsigned char *)(param_1 + 0x14);
              cVar8 = *(char *)(param_1 + 0x18) + '\x10';
              *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
              *(char *)(param_1 + 0x18) = cVar8;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
            }
          }
        }
        else {
          if (3 < bVar2) {
            *(unsigned int *)(param_1 + 0x14) =
                 ((1 << (bVar2 - 3 & 0x3f)) - 1U & uVar3 >> 3) <<
                 (((int)*(char *)(param_1 + 0x18) - (unsigned int)bVar2) + 3 & 0x3f) |
                 *(unsigned int *)(param_1 + 0x14);
            cVar8 = (*(char *)(param_1 + 0x18) - (&lbl_8208949C)[iVar7]) + '\x03';
            *(char *)(param_1 + 0x18) = cVar8;
            while (cVar8 < '\x11') {
              if (*(unsigned int *)(param_1 + 0x85c) <= *(unsigned int *)(param_1 + 0x858)) {
                *(unsigned char *)(param_1 + 0x19) = 1;
                *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(param_1 + 0x854);
              }
              **(unsigned char **)(param_1 + 0x858) = *(unsigned char *)(param_1 + 0x15);
              puVar6 = (unsigned char *)(*(int *)(param_1 + 0x858) + 1);
              *(unsigned char **)(param_1 + 0x858) = puVar6;
              *puVar6 = *(unsigned char *)(param_1 + 0x14);
              cVar8 = *(char *)(param_1 + 0x18) + '\x10';
              *(char *)(param_1 + 0x18) = cVar8;
              *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
            }
          }
          iVar7 = (uVar3 & 7) + param_1;
          *(unsigned int *)(param_1 + 0x14) =
               (unsigned int)*(unsigned short *)(((uVar3 & 7) + 0x217f) * 2 + param_1) <<
               ((int)*(char *)(param_1 + 0x18) - (unsigned int)*(unsigned char *)(iVar7 + 0x430e) & 0x3f) |
               *(unsigned int *)(param_1 + 0x14);
          cVar8 = *(char *)(param_1 + 0x18) - *(char *)(iVar7 + 0x430e);
          *(char *)(param_1 + 0x18) = cVar8;
          while (cVar8 < '\x11') {
            if (*(unsigned int *)(param_1 + 0x85c) <= *(unsigned int *)(param_1 + 0x858)) {
              *(unsigned char *)(param_1 + 0x19) = 1;
              *(unsigned int *)(param_1 + 0x858) = *(unsigned int *)(param_1 + 0x854);
            }
            **(unsigned char **)(param_1 + 0x858) = *(unsigned char *)(param_1 + 0x15);
            puVar6 = (unsigned char *)(*(int *)(param_1 + 0x858) + 1);
            *(unsigned char **)(param_1 + 0x858) = puVar6;
            *puVar6 = *(unsigned char *)(param_1 + 0x14);
            cVar8 = *(char *)(param_1 + 0x18) + '\x10';
            *(char *)(param_1 + 0x18) = cVar8;
            *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
          }
        }
        iVar7 = (unsigned int)bVar1 + *(int *)(param_1 + 0x860) + 2;
      }
      uVar10 = uVar10 + 1;
      *(int *)(param_1 + 0x860) = iVar7;
      if (iVar7 == 0x8000) {
        fn_82A3C038(param_1);
        *(unsigned char *)(param_1 + 0x871) = 0;
      }
    } while (uVar10 < param_2);
  }
  return;
}

