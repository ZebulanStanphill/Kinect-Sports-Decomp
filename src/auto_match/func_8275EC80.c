typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_82685B28();
extern int fn_82685EC0();
extern int fn_8268D0C8();
extern int fn_82693410();
extern int fn_8269AC18();
extern int fn_826EB6B8();
extern int fn_826ED8F0();
extern int fn_826EE248();
extern int fn_8275CE20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_82006848;
extern unsigned int lbl_820069B4;
extern unsigned int lbl_820147D8;
extern unsigned int lbl_82021534;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_de;


void fn_8275EC80(int *param_1,int *param_2,char param_3,int param_4)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  __int64 *plVar4;
  int iVar7;
  __int64 lVar5;
  int iVar8;
  __int64 lVar6;
  char cVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  unsigned char bStack_e0;
  char cStack_df;
  unsigned char uStack_de;
  
  piVar2 = (int *)*param_2;
  iVar8 = *piVar2;
  iVar3 = *(int *)(piVar2[6] + 0x14);
  if (((*(unsigned int *)(iVar8 + 0x14) & 0x10) == 0) ||
     (bVar13 = true, (*(unsigned int *)(iVar8 + 0x1c) & 0x100) == 0)) {
    bVar13 = false;
  }
  if (((!bVar13) ||
      ((((*(unsigned int *)(iVar8 + 0x1c) >> 9 & 1) == 0 && ((*(unsigned char *)(param_1 + 9) & 1) != 0)) ||
       (param_3 != '\0')))) || (cVar9 = '\x01', piVar2[0x13] != 0)) {
    cVar9 = '\0';
  }
  uVar12 = 0;
  if ((((*(unsigned char *)(param_1 + 9) & 0x80) != 0) && (param_4 != 0)) &&
     ((*(unsigned char *)(param_4 + 0x66) & 1) != 0)) {
    uVar12 = fn_8269AC18((double)(*(float *)(iVar8 + 0x10) * (float)piVar2[9]),param_4);
  }
  iVar7 = param_1[8];
  if (((iVar7 == 0) || ((uVar12 & 0xffffffff) != 0)) || (cVar9 != *(char *)(iVar7 + 0x15))) {
    dVar14 = (double)fn_8268D0C8(param_2 + 3);
    if (((double)lbl_820069B4 <= ABS(dVar14)) &&
       (((bVar13 = lbl_82002AE0 <= ABS((float)param_2[0x10]),
         lbl_82006848 <= ABS((float)param_2[0xf]) || (bVar13)) || (*(int *)(*param_2 + 0x4c) != 0)))
       ) {
      fVar1 = (float)((double)*(float *)(*param_2 + 0x24) * dVar14);
      dVar14 = (double)fVar1;
      if ((uVar12 & 0xffffffff) == 0) {
        if (cVar9 == '\0') {
          cStack_df = (char)((((unsigned __int64)((unsigned int)fVar1 >> 0x17) & 0xff) - 0x40 & 0xffffffff) >> 1);
        }
        else {
          cStack_df = (char)((unsigned int)((float)(dVar14 * (double)lbl_820147D8) *
                                   (float)(dVar14 * (double)lbl_820147D8)) >> 0x17) + -0x40;
        }
        uVar11 = 3;
        uVar10 = 0;
        uStack_de = (unsigned char)
                    ((((unsigned __int64)(*(unsigned int *)(iVar8 + 0x10) >> 0x17) & 0xff) - 0x40 & 0xffffffff) >>
                    1);
        bStack_e0 = (unsigned char)(((unsigned __int64)(*(unsigned int *)(iVar8 + 0x14) >> 4) & 2 | (unsigned __int64)bVar13) << 1)
                    | 1U - (cVar9 == '\0');
      }
      else {
        fn_8275CE20((double)lbl_821AAD20,uVar12,&bStack_e0);
        uVar11 = 0x54;
        uVar10 = 1;
      }
      iVar7 = fn_82685B28(iVar3,param_1,param_4,uVar10,&bStack_e0,uVar11);
      if (iVar7 == 0) {
        plVar4 = *(__int64 **)(*param_2 + 0x48);
        lVar5 = fn_82693410();
        fVar1 = lbl_82021534;
        dVar15 = (double)(float)((double)lbl_8200571C / dVar14);
        *(int *)(*(int *)(*param_2 + 0x48) + 8) = *(int *)(*(int *)(*param_2 + 0x48) + 8) + 1;
        dVar14 = (double)((float)((double)*(float *)(iVar8 + 0x10) * dVar15) * fVar1);
        iVar8 = fn_8267B890(*(unsigned int *)(iVar3 + 8),0x70,0);
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = fn_826EE248(dVar15,dVar14);
        }
        *(bool *)(iVar8 + 0x17) = bVar13;
        (**(int (***)())(*param_1 + 0x10))(dVar14,param_1,iVar8);
        lVar6 = fn_82693410();
        *plVar4 = (lVar6 - lVar5) + *plVar4;
        fn_826EB6B8(iVar8,uVar10,&bStack_e0,uVar11,param_4);
        fn_826ED8F0(iVar8,param_2,uVar12 != 0);
        fn_82685EC0(iVar3,param_1,iVar8);
      }
      else {
        *(unsigned char *)(iVar7 + 0x19) = 1;
        fn_826ED8F0(iVar7,param_2,uVar12 != 0);
        *(unsigned char *)(iVar7 + 0x19) = 0;
      }
    }
    if ((uVar12 & 0xffffffff) != 0) {
      fn_8267C498(uVar12);
    }
  }
  else {
    fn_826ED8F0(iVar7,param_2,0);
  }
  return;
}

