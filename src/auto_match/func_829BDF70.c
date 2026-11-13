typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_829BC7D8();
extern int fn_829BD568();
extern int fn_829BD7B8();
extern int fn_829BDA18();
extern int fn_829BDB30();


void fn_829BDF70(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  bool bVar5;
  int (**pcVar6)();
  int iVar7;
  unsigned int *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  unsigned int *puVar12;
  
  iVar2 = param_1[0x70];
  bVar5 = false;
  uVar4 = (unsigned int)LZCOUNT(param_1[0x65]) >> 5;
  if (uVar4 == 0) {
    if ((param_1[0x66] < param_1[0x65]) || (0x3f < param_1[0x66])) {
      bVar5 = true;
    }
    bVar1 = param_1[0x53] == 1;
  }
  else {
    bVar1 = param_1[0x66] == 0;
  }
  if (!bVar1) {
    bVar5 = true;
  }
  if ((param_1[0x67] != 0) && (param_1[0x68] != param_1[0x67] + -1)) {
    bVar5 = true;
  }
  if ((0xd < param_1[0x68]) || (bVar5)) {
    *(unsigned int *)(*param_1 + 0x14) = 0x10;
    *(int *)(*param_1 + 0x18) = param_1[0x65];
    *(int *)(*param_1 + 0x1c) = param_1[0x66];
    *(int *)(*param_1 + 0x20) = param_1[0x67];
    *(int *)(*param_1 + 0x24) = param_1[0x68];
    (**(int (***)())*param_1)(param_1);
  }
  iVar7 = 0;
  if (0 < param_1[0x53]) {
    piVar10 = param_1 + 0x54;
    do {
      iVar3 = *(int *)(*piVar10 + 4);
      piVar9 = (int *)(iVar3 * 0x100 + param_1[0x29]);
      if ((uVar4 == 0) && (*piVar9 < 0)) {
        *(unsigned int *)(*param_1 + 0x14) = 0x73;
        *(int *)(*param_1 + 0x18) = iVar3;
        *(unsigned int *)(*param_1 + 0x1c) = 0;
        (**(int (***)())(*param_1 + 4))(param_1,0xffffffffffffffff);
      }
      iVar11 = param_1[0x65];
      if (iVar11 <= param_1[0x66]) {
        piVar9 = piVar9 + iVar11 + -1;
        do {
          if (param_1[0x67] != (-(piVar9[1] >> 0x1f) - 1U & piVar9[1])) {
            *(unsigned int *)(*param_1 + 0x14) = 0x73;
            *(int *)(*param_1 + 0x18) = iVar3;
            *(int *)(*param_1 + 0x1c) = iVar11;
            (**(int (***)())(*param_1 + 4))(param_1,0xffffffffffffffff);
          }
          iVar11 = iVar11 + 1;
          piVar9 = piVar9 + 1;
          *piVar9 = param_1[0x68];
        } while (iVar11 <= param_1[0x66]);
      }
      iVar7 = iVar7 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar7 < param_1[0x53]);
  }
  if (param_1[0x67] == 0) {
    if (uVar4 == 0) {
      pcVar6 = fn_829BD7B8;
    }
    else {
      pcVar6 = fn_829BD568;
    }
  }
  else if (uVar4 == 0) {
    pcVar6 = fn_829BDB30;
  }
  else {
    pcVar6 = fn_829BDA18;
  }
  *(int (***)())(iVar2 + 4) = pcVar6;
  iVar7 = 0;
  if (0 < param_1[0x53]) {
    puVar8 = (unsigned int *)(iVar2 + 0x14);
    piVar10 = param_1 + 0x54;
    do {
      if (uVar4 == 0) {
        iVar3 = *(int *)(*piVar10 + 0x18);
        puVar12 = (unsigned int *)((iVar3 + 0xb) * 4 + iVar2);
        fn_829BC7D8(param_1,0,iVar3,puVar12);
        *(unsigned int *)(iVar2 + 0x3c) = *puVar12;
      }
      else if (param_1[0x67] == 0) {
        iVar3 = *(int *)(*piVar10 + 0x14);
        fn_829BC7D8(param_1,1,iVar3,(iVar3 + 0xb) * 4 + iVar2);
      }
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = 0;
      piVar10 = piVar10 + 1;
    } while (iVar7 < param_1[0x53]);
  }
  *(unsigned int *)(iVar2 + 8) = 0;
  *(unsigned int *)(iVar2 + 0x10) = 0;
  *(unsigned int *)(iVar2 + 0xc) = 0;
  *(unsigned int *)(iVar2 + 0x14) = 0;
  *(int *)(iVar2 + 0x28) = param_1[0x46];
  return;
}

