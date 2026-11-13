typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_822B9390();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_822B91F8(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 in_r0;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  unsigned int *puVar8;
  int *piVar9;
  unsigned int uVar10;
  __int64 lVar11;
  unsigned char in_vr0 [16];
  unsigned char auVar12 [16];
  unsigned char in_vr12 [16];
  unsigned char in_vr13 [16];
  unsigned char auVar13 [16];
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;

  iVar1 = *(int *)(param_2 + 0x8c0);
  if (*(int *)(iVar1 + 0x90) == 0) {
    fn_822B9390(param_1,param_3,param_4);
LAB_822b9380:
    uVar5 = 1;
  }
  else {
    iVar2 = *(int *)(param_3 + 0x8c0);
    if (iVar2 != 0) {
      piVar9 = (int *)(param_1 + 0x10);
      uVar10 = 0;
      do {
        if (*piVar9 == 0) {
          if ((iVar1 == 0) || (piVar9 = *(int **)(iVar1 + 0x1b4), piVar9 == (int *)0x0)) {
            iVar6 = -1;
          }
          else {
            iVar6 = (**(int (***)())(*piVar9 + 0x14))(piVar9,param_4);
          }
          param_1 = uVar10 * 0x40 + param_1;
          *(int *)(param_1 + 0x14) = iVar6;
          *(short *)(param_1 + 0x18) = (short)param_4;
          if (iVar6 < 0) {
LAB_822b9354:
            *(unsigned int *)(param_1 + 0x10) = 0;
            *(unsigned short *)(param_1 + 0x18) = 0x5b;
            *(unsigned int *)(param_1 + 0x14) = 0xffffffff;
            return 0;
          }
          iVar6 = *(int *)(param_1 + 0x14);
          iVar7 = (**(int (***)())**(unsigned int **)(iVar1 + 0x1b4))();
          if (iVar7 < iVar6) goto LAB_822b9354;
          *(int *)(param_1 + 0x10) = param_3;
          uVar5 = (**(int (***)())(**(int **)(iVar1 + 0x1b4) + 0xc))(*(int **)(iVar1 + 0x1b4),iVar6);
          loadVectorLeftIndexed128(uVar5,0x10);
          loadVectorLeftIndexed128(uVar5,0xc);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar13, &_vt0, 16); }
          loadVectorLeftIndexed128(uVar5,0x14);
          loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr12,4,3); memcpy(auVar12, &_vt1, 16); }
          puVar3 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
          *puVar3 = in_register_000104d0;
          puVar3[1] = in_register_000104d4;
          puVar3[2] = in_register_000104d8;
          puVar3[3] = in_vr77;
          puVar8 = (unsigned int *)(param_3 + 0x1dc);
          lVar11 = 2;{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar13,auVar12,3,2); memcpy(auVar12, &_vt2, 16); }
          memcpy((void *)((const void *)(param_1 + 0x20U & 0xfffffff0)), auVar12, 16);
          *(unsigned int *)(param_3 + 0x1b4) = 1;
          *(unsigned int *)(iVar2 + 0x90) = 1;
          do {
            puVar4 = puVar8 + 1;
            puVar8 = puVar8 + 1;
            *puVar8 = *puVar4 | 2;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          *(unsigned int *)(param_1 + 0x48) = 0;
          goto LAB_822b9380;
        }
        uVar10 = uVar10 + 1;
        piVar9 = piVar9 + 0x10;
      } while (uVar10 < 2);
    }
    uVar5 = 0;
  }
  return uVar5;
}
