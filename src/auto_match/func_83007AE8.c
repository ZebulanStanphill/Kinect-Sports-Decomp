#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82FAB9C0();
extern int fn_83006458();
extern int fn_83006FF8();
extern int fn_83007088();
extern int fn_83007488();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_832642E0;
extern unsigned int uStack_48;
extern unsigned int uStack_51;


unsigned __int64 fn_83007AE8(int *param_1,int *param_2,unsigned __int64 param_3,char param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  unsigned char bVar4;
  int iVar5;
  char *pcVar6;
  unsigned __int64 uVar7;
  int *piVar8;
  unsigned char *puVar9;
  unsigned char *puVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  __int64 lVar13;
  unsigned char uStack_51;
  int iStack_50;
  int iStack_4c;
  unsigned char uStack_48;
  
  uVar7 = (**(int (***)())(*param_1 + 0x128))();
  if ((int)uVar7 != 1) {
    return uVar7;
  }
  if (param_4 != '\0') {
    return uVar7;
  }
  iVar5 = *(int *)*param_2;
  *param_2 = (int)((int *)*param_2 + 1);
  if (iVar5 != 0) {
    piVar8 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4);
    if (piVar8 == (int *)0x0) {
      return 2;
    }
    uVar7 = (**(int (***)())(*piVar8 + 100))(piVar8,param_1[3]);
    (**(int (***)())(*piVar8 + 8))(piVar8);
    if ((int)uVar7 != 1) {
      return uVar7;
    }
  }
  iVar5 = *(int *)*param_2;
  *param_2 = (int)((int *)*param_2 + 1);
  if ((iVar5 != 0) &&
     (piVar8 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4), piVar8 != (int *)0x0)) {
    uVar7 = (**(int (***)())(*piVar8 + 100))(piVar8,param_1[3]);
    (**(int (***)())(*piVar8 + 8))(piVar8);
    if ((int)uVar7 != 1) {
      return uVar7;
    }
  }
  pcVar6 = (char *)*param_2;
  cVar1 = *pcVar6;
  *param_2 = (int)(pcVar6 + 1);
  cVar2 = pcVar6[1];
  *param_2 = (int)(pcVar6 + 2);
  cVar3 = pcVar6[2];
  iStack_50 = (int)(cVar1 >> 7);
  iStack_4c = (int)cVar1;
  lVar13 = CONCAT44(iStack_50,iStack_4c);
  *param_2 = (int)(pcVar6 + 3);
  cVar1 = pcVar6[3];
  *param_2 = (int)(pcVar6 + 4);
  iStack_50 = (int)(cVar1 >> 7);
  iStack_4c = (int)cVar1;
  param_1[0xd] = (int)(float)lVar13;
  param_1[0xe] = (int)(float)CONCAT44(iStack_50,iStack_4c);
  *(unsigned char *)((int)param_1 + 0x3d) =
       ((cVar3 != '\0') << 1 | cVar2 != '\0') << 3 | *(unsigned char *)((int)param_1 + 0x3d) & 0xe7;
  if (((((int)uVar7 == 1) &&
       (uVar7 = (**(int (***)())(*param_1 + 0x124))(param_1,param_2,param_3), (int)uVar7 == 1)) &&
      (uVar7 = (**(int (***)())(*param_1 + 300))(param_1,param_2,param_3), (int)uVar7 == 1)) &&
     (uVar7 = (**(int (***)())(*param_1 + 0x130))(param_1,param_2,param_3), (int)uVar7 == 1)) {
    uVar12 = 0;
    bVar4 = *(unsigned char *)*param_2;
    *param_2 = (int)((unsigned char *)*param_2 + 1);
    *(unsigned char *)((int)param_1 + 0x3e) = (bVar4 & 0x1f) << 1 | *(unsigned char *)((int)param_1 + 0x3e) & 0xc1;
    uVar11 = (unsigned int)*(unsigned short *)*param_2;
    *param_2 = (int)((unsigned short *)*param_2 + 1);
    if (uVar11 != 0) {
      do {
        iVar5 = *param_2;
        puVar9 = &uStack_51;
        puVar10 = (unsigned char *)(iVar5 + -1);
        lVar13 = 9;
        do {
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
          *puVar9 = *puVar10;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        *param_2 = iVar5 + 9;
        if ((((unsigned __int64)(iStack_4c) >> 0) & 0xFF) == '\0') {
          uVar7 = fn_83006FF8(param_1,iStack_50);
        }
        else {
          uVar7 = fn_83007088(param_1,CONCAT31((((unsigned __int64)(iStack_4c) >> 8) & 0xFFFFFF),uStack_48),iStack_50);
        }
        if ((int)uVar7 != 1) {
          return uVar7;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar11);
    }
    uVar7 = fn_83006458(param_1,param_2,param_3);
    if ((int)uVar7 == 1) {
      uVar7 = fn_83007488(param_1,param_2,param_3);
    }
  }
  return uVar7;
}

