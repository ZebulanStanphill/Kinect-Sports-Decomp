extern unsigned int *auStack_40;
extern int fn_8256B190();
extern int fn_8284DF78();


unsigned char fn_8256AB40(int *param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  char cVar4;
  unsigned char bVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char auStack_40 [16];
  
  bVar5 = 1;
  lVar6 = 0;
  iVar1 = *(int *)(*param_1 + 0x1c);
  if (0 < iVar1) {
    do {
      fn_8284DF78(*param_1,lVar6);
      if (*(int *)(param_2 + 0x14) != 0) {
        cVar4 = fn_8256B190((double)*(unsigned char *)(*(int *)(*(int *)(*(int *)(param_2 + 0x14) + 8)
                                                            + 0x14) + 0x30));
        puVar2 = (unsigned int *)((unsigned int)(auStack_40 + (int)in_r0) & 0xfffffff0);
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        bVar5 = -(cVar4 != '\0') & bVar5;
        puVar3 = (unsigned int *)((int)in_r0 + param_2 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
      }
      lVar6 = lVar6 + 1;
      param_2 = param_2 + 0x20;
    } while ((int)lVar6 < iVar1);
  }
  return bVar5;
}

