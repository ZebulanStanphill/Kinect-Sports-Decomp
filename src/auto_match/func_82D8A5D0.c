typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82CE5410();


void fn_82D8A5D0(int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  unsigned int *puVar8;
  
  puVar8 = *(unsigned int **)(param_1 + 0x98);
  if (puVar8 != (unsigned int *)0x0) {
    iVar5 = 0;
    if (*(unsigned short *)(param_1 + 0x204) != 0) {
      piVar7 = *(int **)(param_1 + 0x200);
      do {
        if ((unsigned int *)*piVar7 == puVar8 + 2) goto LAB_82d8a628;
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar5 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x204));
    }
    iVar5 = -1;
LAB_82d8a628:
    *(unsigned int *)(iVar5 * 4 + *(int *)(param_1 + 0x200)) = 0;
    (**(int (***)())*puVar8)(puVar8,1);
    *(unsigned int *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 100) == 0) {
    iVar5 = fn_82CE5410();
    piVar7 = *(int **)(iVar5 + 0x10);
    *(unsigned int *)(param_1 + 100) = 0;
    if ((*(unsigned int *)(param_1 + 0x68) & 0x80000000) == 0) {
      (**(int (***)())(*piVar7 + 0x10))
                (piVar7,*(unsigned int *)(param_1 + 0x60),*(unsigned int *)(param_1 + 0x68) & 0x3fffffff,8);
    }
    *(unsigned int *)(param_1 + 0x60) = 0;
    *(unsigned int *)(param_1 + 0x68) = 0x80000000;
  }
  if (*(short *)(param_1 + 0xb0) == 0) {
    uVar1 = *(unsigned short *)(param_1 + 0xb2);
    if ((uVar1 & 0x8000) == 0) {
      uVar2 = *(unsigned int *)(param_1 + 0xac);
      iVar5 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 8))
                (*(int **)(iVar5 + 0x10),uVar2,
                 (((unsigned __int64)uVar1 & 0x3fff) + ((unsigned __int64)uVar1 & 0x3fff) * 2) * 0x10);
    }
    *(unsigned int *)(param_1 + 0xac) = 0;
    *(unsigned short *)(param_1 + 0xb0) = 0;
    *(unsigned short *)(param_1 + 0xb2) = *(unsigned short *)(param_1 + 0xb2) & 0x4000 | 0x8000;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    iVar5 = fn_82CE5410();
    piVar7 = *(int **)(iVar5 + 0x10);
    *(unsigned int *)(param_1 + 0xb8) = 0;
    if ((*(unsigned int *)(param_1 + 0xbc) & 0x80000000) == 0) {
      (**(int (***)())(*piVar7 + 0x10))
                (piVar7,*(unsigned int *)(param_1 + 0xb4),*(unsigned int *)(param_1 + 0xbc) & 0x3fffffff,4);
    }
    *(unsigned int *)(param_1 + 0xb4) = 0;
    *(unsigned int *)(param_1 + 0xbc) = 0x80000000;
  }
  if (*(int *)(param_1 + 0xc4) == 0) {
    iVar5 = fn_82CE5410();
    piVar7 = *(int **)(iVar5 + 0x10);
    *(unsigned int *)(param_1 + 0xc4) = 0;
    if ((*(unsigned int *)(param_1 + 200) & 0x80000000) == 0) {
      (**(int (***)())(*piVar7 + 0x10))
                (piVar7,*(unsigned int *)(param_1 + 0xc0),*(unsigned int *)(param_1 + 200) & 0x3fffffff,1);
    }
    *(unsigned int *)(param_1 + 0xc0) = 0;
    *(unsigned int *)(param_1 + 200) = 0x80000000;
  }
  bVar3 = false;
  iVar5 = 0;
  if (*(short *)(param_1 + 0x204) != 0) {
    piVar7 = *(int **)(param_1 + 0x200);
    do {
      if (*piVar7 != 0) {
        bVar3 = true;
        break;
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar5 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x204));
  }
  if (!bVar3) {
    uVar1 = *(unsigned short *)(param_1 + 0x206);
    if ((uVar1 & 0x8000) == 0) {
      uVar2 = *(unsigned int *)(param_1 + 0x200);
      iVar5 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 8))
                (*(int **)(iVar5 + 0x10),uVar2,((unsigned __int64)uVar1 & 0x3fff) << 2);
    }
    *(unsigned int *)(param_1 + 0x200) = 0;
    *(unsigned short *)(param_1 + 0x204) = 0;
    *(unsigned short *)(param_1 + 0x206) = *(unsigned short *)(param_1 + 0x206) & 0x4000 | 0x8000;
  }
  puVar8 = *(unsigned int **)(param_1 + 0x214);
  bVar3 = false;
  if (puVar8 != (unsigned int *)0x0) {
    iVar5 = 0;
    if (*(short *)(puVar8 + 1) != 0) {
      piVar7 = (int *)*puVar8;
      do {
        if (*piVar7 != 0) {
          bVar3 = true;
          break;
        }
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar5 < (int)(unsigned int)*(unsigned short *)(puVar8 + 1));
    }
    if (!bVar3) {
      uVar1 = *(unsigned short *)((int)puVar8 + 6);
      if ((uVar1 & 0x8000) == 0) {
        uVar2 = *puVar8;
        iVar5 = fn_82CE5410();
        (**(int (***)())(**(int **)(iVar5 + 0x10) + 8))
                  (*(int **)(iVar5 + 0x10),uVar2,((unsigned __int64)uVar1 & 0x3fff) << 2);
      }
      *puVar8 = 0;
      *(unsigned short *)(puVar8 + 1) = 0;
      *(unsigned short *)((int)puVar8 + 6) = *(unsigned short *)((int)puVar8 + 6) & 0x4000 | 0x8000;
    }
  }
  iVar5 = *(int *)(param_1 + 0x214);
  bVar4 = false;
  if (iVar5 != 0) {
    puVar8 = (unsigned int *)(iVar5 + 8);
    iVar6 = 0;
    if (*(short *)(iVar5 + 0xc) != 0) {
      piVar7 = (int *)*puVar8;
      do {
        if (*piVar7 != 0) {
          bVar4 = true;
          break;
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar6 < (int)(unsigned int)*(unsigned short *)(iVar5 + 0xc));
    }
    if (!bVar4) {
      uVar1 = *(unsigned short *)(iVar5 + 0xe);
      if ((uVar1 & 0x8000) == 0) {
        uVar2 = *puVar8;
        iVar6 = fn_82CE5410();
        (**(int (***)())(**(int **)(iVar6 + 0x10) + 8))
                  (*(int **)(iVar6 + 0x10),uVar2,((unsigned __int64)uVar1 & 0x3fff) << 2);
      }
      *puVar8 = 0;
      *(unsigned short *)(iVar5 + 0xc) = 0;
      *(unsigned short *)(iVar5 + 0xe) = *(unsigned short *)(iVar5 + 0xe) & 0x4000 | 0x8000;
    }
  }
  if ((!bVar3) && (!bVar4)) {
    puVar8 = *(unsigned int **)(param_1 + 0x214);
    if (puVar8 != (unsigned int *)0x0) {
      uVar1 = *(unsigned short *)((int)puVar8 + 0xe);
      if ((uVar1 & 0x8000) == 0) {
        uVar2 = puVar8[2];
        iVar5 = fn_82CE5410();
        (**(int (***)())(**(int **)(iVar5 + 0x10) + 8))
                  (*(int **)(iVar5 + 0x10),uVar2,((unsigned __int64)uVar1 & 0x3fff) << 2);
      }
      uVar1 = *(unsigned short *)((int)puVar8 + 6);
      if ((uVar1 & 0x8000) == 0) {
        uVar2 = *puVar8;
        iVar5 = fn_82CE5410();
        (**(int (***)())(**(int **)(iVar5 + 0x10) + 8))
                  (*(int **)(iVar5 + 0x10),uVar2,((unsigned __int64)uVar1 & 0x3fff) << 2);
      }
      iVar5 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 8))(*(int **)(iVar5 + 0x10),puVar8,0x10);
    }
    *(unsigned int *)(param_1 + 0x214) = 0;
  }
  if (*(short *)(param_1 + 0x20c) == 0) {
    uVar1 = *(unsigned short *)(param_1 + 0x20e);
    if ((uVar1 & 0x8000) == 0) {
      uVar2 = *(unsigned int *)(param_1 + 0x208);
      iVar5 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 8))
                (*(int **)(iVar5 + 0x10),uVar2,((unsigned __int64)uVar1 & 0x3fff) << 2);
    }
    *(unsigned int *)(param_1 + 0x208) = 0;
    *(unsigned short *)(param_1 + 0x20c) = 0;
    *(unsigned short *)(param_1 + 0x20e) = *(unsigned short *)(param_1 + 0x20e) & 0x4000 | 0x8000;
  }
  return;
}

