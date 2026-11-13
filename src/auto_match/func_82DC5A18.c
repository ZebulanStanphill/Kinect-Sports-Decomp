extern int fn_82CE5410();


void fn_82DC5A18(int param_1,unsigned int *param_2,unsigned int *param_3,int *param_4,int *param_5,
                  int *param_6,int *param_7,int *param_8)

{
  short sVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  int iVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  unsigned __int64 *puVar12;
  unsigned __int64 *puVar13;
  unsigned __int64 uVar14;
  unsigned int *in_stack_00000054;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  int in_stack_0000006c;
  int *in_stack_00000074;
  char in_stack_0000007f;
  char in_stack_00000087;
  int *in_stack_0000008c;
  
  iVar3 = *param_8;
  uVar4 = *in_stack_00000054;
  iVar9 = fn_82CE5410();
  puVar10 = (unsigned int *)
            (**(int (***)())(**(int **)(iVar9 + 0x10) + 4))(*(int **)(iVar9 + 0x10),0x1000);
  if (puVar10 == (unsigned int *)0x0) {
    puVar10 = (unsigned int *)0x0;
  }
  else {
    puVar10[5] = 0;
    puVar10[4] = 0;
    *puVar10 = 0;
  }
  if ((unsigned int *)*param_4 == (unsigned int *)0x0) {
    if (in_stack_0000007f == '\0') {
      *param_2 = puVar10;
      param_2[1] = 0;
    }
  }
  else {
    *(unsigned int *)*param_4 = puVar10;
    *(int *)(*param_4 + 0x10) = *param_8;
  }
  param_2[1] = param_2[1] + 1;
  puVar10[1] = param_1;
  puVar10[5] = in_stack_0000005c[1];
  puVar10[2] = *(unsigned int *)(param_1 + 0x30);
  puVar10[3] = iVar3;
  uVar14 = (unsigned __int64)(unsigned int)in_stack_0000005c[1];
  if (0 < in_stack_0000005c[1]) {
    iVar9 = 0;
    puVar6 = puVar10;
    do {
      puVar13 = (unsigned __int64 *)(*in_stack_0000005c + iVar9);
      puVar8 = *(unsigned int **)(*in_stack_0000005c + iVar9);
      if ((*(unsigned char *)((int)puVar8 + 0x12) & 0xb) != 0) {
        iVar5 = in_stack_0000008c[1];
        in_stack_0000008c[1] = iVar5 + 1;
        puVar12 = (unsigned __int64 *)(iVar5 * 0x10 + *in_stack_0000008c);
        uVar11 = *puVar13;
        *(unsigned int **)(puVar12 + 1) = puVar6 + 6;
        *puVar12 = uVar11;
      }
      iVar9 = iVar9 + 8;
      puVar6[6] = puVar8[3];
      *(unsigned short *)(puVar6 + 0xb) = *(unsigned short *)(puVar8 + 4);
      puVar6[7] = *puVar8;
      puVar6[8] = puVar8[7];
      *(unsigned short *)((int)puVar6 + 0x2e) = *(unsigned short *)(puVar8 + 8);
      sVar1 = *(short *)((int)puVar13 + 4);
      *(short *)((int)puVar6 + 0x32) = *(short *)((int)puVar13 + 6) + 1;
      *(short *)(puVar6 + 0xc) = sVar1 + 1;
      puVar6[9] = puVar8[1] + 0xf0;
      puVar6[10] = puVar8[2] + 0xf0;
      *param_8 = (unsigned int)*(unsigned short *)(puVar8 + 5) + *param_8;
      *in_stack_00000054 = (unsigned int)*(unsigned short *)(puVar8 + 6) * 4 + *in_stack_00000054;
      uVar14 = uVar14 - 1;
      puVar6 = puVar6 + 7;
    } while (uVar14 != 0);
  }
  in_stack_0000005c[1] = 0;
  iVar9 = *param_8;
  *param_8 = iVar9 + 0x10;
  puVar10[4] = iVar9 + 0x10;
  *in_stack_00000054 = *in_stack_00000054 + 0xf & 0xfffffff0;
  *param_4 = (int)puVar10;
  if (in_stack_00000087 != '\0') {
    iVar9 = fn_82CE5410();
    puVar10 = (unsigned int *)
              (**(int (***)())(**(int **)(iVar9 + 0x10) + 4))(*(int **)(iVar9 + 0x10),0x30);
    if (puVar10 == (unsigned int *)0x0) {
      puVar10 = (unsigned int *)0x0;
    }
    else {
      *puVar10 = 0;
      *(unsigned char *)(puVar10 + 7) = 0;
      *(unsigned short *)((int)puVar10 + 0x1e) = 0;
      puVar10[8] = 0;
    }
    if ((unsigned int *)*param_5 != (unsigned int *)0x0) {
      *(unsigned int *)*param_5 = puVar10;
    }
    if (in_stack_0000006c != *in_stack_00000064) {
      if (in_stack_0000006c == 0) {
        *param_3 = puVar10;
      }
      *in_stack_00000064 = in_stack_0000006c;
      if (*param_5 != 0) {
        uVar2 = *(unsigned short *)*in_stack_00000074;
        for (puVar6 = (unsigned int *)*param_6;
            (puVar6 != (unsigned int *)0x0 && (puVar6 != (unsigned int *)*param_7));
            puVar6 = (unsigned int *)*puVar6) {
          *(unsigned short *)((int)puVar6 + 0x1e) = uVar2;
          puVar6[8] = *param_7;
        }
        *(unsigned char *)(*param_5 + 0x1c) = 1;
        *in_stack_00000074 = *param_5 + 0x1e;
      }
      *param_6 = *param_7;
      *param_7 = (int)puVar10;
    }
    *(short *)*in_stack_00000074 = *(short *)*in_stack_00000074 + 1;
    puVar10[1] = param_1;
    uVar7 = *(unsigned int *)(param_1 + 0x30);
    puVar10[4] = uVar4;
    puVar10[3] = iVar3;
    puVar10[2] = uVar7;
    puVar10[5] = *param_8 - iVar3;
    puVar10[6] = *in_stack_00000054 - uVar4;
    *param_5 = (int)puVar10;
  }
  return;
}

