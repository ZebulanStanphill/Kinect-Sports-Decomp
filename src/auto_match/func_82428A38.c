extern unsigned int *auStack_e0;
extern int fn_8229F910();
extern int fn_822B17A8();
extern int fn_8235F928();
extern int fn_82417F58();
extern int fn_82428E10();
extern int fn_82508078();
extern int fn_82526C70();
extern int fn_82536070();
extern int fn_82536590();
extern unsigned int iStack_ec;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B0;
extern unsigned int ltcg_pool_0_0f;


void fn_82428A38(int param_1,int param_2,unsigned int param_3,char param_4,unsigned int *param_5)

{
  char cVar1;
  unsigned int uVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  unsigned int uVar6;
  char *pcVar7;
  double dVar8;
  int iStack_ec;
  unsigned char auStack_e0 [224];
  
  uVar2 = *(unsigned int *)(param_2 + 0x30);
  *param_5 = 0;
  iVar4 = *(int *)(param_1 + 8);
  if ((*(int *)(param_1 + 4) == *(int *)(iVar4 + 0x2b20)) && (*(int *)(iVar4 + 0x2b98) != 1)) {
    fn_82536070(iVar4 + 0x12fc,iVar4 + 0x137c);
    *(unsigned int *)(iVar4 + 0x2b98) = 1;
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    uVar6 = (param_3 & 0xff) + *(int *)(param_2 + 0x30);
    *(unsigned int *)(param_2 + 0x30) = uVar6;
    if (0x15d < uVar6) {
      iVar4 = fn_82417F58(*(unsigned int *)(param_1 + 4));
      if (((iVar4 != 0) && (*(int *)(iVar4 + 0x24) != 0)) &&
         (iVar4 = *(int *)(*(int *)(iVar4 + 0x24) + 0x34), iVar4 != 0)) {
        fn_822B17A8(iVar4,0xf,0);
      }
    }
    dVar8 = (double)ltcg_pool_0_0f;
    if ((*(int *)(param_1 + 0x28) == 0) || (*(unsigned int *)(param_2 + 0x30) < *(unsigned int *)(param_1 + 0x2c)))
    {
      if (param_4 == '\0') {
        *param_5 = 1;
        iVar4 = *(int *)(param_1 + 8);
        if ((*(int **)(param_1 + 4) == *(int **)(iVar4 + 0x2b20)) && (*(int *)(iVar4 + 0x2b84) == 0)
           ) {
          pcVar5 = (char *)(**(int **)(param_1 + 4) + 0x127c);
          pcVar7 = pcVar5;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          if ((int)pcVar7 - (int)pcVar5 == 1) {
            if (*(int *)(iVar4 + 0xcb8) != 0) {
              *(unsigned int *)(iVar4 + 0x2ba0) = 1;
            }
            if (*(int *)(iVar4 + 0x2b98) == 1) {
              pcVar5 = (char *)(iVar4 + 0xf7c);
            }
            else if (*(int *)(iVar4 + 0x2b98) == 2) {
              pcVar5 = (char *)(iVar4 + 0xfbc);
            }
            else {
              pcVar5 = (char *)(iVar4 + 0xf3c);
            }
          }
          fn_82526C70(auStack_e0,0x80,0xffffffff821b26d0,iVar4 + 0xe7c,pcVar5);
          fn_82536070(iVar4 + 0xe3c,auStack_e0);
          if (*(int *)(iVar4 + 0x2b80) == 0) {
            if (*(int *)(iVar4 + 0xc0c) != 0) {
              fn_82536590(iVar4 + 0xd6c,0);
            }
            *(unsigned int *)(iVar4 + 0x2b80) = 1;
          }
        }
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
      }
      else if ((double)*(float *)(param_1 + 0x3c) == dVar8) {
        if (*(unsigned int **)(param_1 + 4) == *(unsigned int **)(*(int *)(param_1 + 8) + 0x2b20)) {
          fn_8235F928(*(int *)(param_1 + 8),(unsigned __int64)**(unsigned int **)(param_1 + 4) + 0x12bc,1);
        }
        *(unsigned int *)(param_1 + 0x3c) = lbl_8218E8E8;
      }
    }
    else {
      fn_82428E10(param_1,param_2);
    }
    if (((dVar8 < (double)*(float *)(param_1 + 0x20)) && (uVar2 < *(unsigned int *)(param_2 + 0x48))) &&
       (*(unsigned int *)(param_2 + 0x48) <= *(unsigned int *)(param_2 + 0x30))) {
      fn_82536590((unsigned __int64)*(unsigned int *)(param_1 + 8) + 0xe1c,0);
      fn_82536590((unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x1578,0);
      fn_8229F910((double)*(float *)(param_1 + 0x20),dVar8,
                        *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xd4) + 0xc),
                        0xffffffff820e975c);
      *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + *(float *)(param_1 + 0x20);
      fVar3 = lbl_821917B0;
      iStack_ec = (int)(__int64)*(float *)(param_1 + 0x20);
      *(int *)(param_2 + 0xe4) = iStack_ec + *(int *)(param_2 + 0xe4);
      *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) - fVar3;
      *(int *)(param_2 + 0x48) = *(int *)(param_1 + 0x24) + *(int *)(param_2 + 0x48);
      if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
        fn_82508078(*(unsigned int *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b8664,0);
      }
      *(int *)(param_2 + 0x19c) = *(int *)(param_2 + 0x19c) + 1;
    }
    if ((uVar2 < *(unsigned int *)(param_2 + 0x30)) &&
       (*(unsigned int *)(param_1 + 0x50) <= *(unsigned int *)(param_2 + 0x30))) {
      if (*(int *)(param_1 + 4) == *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
        fn_82508078(*(unsigned int *)(*(int *)(param_1 + 8) + 0xa4),0xffffffff821b8664,0);
      }
      *(unsigned int *)(param_1 + 0x50) =
           (*(unsigned int *)(param_2 + 0x30) / *(unsigned int *)(param_1 + 0x4c) + 1) * *(unsigned int *)(param_1 + 0x4c);
    }
    *(unsigned int *)(param_2 + 0x1c) = 0;
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
    if (((iVar4 == 0) || (*(int *)(iVar4 + 0x40) != 1)) &&
       ((uVar2 = *(unsigned int *)(param_2 + 0x184), 0xf < uVar2 &&
        ((uVar2 - 0xf < *(unsigned int *)(param_2 + 0x30) && (*(unsigned int *)(param_2 + 0x30) <= uVar2)))))) {
      *(unsigned int *)(param_2 + 0x1c) = 1;
    }
  }
  return;
}

