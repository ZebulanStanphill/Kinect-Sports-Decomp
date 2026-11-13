#define true 1
extern int fn_82AA66A8();
extern int fn_82B4B300();
extern int fn_82B4DE70();
extern int fn_82F68CC0();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int uStack_3c;


unsigned __int64 fn_82B507E0(int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  int iStack_40;
  unsigned char uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  do {
    while( true ) {
      if (param_2 == 0) {
        if (((param_1[7] & 1U) != 0) || (param_1[7] == 0)) {
          return 0;
        }
        param_2 = fn_82B4DE70(param_1);
      }
      iVar3 = *(int *)(param_2 + 4);
      if (iVar3 != 1) break;
      iVar3 = *(int *)(param_2 + 0xc);
      if (iVar3 != 0) {
        iStack_34 = param_1[3];
        iStack_30 = param_1[2];
        iStack_2c = param_1[4];
        iStack_38 = 0;
        uStack_3c = 0;
        iStack_40 = iVar3;
        if ((param_1[7] & 1U) == 0) {
          uVar2 = param_1[6] & 0xfffffffe;
          iVar3 = uVar2 - 4;
          if ((iVar3 == 0) || (*(unsigned int *)(uVar2 + 8) < *(int *)(uVar2 + 4) + 1U)) goto LAB_82b509b4;
        }
        else {
LAB_82b509b4:
          iVar3 = fn_82B4B300(param_1 + 6,1);
        }
        iVar1 = *(int *)(iVar3 + 8);
        *(int *)(iVar3 + 8) = iVar1 + 1;
        fn_82F68CC0(iVar1 * 0x18 + iVar3 + 0x10,&iStack_40,0x18);
      }
      param_2 = *(int *)(param_2 + 8);
LAB_82b509e8:
      *(unsigned char *)(param_1 + 8) = 1;
    }
    if (iVar3 != 6) {
      if (iVar3 != 8) {
        if (iVar3 != 9) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(*(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94),0x12c1);
        }
        *param_1 = param_2;
        if ((*(int *)(param_2 + 0x1c) != 0) && (*(int *)(param_2 + 0x20) != 0)) {
          param_1[1] = *(int *)(param_2 + 0x20) * *(int *)(param_2 + 0x1c);
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(*(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94),0x12c1);
      }
      puVar4 = (unsigned int *)(param_2 + 0x14);
      if (*(int *)(param_2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(*(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94),0x12c1);
      }
      param_2 = *(int *)(param_2 + 0x10);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(*(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94),0x12c1);
      }
      if (1 < *puVar4) {
        iStack_34 = param_1[3];
        iStack_38 = *puVar4 - 2;
        iStack_30 = param_1[2];
        iStack_2c = param_1[4];
        uStack_3c = 1;
        iStack_40 = param_2;
        if ((param_1[7] & 1U) == 0) {
          uVar2 = param_1[6] & 0xfffffffe;
          iVar3 = uVar2 - 4;
          if ((iVar3 == 0) || (*(unsigned int *)(uVar2 + 8) < *(int *)(uVar2 + 4) + 1U)) goto LAB_82b508c4;
        }
        else {
LAB_82b508c4:
          iVar3 = fn_82B4B300(param_1 + 6,1);
        }
        iVar1 = *(int *)(iVar3 + 8);
        *(int *)(iVar3 + 8) = iVar1 + 1;
        fn_82F68CC0(iVar1 * 0x18 + iVar3 + 0x10,&iStack_40,0x18);
      }
      goto LAB_82b509e8;
    }
    if (*(int *)(param_2 + 0x10) != 1) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(*(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94),0x12c1);
    }
    iVar3 = *(int *)(param_2 + 0x18);
    if (*(int *)(iVar3 + 4) != 0xb) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(*(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94),0x12c1);
    }
    if (param_1[2] == 0) {
      iVar1 = *(int *)(iVar3 + 0x3c);
      param_1[5] = 0;
      param_1[2] = iVar1;
    }
    if (param_1[3] == 0) {
      param_1[3] = *(int *)(iVar3 + 0x40);
    }
    param_1[4] = *(int *)(iVar3 + 0x48);
    param_2 = *(int *)(iVar3 + 0x30);
  } while( true );
}

