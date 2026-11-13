extern int fn_822AA770();
extern int fn_82399BA0();
extern int fn_82399CB8();
extern int fn_8239FC88();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D2B38;
extern unsigned int lbl_831D2B80;


void fn_8239FAD8(double param_1,int param_2)

{
  unsigned char *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  *(float *)(param_2 + 0x290) = (float)(param_1 + (double)*(float *)(param_2 + 0x290));
  iVar2 = *(int *)(*(int *)(param_2 + 0x240) + 0x54);
  if (iVar2 == 3) {
    if (*(int *)(param_2 + 0x28c) == 4) {
      return;
    }
    *(unsigned int *)(param_2 + 0x28c) = 4;
    *(unsigned int *)(param_2 + 0x290) = ltcg_pool_0_0f;
    uVar5 = -((int)*(unsigned int *)(param_2 + 0x288) >> 0x1f) - 1U & *(unsigned int *)(param_2 + 0x288);
    goto LAB_8239fc6c;
  }
  if (iVar2 != 6) {
    if (iVar2 == 7) {
      if (*(int *)(param_2 + 0x28c) == 1) {
        return;
      }
      if (*(int *)(param_2 + 0x28c) == 2) {
        return;
      }
      iVar2 = fn_82399CB8();
      iVar2 = fn_822AA770(*(unsigned int *)
                                 (**(int **)(*(int *)(param_2 + 0x240) + 8) + iVar2 * 4));
      uVar3 = 1;
      if (iVar2 == 0) {
        uVar3 = 2;
      }
      fn_8239FC88(param_2,uVar3,1);
      return;
    }
    if (iVar2 == 0x10) {
      return;
    }
    iVar2 = fn_82399BA0();
    if (iVar2 != 0) {
      return;
    }
    if (*(int *)(param_2 + 0x28c) == 0) {
      return;
    }
    uVar4 = -(unsigned int)(*(int *)(param_2 + 0x28c) != 4) & 1;
    *(unsigned int *)(param_2 + 0x290) = ltcg_pool_0_0f;
    *(unsigned int *)(param_2 + 0x28c) = 0;
    uVar5 = *(unsigned int *)(param_2 + 0x288);
    if ((int)*(unsigned int *)(param_2 + 0x288) < (int)uVar4) {
      uVar5 = uVar4;
    }
    goto LAB_8239fc6c;
  }
  if (*(int *)(*(int *)(param_2 + 0x240) + 0x860) == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x28c) == 3) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0x298);
  if (iVar2 == 0) {
    puVar1 = &lbl_831D2B38;
LAB_8239fc08:
    *(unsigned char **)(param_2 + 0x280) = puVar1;
  }
  else if (iVar2 == 1) {
    puVar1 = &lbl_831D2B80;
    goto LAB_8239fc08;
  }
  uVar5 = *(unsigned int *)(param_2 + 0x288);
  *(int *)(param_2 + 0x298) = 1 - iVar2;
  *(unsigned int *)(param_2 + 0x28c) = 3;
  *(unsigned int *)(param_2 + 0x290) = ltcg_pool_0_0f;
  if ((int)uVar5 < 1) {
    uVar5 = 1;
  }
LAB_8239fc6c:
  *(unsigned int *)(param_2 + 0x288) = uVar5;
  return;
}

