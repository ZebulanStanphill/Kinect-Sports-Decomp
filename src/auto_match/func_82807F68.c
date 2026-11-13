typedef unsigned char bool;
extern int fn_82807E08();
extern unsigned int uStack_a0;


void fn_82807F68(int param_1,int param_2,int param_3,int param_4,unsigned short *param_5,unsigned short *param_6,
                  int param_7,unsigned __int64 param_8)

{
  float fVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  int (**pcVar5)();
  unsigned int uVar8;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned short uVar12;
  double dVar13;
  double dVar14;
  unsigned short uStack_a0;
  
  uStack_a0 = *param_5;
  uVar11 = (unsigned __int64)uStack_a0;
  uVar8 = (unsigned int)*param_6;
  bVar2 = **(unsigned char **)(param_2 + 0x24);
  uVar9 = 0x80;
  do {
    uVar12 = (unsigned short)uVar11;
    if (*(unsigned short *)(param_1 + 0x1e) <= uVar8) break;
    iVar10 = uVar8 * 4;
    dVar13 = (double)*(float *)(*(int *)(param_1 + 4) + iVar10);
    if ((bVar2 & uVar9) == 0) {
      *(unsigned int *)((int)(uVar11 << 2) + param_3) =
           *(unsigned int *)(iVar10 + *(int *)(param_1 + 8));
      *(unsigned int *)((unsigned int)uStack_a0 * 4 + param_4) =
           *(unsigned int *)(iVar10 + *(int *)(param_1 + 8));
LAB_82808194:
      if ((param_8 & 0xffffffff) != 0) {
LAB_828081e4:
        uVar11 = (unsigned __int64)uStack_a0;
        goto LAB_828081e8;
      }
LAB_8280819c:
      if (((param_7 == 0) || (*(int *)(param_2 + 0x3c) == 0)) ||
         (pcVar5 = *(int (***)())(*(int *)(param_2 + 0x3c) + iVar10), pcVar5 == (int (**)())0x0))
      goto LAB_828081e4;
      (*pcVar5)((double)*(float *)(param_2 + 0x40),param_3,param_4);
      uVar11 = (unsigned __int64)uStack_a0;
    }
    else {
      if (((unsigned __int64)bVar2 & uVar9 >> 3) != 0) {
        if (*(char *)(param_1 + 0x26) == '\0') {
          lVar6 = (__int64)**(short **)(param_2 + 0x28);
          *(short **)(param_2 + 0x28) = *(short **)(param_2 + 0x28) + 1;
        }
        else {
          lVar6 = (__int64)**(int **)(param_2 + 0x2c);
          *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
        }
        fVar1 = (float)((double)lVar6 * dVar13);
        *(float *)((int)(uVar11 << 2) + param_3) = fVar1;
LAB_82808160:
        *(float *)((unsigned int)uStack_a0 * 4 + param_4) = fVar1;
        goto LAB_82808194;
      }
      if (*(char *)(param_1 + 0x26) == '\0') {
        lVar6 = (__int64)**(short **)(param_2 + 0x28);
        *(short **)(param_2 + 0x28) = *(short **)(param_2 + 0x28) + 1;
      }
      else {
        lVar6 = (__int64)**(int **)(param_2 + 0x2c);
        *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
      }
      dVar14 = (double)lVar6;
      if (*(char *)(param_1 + 0x26) == '\0') {
        bVar4 = *(unsigned char *)(param_2 + 0x45);
        bVar3 = **(unsigned char **)(param_2 + 0x30);
        *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + bVar4;
        bVar3 = bVar3 >> ((bVar4 & 0xf) << 2) & 0xf;
        *(bool *)(param_2 + 0x45) = bVar4 == 0;
      }
      else {
        bVar3 = **(unsigned char **)(param_2 + 0x30);
        *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
      }
      fn_82807E08(param_2,bVar3 + 1,param_8);
      if ((param_8 & 0xffffffff) == 0) {
        if (((*(int *)(param_2 + 0x38) == 0) ||
            (pcVar5 = *(int (***)())(*(int *)(param_2 + 0x38) + iVar10), pcVar5 == (int (**)())0x0)) &&
           (pcVar5 = *(int (***)())(param_2 + 0x34), pcVar5 == (int (**)())0x0)) {
          dVar14 = (double)(float)((double)*(unsigned int *)(param_2 + 0x14) + dVar14);
          *(float *)((int)(uVar11 << 2) + param_3) = (float)(dVar14 * dVar13);
          fVar1 = (float)(dVar14 * dVar13);
          goto LAB_82808160;
        }
        (*pcVar5)((double)*(float *)(param_2 + 0x40),param_2 + 0x10);
        goto LAB_8280819c;
      }
LAB_828081e8:
      uVar7 = uVar11 + 1;
      uVar11 = uVar7 & 0xffff;
      uStack_a0 = (unsigned short)uVar7;
    }
    uVar12 = (unsigned short)uVar11;
    uVar9 = uVar9 >> 1;
    uVar8 = uVar8 + 1 & 0xffff;
  } while (uVar9 != 0x10);
  *param_5 = uVar12;
  *param_6 = (unsigned short)uVar8;
  return;
}

