typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_82528FA8();
extern int fn_8252A1B0();
extern unsigned int lbl_821CA460;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82441D38(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned int uVar5;
  int iVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar9 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010430;
  unsigned int in_register_00010434;
  unsigned int in_register_00010438;
  unsigned int in_vr67;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  
  piVar1 = *(int **)(param_1 + 4);
  puVar3 = (unsigned int *)((unsigned int)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  if (piVar1[1] != 0) {
    iVar2 = *piVar1;
    uStack00000030 = param_3;
    uStack00000038 = param_4;
    if (iVar2 == 0) {
      puVar3 = *(unsigned int **)(param_1 + 4);
      uVar5 = fn_82528FA8((double)lbl_821CA460,param_2,puVar3 + 1,&stack0x00000020,
                                &stack0x00000030,param_5,0);
      *puVar3 = uVar5;
      lVar8 = 2;
      puVar7 = (unsigned int *)(**(int **)(param_1 + 4) + 0x1dc);
      do {
        puVar4 = puVar7 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar4 | 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    else {
      iVar6 = fn_825279F8(iVar2);
      if ((iVar6 == 0) || (iVar6 == 3)) {
        puVar3 = (unsigned int *)(in_r0 + iVar2 + 0x70 & 0xfffffff0);
        *puVar3 = in_register_00010010;
        puVar3[1] = in_register_00010014;
        puVar3[2] = in_register_00010018;
        puVar3[3] = in_vr1;
      }
      else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs38,in_vs45); memcpy(auVar9, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar9); memcpy(auVar9, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs40,in_vs41,auVar9); memcpy(auVar9, &_vt2, 16); }
        vectorConditionalSelect(auVar9,in_vs32,in_vs44);
        puVar3 = (unsigned int *)(in_r0 + iVar2 + 0x70 & 0xfffffff0);
        *puVar3 = in_register_00010430;
        puVar3[1] = in_register_00010434;
        puVar3[2] = in_register_00010438;
        puVar3[3] = in_vr67;
      }
      puVar3 = (unsigned int *)(in_r0 + iVar2 + 0x70 & 0xfffffff0);
      uVar5 = *puVar3;
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      *(unsigned int *)(iVar2 + 0x170) = 0;
      puVar3 = (unsigned int *)(iVar2 + 0x60U & 0xfffffff0);
      *puVar3 = uVar5;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      fn_82528948(iVar2);
      fn_8252A1B0(**(unsigned int **)(param_1 + 4),&stack0x00000030,0);
    }
    piVar1 = *(int **)(param_1 + 4);
    iVar2 = piVar1[0xb];
    if (*piVar1 != 0) {
      iVar6 = *(int *)(*piVar1 + 0x1d0);
      if (iVar6 == iVar2) {
        if (iVar2 == 0) {
          iVar6 = iVar6 + 1;
        }
        else {
          iVar6 = iVar6 + -1;
        }
        *(int *)(*piVar1 + 0x1d0) = iVar6;
      }
    }
    *(int *)(*(int *)(param_1 + 4) + 0x2c) = iVar2;
  }
  return;
}

