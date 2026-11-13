extern int fn_82761DE8();
extern int fn_827B36A8();
extern int fn_827B3C10();
extern int fn_827B44F8();
extern int fn_827B4A50();
extern int fn_82F68918();
extern unsigned int lbl_820151B8;
extern float lbl_820151BC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8276F5E8(int param_1,int param_2,int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  double dVar8;
  double dVar9;
  
  piVar3 = (int *)(**(int (***)())(**(int **)(*param_3 + 0xc) + 0x18))
                            (*(int **)(*param_3 + 0xc),param_3[1],0);
  if (piVar3 != (int *)0x0) {
    (**(int (***)())(*piVar3 + 0x18))
              ((double)((lbl_820151B8 / (float)(__int64)*(int *)(param_1 + 0xc)) * 0.5f),
               piVar3,param_1 + 0x100);
    iVar5 = param_1 + 0x94;
    fn_827B3C10(iVar5);
    fn_827B4A50((double)((float)(__int64)*(int *)(param_1 + 0xc) * lbl_820151BC),iVar5,
                    param_1 + 0x100);
    cVar4 = fn_827B44F8(iVar5);
    if (cVar4 != '\0') {
      uVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 0xec) - (unsigned __int64)*(unsigned int *)(param_1 + 0xe4)) + 1;
      dVar8 = (double)fn_82F68918((double)(float)param_3[4]);
      uVar1 = *(unsigned int *)(param_1 + 0x10);
      dVar9 = (double)fn_82F68918((double)(float)param_3[5]);
      iVar2 = *(int *)(param_1 + 0x10);
      uVar7 = 0;
      if ((uVar6 & 0xffffffff) != 0) {
        do {
          fn_827B36A8(iVar5,uVar7,
                            (__int64)((int)uVar7 + (int)dVar9 + iVar2) *
                            (__int64)*(int *)(param_2 + 0x14) +
                            (unsigned __int64)*(unsigned int *)(param_2 + 0x18) +
                            (unsigned __int64)(unsigned int)(int)dVar8 + (unsigned __int64)uVar1,1);
          uVar7 = uVar7 + 1;
        } while ((uVar7 & 0xffffffff) < (uVar6 & 0xffffffff));
      }
    }
    fn_82761DE8(piVar3);
  }
  return;
}

