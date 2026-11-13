#define true 1
extern unsigned int lbl_82186E6C;


unsigned __int64
fn_83005A08(int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,char param_5)

{
  short sVar1;
  int iVar2;
  float fVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  int iVar9;
  int *piVar10;
  double dVar11;
  double dVar12;
  
  sVar1 = *(short *)((int)param_2 + 0x2a);
  if (param_1[0x11] != 0) {
    dVar11 = (double)(**(int (***)())(*param_1 + 0x114))(param_1,param_4);
    dVar12 = (double)(**(int (***)())(*param_1 + 0x118))(param_1,param_4);
    if (param_5 == '\0') {
      param_2[1] = (float)((double)(float)param_2[1] + dVar11);
      param_2[3] = (float)((double)(float)param_2[3] + dVar12);
    }
    else {
      piVar10 = *(int **)(param_1[0x11] + 4);
      param_2[1] = (float)dVar11;
      param_2[3] = (float)dVar12;
      if (sVar1 == 0) {
        *param_2 = piVar10;
        *(unsigned short *)((int)param_2 + 0x2a) = 0xffff;
      }
      (**(int (***)())(*piVar10 + 0x100))(piVar10,param_2,param_3,param_4,0);
      fVar3 = lbl_82186E6C;
      piVar10 = param_1;
      do {
        iVar9 = piVar10[5];
        piVar10 = (int *)piVar10[4];
        if (iVar9 != 0) goto LAB_83005af4;
      } while (piVar10 != (int *)0x0);
    }
  }
  goto LAB_83005ba8;
  while( true ) {
    param_2[2] = (float)(__int64)*(short *)(iVar9 + 0x2c) * fVar3 + (float)param_2[2];
    iVar9 = *(int *)(iVar9 + 0x14);
    if (iVar9 == 0) break;
LAB_83005af4:
    iVar2 = *(int *)(iVar9 + 0x28);
    uVar7 = 0;
    if (iVar2 != 0) {
      lVar6 = -(unsigned __int64)*(unsigned int *)(iVar2 + 0x30) + -1;
      lVar4 = -(unsigned __int64)*(unsigned int *)(iVar2 + 0x24) + -1;
      lVar8 = -(unsigned __int64)*(unsigned int *)(iVar2 + 0x18) + -1;
      lVar5 = -(unsigned __int64)*(unsigned int *)(iVar2 + 0xc) + -1;
      uVar7 = lVar6 + (-(unsigned __int64)(lVar6 == 0) - (-(unsigned __int64)*(unsigned int *)(iVar2 + 0x30) + -2)) |
              lVar4 + (-(unsigned __int64)(lVar4 == 0) - (-(unsigned __int64)*(unsigned int *)(iVar2 + 0x24) + -2)) |
              lVar8 + (-(unsigned __int64)(lVar8 == 0) - (-(unsigned __int64)*(unsigned int *)(iVar2 + 0x18) + -2)) |
              lVar5 + (-(unsigned __int64)(lVar5 == 0) - (-(unsigned __int64)*(unsigned int *)(iVar2 + 0xc) + -2));
    }
    if ((uVar7 & 0xff) != 0) break;
  }
LAB_83005ba8:
  piVar10 = (int *)param_1[4];
  if (piVar10 != (int *)0x0) {
    (**(int (***)())(*piVar10 + 0x100))(piVar10,param_2,param_3,param_4,0);
  }
  return 1;
}

