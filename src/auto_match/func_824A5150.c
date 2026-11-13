extern unsigned int *auStack_38;
extern unsigned int fStack_28;
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_824A5150(int param_1,int *param_2)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  int in_r0;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_40;
  int iStack_3c;
  unsigned char auStack_38 [8];
  float afStack_30 [2];
  float fStack_28;
  
  (**(int (***)())*param_2)(param_2,auStack_38,&uStack_40);
  (**(int (***)())(*param_2 + 4))(param_2,uStack_40,&iStack_3c);
  fVar1 = *(float *)(param_1 + 0x3c);
  puVar2 = (unsigned int *)(*(int *)(iStack_3c + 0x40) + 0xc0U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  iVar4 = ((-(unsigned int)(*(char *)(param_1 + 0x38) != '\0') & 5) + 10) * 0x40 +
          *(int *)(iStack_3c + 0x40);
  puVar3 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar2 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar2 = (unsigned int *)(iVar4 + 0x10U & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  uVar5 = (unsigned int)(fVar1 < fStack_28 - fStack_28);
  *(unsigned int *)(param_1 + 0x44) = uVar5;
  if (((uVar5 == 0) || (afStack_30[0] < -*(float *)(param_1 + 0x40))) ||
     (*(float *)(param_1 + 0x40) <= afStack_30[0])) {
    puVar2 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
  }
  else {
    puVar2 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
  }
  return;
}

