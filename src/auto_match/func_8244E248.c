extern int fn_822ABA88();
extern int fn_8242C410();
extern int fn_82437130();
extern int fn_8243D2D8();
extern int fn_8244FE38();
extern int fn_82450238();
extern int fn_82450348();
extern int fn_82508078();
extern unsigned int ltcg_pool_0_0f;


void fn_8244E248(double param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  double dVar11;
  
  iVar5 = *(int *)(param_2 + 0x44);
  if (*(char *)(iVar5 + 0xe0) == '\0') {
    uVar7 = 1;
    lVar8 = 0;
    uVar10 = (unsigned __int64)**(unsigned int **)(param_2 + 0x40);
    iVar3 = fn_8242C410(uVar10);
    if (0 < iVar3) {
      lVar9 = 0;
      do {
        piVar2 = *(int **)(**(int **)((int)uVar10 + 8) + (int)lVar9);
        iVar3 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),0);
        if ((*(int *)(*(int *)(iVar3 + 0x14) + 0x1d0) == 0) &&
           (**(float **)(iVar3 + 0x1a0) < *(float *)(iVar5 + 0xd8))) {
          uVar7 = 0;
          break;
        }
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 4;
        iVar3 = fn_8242C410(uVar10);
      } while ((int)lVar8 < iVar3);
    }
    if ((*(float *)(iVar5 + 0xdc) <= *(float *)(param_2 + 0x38)) || ((uVar7 & 0xff) == 0)) {
      if ((*(float *)(param_2 + 0x38) < *(float *)(iVar5 + 0xdc)) || ((uVar7 & 0xff) != 0))
      goto LAB_8244e498;
      uVar6 = 0xffffffff821b9fdc;
    }
    else {
      uVar6 = 0xffffffff821b9fcc;
    }
    uVar1 = *(unsigned int *)((int)uVar10 + 0xa4);
    uVar6 = fn_82437130(param_2,uVar6);
    fn_82508078(uVar1,uVar6,0);
    *(unsigned char *)(*(int *)(param_2 + 0x44) + 0xe0) = 1;
  }
  else if (*(char *)(iVar5 + 0xf0) == '\0') {
    iVar3 = fn_82450348(param_2,1);
    if (*(float *)(iVar5 + 0xec) < **(float **)(iVar3 + 0x1a0)) {
      uVar4 = fn_82450238(param_2,iVar3);
      if (uVar4 < 4) {
        uVar1 = *(unsigned int *)(**(int **)(param_2 + 0x40) + 0xa4);
        uVar6 = fn_82437130(param_2,0xffffffff821b9fe8);
        fn_82508078(uVar1,uVar6,0);
      }
      *(unsigned char *)(*(int *)(param_2 + 0x44) + 0xf0) = 1;
    }
  }
  else if (*(char *)(iVar5 + 0xf8) == '\0') {
    iVar3 = fn_82450348(param_2,1);
    if (*(float *)(iVar5 + 0xf4) < **(float **)(iVar3 + 0x1a0)) {
      if ((*(float **)(iVar3 + 0x1a0))[8] == 0.0) {
        uVar4 = fn_82450238(param_2,iVar3);
        if (uVar4 < 4) {
          uVar6 = 0xffffffff821ba000;
        }
        else {
          iVar5 = fn_82450238(param_2,iVar3);
          if (iVar5 == 5) {
            uVar6 = 0xffffffff821ba00c;
          }
          else {
            uVar6 = 0xffffffff821ba018;
          }
        }
      }
      else {
        uVar6 = 0xffffffff821b9ff4;
      }
      uVar1 = *(unsigned int *)(**(int **)(param_2 + 0x40) + 0xa4);
      uVar6 = fn_82437130(param_2,uVar6);
      fn_82508078(uVar1,uVar6,0);
      *(unsigned char *)(*(int *)(param_2 + 0x44) + 0xf8) = 1;
    }
  }
LAB_8244e498:
  uVar7 = (unsigned __int64)*(unsigned int *)(param_2 + 0x44);
  if (*(int *)(*(unsigned int *)(param_2 + 0x44) + 0x11c) == 0) {
    lVar8 = 0;
    uVar10 = (unsigned __int64)**(unsigned int **)(param_2 + 0x40);
    iVar5 = fn_8242C410(uVar10);
    if (0 < iVar5) {
      dVar11 = (double)*(float *)((int)uVar7 + 0x120);
      lVar9 = 0;
      do {
        piVar2 = *(int **)(**(int **)((int)uVar10 + 8) + (int)lVar9);
        iVar5 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),0);
        if (dVar11 < (double)**(float **)(iVar5 + 0x1a0)) {
          *(unsigned int *)((int)uVar7 + 0x11c) = 1;
          fn_8243D2D8((unsigned __int64)*(unsigned int *)(**(int **)(param_2 + 0x40) + 0x174) + 8,
                            0xffffffff821ba020,0,0);
          break;
        }
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 4;
        iVar5 = fn_8242C410(uVar10);
      } while ((int)lVar8 < iVar5);
    }
  }
  iVar5 = *(int *)(param_2 + 0x44);
  if (((*(char *)(iVar5 + 0xfc) == '\0') && (ltcg_pool_0_0f <= *(float *)(iVar5 + 0x108))) &&
     (*(float *)(iVar5 + 0x108) = (float)((double)*(float *)(iVar5 + 0x108) + param_1),
     *(float *)(*(int *)(param_2 + 0x44) + 0x104) < *(float *)(*(int *)(param_2 + 0x44) + 0x108))) {
    fn_8244FE38(param_2);
  }
  return;
}

