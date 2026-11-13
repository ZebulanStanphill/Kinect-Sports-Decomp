typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82CE5040();
extern int fn_82F63108();
extern V16 vectorAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_826050B8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  unsigned int uVar4;
  int iVar5;
  unsigned short uVar6;
  int iVar7;
  unsigned char bVar8;
  int iVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [112];
  
  uVar4 = *param_4;
  uVar1 = param_4[1];
  if (uVar4 < uVar1) {
    iVar9 = uVar4 + 0x280;
    do {
      if ((*(unsigned int *)(iVar9 + 0x234) & *(unsigned int *)(param_1 + 0x144)) != 0) {
        if ('\0' < *(char *)(iVar9 + -0x23e)) {
          uVar6 = *(unsigned short *)(iVar9 + -0x23a);
          if ((uVar6 & 0x87) != 0x87) {
            if ((uVar6 & 1) == 0) {
              fn_82CE5040(iVar9 + 0x240,param_3,iVar9 + -0x270);
              uVar6 = uVar6 | 1;
            }
            if ((uVar6 & 4) == 0) {
              puVar2 = (unsigned int *)(iVar9 - 0x270U & 0xfffffff0);
              uVar10 = puVar2[1];
              uVar11 = puVar2[2];
              uVar12 = puVar2[3];{ V16 _vt0 = vectorAddFloatingPoint(in_vs45,in_vs32); memcpy(in_vs32, &_vt0, 16); }
              puVar3 = (unsigned int *)((unsigned int)(auStack_70 + (int)in_r0) & 0xfffffff0);
              *puVar3 = *puVar2;
              puVar3[1] = uVar10;
              puVar3[2] = uVar11;
              puVar3[3] = uVar12;
              fn_82CE5040(iVar9 + 0x250,param_3,auStack_70);
              uVar6 = uVar6 | 4;
            }
            if ((uVar6 & 2) == 0) {
              iVar5 = 0;
              if ('\0' < *(char *)(iVar9 + -0x240)) {
                iVar7 = iVar9 + 0x260;
                do {
                  puVar2 = (unsigned int *)(iVar7 - 0x490U & 0xfffffff0);
                  uVar10 = *puVar2;
                  uVar11 = puVar2[1];
                  uVar12 = puVar2[2];
                  uVar13 = puVar2[3];
                  puVar2 = (unsigned int *)((unsigned int)(auStack_80 + (int)in_r0) & 0xfffffff0);
                  *puVar2 = uVar10;
                  puVar2[1] = uVar11;
                  puVar2[2] = uVar12;
                  puVar2[3] = uVar13;{ V16 _vt1 = vectorAddFloatingPoint(in_vs32,in_vs45); memcpy(in_vs32, &_vt1, 16); }
                  puVar2 = (unsigned int *)((unsigned int)(auStack_80 + (int)in_r0) & 0xfffffff0);
                  *puVar2 = uVar10;
                  puVar2[1] = uVar11;
                  puVar2[2] = uVar12;
                  puVar2[3] = uVar13;
                  fn_82CE5040(auStack_80,param_3,auStack_80);
                  iVar5 = iVar5 + 1;
                  puVar2 = (unsigned int *)((unsigned int)(auStack_80 + (int)in_r0) & 0xfffffff0);
                  uVar10 = puVar2[1];
                  uVar11 = puVar2[2];
                  uVar12 = puVar2[3];
                  puVar3 = (unsigned int *)((int)in_r0 + iVar7 & 0xfffffff0);
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar10;
                  puVar3[2] = uVar11;
                  puVar3[3] = uVar12;
                  iVar7 = iVar7 + 0x10;
                } while (iVar5 < *(char *)(iVar9 + -0x240));
              }
              uVar6 = uVar6 | 2;
            }
            if ((uVar6 & 0x80) == 0) {
              bVar8 = *(unsigned char *)(iVar9 + -0x23b) ^ 2;
              if ((bVar8 & 7) != 0) {
                if (*(int *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                  fn_82F63108();
                }
                (**(int (***)())(**(int **)(param_1 + 0x80) + 4))
                          (*(int **)(param_1 + 0x80),*(unsigned int *)(param_1 + 0x10),param_2,
                           iVar9 + 0x20,iVar9 + -8,iVar9 + -4,iVar9,iVar9 + 0x10);
              }
              uVar6 = uVar6 | 0x80;
              *(unsigned char *)(iVar9 + -0x23b) = bVar8;
            }
            *(unsigned short *)(iVar9 + -0x23a) = uVar6;
          }
        }
      }
      uVar4 = uVar4 + 0x560;
      iVar9 = iVar9 + 0x560;
    } while (uVar4 < uVar1);
  }
  return;
}

