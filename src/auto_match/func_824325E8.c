extern int fn_8242E3E0();
extern unsigned int lbl_821916F4;
extern unsigned int lbl_821958A0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C7AF8;
extern unsigned int lbl_831C7B88;
extern unsigned int lbl_831C7C18;
extern unsigned int lbl_831C7CA8;
extern unsigned int lbl_831C7D38;
extern unsigned int lbl_831C7DC8;
extern unsigned int lbl_831C7E58;
extern unsigned int lbl_831C7EE8;
extern unsigned int lbl_831C7F78;
extern unsigned int lbl_831C8008;
extern unsigned int lbl_831C8098;
extern unsigned int lbl_831C80B0;
extern unsigned int lbl_831C80B4;
extern unsigned int lbl_831C8104;


void fn_824325E8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned char *puVar4;
  int iVar5;
  
  if ((-1 < param_2) && (param_2 < 2)) {
    *(int *)(*(int *)(param_1 + 0x244) + 0x94) = param_2;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x244) + 0x9c) = 1;
  *(unsigned int *)(*(int *)(param_1 + 0x244) + 0xa0) = 0;
  uVar1 = ltcg_pool_0_0f;
  *(unsigned int *)(*(int *)(param_1 + 0x244) + 0xa4) = 1;
  *(unsigned int *)(*(int *)(param_1 + 0x244) + 0x14) = uVar1;
  if (*(int *)(*(int *)(param_1 + 0x244) + 0x94) == 0) {
    iVar5 = *(int *)(param_1 + 0x244);
    iVar3 = *(int *)(iVar5 + 8);
    if (iVar3 == 1) {
      puVar4 = &lbl_831C7AF8;
    }
    else if (iVar3 == 2) {
      iVar3 = fn_8242E3E0(*(unsigned int *)(param_1 + 0x240));
      uVar1 = lbl_821958A0;
      iVar5 = *(int *)(param_1 + 0x244);
      if (iVar3 != 0) {
        *(unsigned char **)(iVar5 + 0x98) = &lbl_831C8098;
        lbl_831C8104 = uVar1;
        lbl_831C80B0 = lbl_821916F4;
        lbl_831C80B4 = lbl_821916F4;
        goto LAB_8243279c;
      }
      puVar4 = &lbl_831C8008;
    }
    else if (iVar3 == 3) {
      puVar4 = &lbl_831C7EE8;
    }
    else if (iVar3 == 5) {
      if (*(int *)(iVar5 + 0x60) == 0) {
        puVar4 = &lbl_831C7CA8;
      }
      else {
        puVar4 = &lbl_831C7C18;
      }
    }
    else {
      puVar4 = &lbl_831C7DC8;
    }
    *(unsigned char **)(iVar5 + 0x98) = puVar4;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x244) + 8);
    if (iVar5 == 1) {
      puVar4 = &lbl_831C7B88;
    }
    else if (iVar5 == 2) {
      puVar4 = &lbl_831C8098;
    }
    else if (iVar5 == 3) {
      puVar4 = &lbl_831C7F78;
    }
    else if (iVar5 == 5) {
      puVar4 = &lbl_831C7D38;
    }
    else {
      puVar4 = &lbl_831C7E58;
    }
    *(unsigned char **)(*(int *)(param_1 + 0x244) + 0x98) = puVar4;
  }
LAB_8243279c:
  *(int *)(*(int *)(param_1 + 0x244) + 0x94) = 1 - *(int *)(*(int *)(param_1 + 0x244) + 0x94);
  *(unsigned int *)(*(int *)(param_1 + 0x244) + 0x18) =
       *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x244) + 0x98) + 0x68);
  iVar5 = *(int *)(*(int *)(param_1 + 0x244) + 0x98);
  iVar3 = *(int *)(*(int *)(param_1 + 0x240) + 0x94);
  uVar1 = *(unsigned int *)(iVar5 + 0x68);
  uVar2 = *(unsigned int *)(iVar5 + 0x70);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x1c);
    *(unsigned int *)(iVar3 + 0x24) = *(unsigned int *)(iVar5 + 0x6c);
    *(unsigned int *)(iVar3 + 0x28) = uVar2;
    *(unsigned int *)(iVar3 + 0x2c) = uVar1;
  }
  return;
}

