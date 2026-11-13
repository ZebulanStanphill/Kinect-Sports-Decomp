extern int fn_8275AAF0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;


void fn_8270DF10(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  float *pfVar1;
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar2;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  float *pfVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  iVar3 = fn_82F6A548();
  if (*(int *)(iVar3 + 0x148) != 0) {
    piVar4 = (int *)fn_8275AAF0(param_3);
    if (piVar4 != (int *)0x0) {
      uVar2 = (**(int (***)())(*piVar4 + 0xc))(piVar4,*(unsigned int *)(*param_2 + 0xc));
      (**(int (***)())(*piVar4 + 0x14))(&iStack_60,piVar4);
      iStack_58 = iStack_58 - iStack_60;
      if (((__int64)(iStack_54 - iStack_5c) * (__int64)iStack_58 != 0) &&
         ((unsigned __int64)*(unsigned int *)(iVar3 + 0x150) != (uVar2 & 0xffffffff))) {
        uVar5 = (**(int (***)())(*piVar4 + 4))(piVar4);
        iVar7 = iStack_54 - iStack_5c;
        dVar12 = (double)(float)((double)(__int64)iStack_58 / (double)uVar5);
        uVar5 = (**(int (***)())(*piVar4 + 8))(piVar4);
        dVar10 = (double)(__int64)iStack_60;
        dVar11 = (double)(float)((double)(__int64)iVar7 / (double)uVar5);
        uVar5 = (**(int (***)())(*piVar4 + 4))(piVar4);
        dVar9 = (double)(__int64)iStack_5c;
        dVar10 = (double)(float)(dVar10 / (double)uVar5);
        uVar5 = (**(int (***)())(*piVar4 + 8))(piVar4);
        uVar6 = 0;
        if (*(int *)(iVar3 + 0x148) != 0) {
          pfVar8 = (float *)(iVar3 + -4);
          do {
            uVar6 = uVar6 + 1;
            pfVar1 = pfVar8 + 9;
            pfVar8[6] = (float)((double)pfVar8[6] * dVar12 + dVar10);
            pfVar8[7] = (float)((double)pfVar8[7] * dVar11 + (double)(float)(dVar9 / (double)uVar5))
            ;
            pfVar8[8] = (float)((double)pfVar8[8] * dVar12 + dVar10);
            pfVar8 = pfVar8 + 9;
            *pfVar8 = (float)((double)*pfVar1 * dVar11 + (double)(float)(dVar9 / (double)uVar5));
          } while (uVar6 < *(unsigned int *)(iVar3 + 0x148));
        }
        *(int *)(iVar3 + 0x150) = (int)uVar2;
      }
      (**(int (***)())(**(int **)(*param_2 + 0xc) + 0x68))
                (*(int **)(*param_2 + 0xc),iVar3 + 4,*(unsigned int *)(iVar3 + 0x148),0,
                 *(unsigned int *)(iVar3 + 0x148),uVar2,param_4,0);
    }
  }
  fn_82F6A594();
  return;
}

