extern unsigned int *auStack_6c;
extern int fn_8284D780();
extern int fn_8284F8A0();
extern int fn_82850A78();
extern int fn_82850D08();
extern int fn_8285A7F8();
extern int fn_8285A830();
extern int fn_8285AE70();


void fn_8284FA10(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned int *puVar6;
  char *pcVar7;
  char *pcVar8;
  unsigned int uVar9;
  unsigned char bVar10;
  int iVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned int *puStack_70;
  unsigned int auStack_6c;
  
  fn_8285AE70();
  iVar4 = fn_8285A830(param_1,param_2);
  fn_8284D780(param_3,&puStack_70);
  if ((puStack_70 != (unsigned int *)0x0) && (uVar9 = 0, *(int *)(param_1 + 0x60) != 0)) {
    do {
      iVar12 = uVar9 << 3;
      bVar10 = *(unsigned char *)(*(int *)(iVar4 + 0x2c) + uVar9);
      if ((int)(unsigned int)*(unsigned short *)(param_1 + 0x44) < iVar12) {
        return;
      }
      if (bVar10 != 0) {
        iVar11 = uVar9 << 5;
        do {
          if (((iVar12 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x44)) && ((bVar10 & 0x80) != 0)) &&
             (piVar3 = *(int **)(*(int *)(param_1 + 0x40) + iVar11), *piVar3 != -1)) {
            iVar5 = fn_8285AE70(param_1);
            if (iVar5 == 0) {
              puVar6 = (unsigned int *)fn_8285A7F8(piVar3,param_2);
              if (*puVar6 < *puStack_70) {
                fn_82850A78(puStack_70,*puVar6,&auStack_6c);
                fn_82850D08(auStack_6c,1,param_4,0);
                if (piVar3[0x10] != 0) {
                  fn_8284F8A0(piVar3[0x10],param_2,param_3,param_4);
                }
              }
            }
            else {
              uVar13 = 0;
              if (*puStack_70 != 0) {
                iVar5 = 0;
                puVar6 = puStack_70;
                do {
                  pcVar7 = (char *)piVar3[0xe];
                  pcVar8 = *(char **)(puVar6[1] + iVar5 + 4);
                  do {
                    cVar1 = *pcVar8;
                    cVar2 = *pcVar7;
                    if (cVar1 == '\0') break;
                    pcVar8 = pcVar8 + 1;
                    pcVar7 = pcVar7 + 1;
                  } while (cVar1 == cVar2);
                  if (cVar1 == cVar2) {
                    fn_82850D08(puVar6[1] + iVar5,1,param_4,0);
                    puVar6 = puStack_70;
                  }
                  uVar13 = uVar13 + 1;
                  iVar5 = iVar5 + 0x50;
                } while (uVar13 < *puVar6);
              }
            }
          }
          bVar10 = bVar10 << 1;
          iVar12 = iVar12 + 1;
          iVar11 = iVar11 + 4;
        } while (bVar10 != 0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(unsigned int *)(param_1 + 0x60));
  }
  return;
}

