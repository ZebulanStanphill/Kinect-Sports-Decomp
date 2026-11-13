extern int fn_82CE5410();
extern int fn_82CF24D0();
extern int fn_82CF28E8();
extern unsigned int lbl_8200133C;


unsigned __int64 fn_82CF3218(__int64 param_1,__int64 param_2,int *param_3,int param_4,int *param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  float afStack_80 [2];
  int aiStack_78 [30];
  
  uVar2 = *(unsigned int *)(param_4 + 4);
  if (0 < param_3[1]) {
    uVar9 = (unsigned __int64)(uVar2 >> 0x1f) - (unsigned __int64)(1 < uVar2) & 0x20;
    if (((int)uVar9 <= (int)param_1) &&
       (uVar3 = *(unsigned int *)(param_4 + 0x14), (int)param_1 < (int)uVar3)) {
      uVar6 = (unsigned __int64)*(unsigned int *)(param_4 + 0xc) + (unsigned __int64)*(unsigned int *)(param_4 + 8);
      uVar7 = (__int64)(int)uVar6 * (__int64)param_3[1] + (unsigned __int64)*(unsigned int *)(param_4 + 0x10);
      iVar5 = (int)uVar7;
      if ((-1 < (int)param_2) && ((int)param_2 < (int)((__int64)iVar5 * (__int64)(int)uVar2))) {
        uVar8 = ((__int64)iVar5 * (__int64)(int)uVar2 - param_2) - 1;
        aiStack_78[0] = 0;
        aiStack_78[2] = 0x80000000;
        afStack_80[0] = lbl_8200133C;
        aiStack_78[1] = 0;
        uVar10 = uVar8 - (__int64)((int)uVar8 / iVar5) * (__int64)iVar5;
        trapWord(6,uVar7,0);
        iVar5 = (int)uVar8 / iVar5;
        trapWord(6,uVar7,0);
        trapWord(5,uVar7 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff)
        ;
        trapWord(5,uVar7 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff)
        ;
        iVar1 = (int)uVar10 / (int)uVar6;
        trapWord(6,uVar6,0);
        trapWord(5,uVar6 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),
                 0xffff);
        fn_82CF28E8(param_3,param_4,param_5,afStack_80,aiStack_78);
        uVar4 = fn_82CF24D0((double)afStack_80[0],(double)*(float *)(iVar5 * 4 + aiStack_78[0]),
                              *(unsigned int *)(iVar1 * 0xc + *param_5),iVar5,param_1 - uVar9,
                              (unsigned __int64)*(unsigned int *)(iVar1 * 4 + *param_3) + 0x30,uVar3 - uVar9);
        iVar5 = fn_82CE5410();
        aiStack_78[1] = 0;
        if ((aiStack_78[2] & 0x80000000U) != 0) {
          return uVar4;
        }
        (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
                  (*(int **)(iVar5 + 0x10),aiStack_78[0],aiStack_78[2] & 0x3fffffff,4);
        return uVar4;
      }
    }
  }
  return 0;
}

