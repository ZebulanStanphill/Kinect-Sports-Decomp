extern unsigned int *auStack_40;
extern int fn_82681898();
extern int fn_82695598();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826964E0();
extern int fn_82713EE8();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_820105A0;


unsigned __int64 fn_827217C8(__int64 param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  unsigned char auStack_40 [16];
  
  iVar3 = *(int *)(param_2 + 0x78);
  if (*(char *)(iVar3 + 0x2a4) == '\x01') {
    puVar4 = (unsigned int *)*param_3;
    if (puVar4 == *(unsigned int **)(iVar3 + 0x208)) {
      fn_826964E0(param_4,param_1 + 0x38);
    }
    else {
      uVar5 = lbl_82005758;
      if ((((puVar4 == *(unsigned int **)(iVar3 + 0x20c)) ||
           (uVar5 = lbl_82002C40, puVar4 == *(unsigned int **)(iVar3 + 0x210))) ||
          (uVar5 = lbl_820105A0, puVar4 == *(unsigned int **)(iVar3 + 0x214))) ||
         (((uVar5 = lbl_82005710, puVar4 == *(unsigned int **)(iVar3 + 0x218) ||
           (uVar5 = lbl_82005758, puVar4 == *(unsigned int **)(iVar3 + 0x21c))) ||
          (uVar5 = lbl_82002C40, puVar4 == *(unsigned int **)(iVar3 + 0x220))))) {
        fn_82681898(uVar5,param_4);
        goto LAB_82721898;
      }
      pcVar8 = (char *)*puVar4;
      pcVar6 = "getTopMostEntity";
      pcVar7 = pcVar8;
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar5 = 0xffffffff82721190;
      }
      else {
        pcVar6 = "getPosition";
        pcVar7 = pcVar8;
        do {
          cVar1 = *pcVar7;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          uVar5 = 0xffffffff82721670;
        }
        else {
          pcVar7 = "getButtonsState";
          do {
            cVar1 = *pcVar8;
            cVar2 = *pcVar7;
            if (cVar1 == '\0') break;
            pcVar8 = pcVar8 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 != cVar2) goto LAB_82721898;
          uVar5 = 0xffffffff82720a88;
        }
      }
      uVar5 = fn_82695598(auStack_40,param_2 + 0x78,uVar5);
      fn_82695FA0(param_4,uVar5);
      fn_82696330(auStack_40);
    }
    uVar5 = 1;
  }
  else {
LAB_82721898:
    uVar5 = fn_82713EE8(param_1,param_2,param_3,param_4);
  }
  return uVar5;
}

