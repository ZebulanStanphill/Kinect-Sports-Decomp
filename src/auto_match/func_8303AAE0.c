extern unsigned int fStack_70;
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8303A888();
extern int fn_8303A930();
extern int fn_8303AA38();
extern unsigned int lbl_8201546C;
extern unsigned int lbl_8217BA98;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


void fn_8303AAE0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  float fVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fStack_70;
  unsigned int uStack_6c;
  unsigned __int64 uStack_68;
  
  puVar3 = (unsigned int *)fn_82F6A548();
  uStack_6c = *puVar3;
  iVar1 = (int)param_2;
  uVar7 = (unsigned __int64)*(unsigned short *)((int)puVar3 + 0xe);
  dVar10 = (double)*(float *)(iVar1 + 0x10);
  dVar9 = (double)(float)((double)*(float *)(iVar1 + 0x14) - dVar10);
  puVar5 = (unsigned int *)param_3;
  if (uVar7 != 0) {
    dVar11 = (double)lbl_821AAD20;
    dVar12 = (double)lbl_8201546C;
    do {
      uVar8 = 0x80;
      if ((uVar7 & 0xffffffff) < 0x81) {
        uVar8 = uVar7;
      }
      if (*(unsigned int *)(iVar1 + 0x18) < 8) {
        uVar6 = *(unsigned int *)(iVar1 + 0x18) + 1;
        fStack_70 = (float)dVar11;
        uStack_68 = (unsigned __int64)uVar6;
        *(unsigned int *)(iVar1 + 0x18) = uVar6;
        *(float *)(iVar1 + 0x10) =
             (float)((double)(float)((double)uStack_68 * dVar9) * dVar12 + dVar10);
        puVar4 = (unsigned int *)fn_8303A930(puVar3,*(unsigned char *)(iVar1 + 0x20),&fStack_70);
        if (((unsigned int)puVar4 & 0xff) == 0) {
          puVar3 = (unsigned int *)fn_8303AA38((double)fStack_70,puVar4,param_2);
        }
        else {
          puVar3 = puVar4;
          if (*(char *)(iVar1 + 0x21) == '\0') {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
          }
        }
        *(char *)(iVar1 + 0x21) = (char)puVar4;
      }
      if (*(char *)(iVar1 + 0x21) == '\0') {
        puVar3 = (unsigned int *)fn_8303A888(param_3,param_2,&uStack_6c,uVar8);
      }
      uVar7 = uVar7 - uVar8;
    } while (uVar7 != 0);
  }
  fVar2 = lbl_8217BA98;
  puVar5[2] = ((float)puVar5[2] + lbl_8217BA98) - lbl_8217BA98;
  puVar5[3] = ((float)puVar5[3] + fVar2) - fVar2;
  fn_82F6A594();
  return;
}

