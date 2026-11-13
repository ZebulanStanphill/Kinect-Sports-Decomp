extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82CC6160();
extern int fn_82EDB378();
extern int fn_82EDB418();
extern int fn_82EDBD48();
extern int fn_82EDC068();
extern int fn_82F2CC40();
extern int fn_82F68CC0();


unsigned __int64 fn_82EDC238(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  short sVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  
  if (param_2 == (int *)0x0) {
    return 1;
  }
  if (param_1 == 0) {
LAB_82edc2b0:
    *param_2 = 0;
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x10);
  sVar1 = *(short *)(param_1 + 0xe);
  iVar3 = fn_82EDBD48(iVar4,param_3,param_4,0);
  if (iVar3 != 0) goto LAB_82edc2b0;
  if (param_5 != 0) {
    if (iVar4 == 0) {
      if (sVar1 != 0x20) goto LAB_82edc2b0;
    }
    else if ((((((iVar4 != 0x59565955) && (iVar4 != 0x32595559)) && (iVar4 != 0x56555949)) &&
              ((iVar4 != 0x30323449 && (iVar4 != 0x32315659)))) && (iVar4 != 0x41595556)) &&
            (iVar4 != 0x50343232)) goto LAB_82edc390;
    uVar2 = fn_8265C940(0x168,0x248c8000);
    if (((uVar2 & 0xffffffff) == 0) || (iVar3 = fn_82EDB378(uVar2,0), iVar3 == 0))
    goto LAB_82edc2b0;
    iVar4 = fn_8265C940(0x28,0x248c8000);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      puVar7 = (unsigned int *)(param_1 + -4);
      puVar6 = (unsigned int *)(iVar4 + -4);
      lVar8 = 10;
      do {
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
        *puVar6 = *puVar7;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      iVar4 = *(int *)(*(int *)(iVar3 + 4) + 8);
      if (iVar4 < 1) {
        iVar4 = -iVar4;
      }
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar4;
      iVar4 = *(int *)(iVar3 + 4);
      if (*(int *)(iVar4 + 0x14) == 0) {
        uVar5 = fn_82EDC068(iVar3,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8));
        *(unsigned int *)(iVar4 + 0x14) = uVar5;
      }
      fn_82CC6160(iVar3 + 0xcc,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),param_3,
                   param_4);
      *(int *)(iVar3 + 0x20) = (int)param_3;
      *(int *)(iVar3 + 0x24) = (int)param_4;
      *(unsigned int *)(iVar3 + 0x18) = 0xffffffff;
      *(unsigned int *)(iVar3 + 0x1c) = 0xffffffff;
      *(int *)(iVar3 + 0x154) = param_5;
      *param_2 = iVar3;
      return 0;
    }
    goto LAB_82edc37c;
  }
  if (iVar4 == 0) {
    if ((((sVar1 != 8) && (sVar1 != 0x10)) && (sVar1 != 0x18)) && (sVar1 != 0x20))
    goto LAB_82edc2b0;
  }
  else if (iVar4 == 3) {
    if ((sVar1 != 0xf) && (sVar1 != 0x10)) {
      *param_2 = 0;
      return 1;
    }
  }
  else if (((((iVar4 != 0x32595559) && (iVar4 != 0x59565955)) &&
            ((iVar4 != 0x39555659 && ((iVar4 != 0x56555949 && (iVar4 != 0x32315659)))))) &&
           (iVar4 != 0x30323449)) &&
          (((iVar4 != 0x41595556 && (iVar4 != 0x50343232)) && (iVar4 != 0x56323136)))) {
    *param_2 = 0;
    return 1;
  }
  uVar2 = fn_8265C940(0x168,0x248c8000);
  if (((uVar2 & 0xffffffff) == 0) || (iVar3 = fn_82EDB378(uVar2,0), iVar3 == 0))
  goto LAB_82edc2b0;
  if (iVar4 == 0) {
    if (sVar1 != 8) goto LAB_82edc5cc;
    uVar2 = fn_8265C940(0x428,0x248c8000);
    *(int *)(iVar3 + 4) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
      fn_82F68CC0(uVar2,param_1,0x428);
      goto code_r0x82edc600;
    }
  }
  else if (iVar4 == 3) {
    uVar2 = fn_8265C940(0x34,0x248c8000);
    *(int *)(iVar3 + 4) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
      fn_82F68CC0(uVar2,param_1,0x34);
      goto code_r0x82edc600;
    }
  }
  else {
LAB_82edc5cc:
    iVar4 = fn_8265C940(0x28,0x248c8000);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      puVar7 = (unsigned int *)(param_1 + -4);
      puVar6 = (unsigned int *)(iVar4 + -4);
      lVar8 = 10;
      do {
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
        *puVar6 = *puVar7;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
code_r0x82edc600:
      iVar4 = *(int *)(*(int *)(iVar3 + 4) + 8);
      if (iVar4 < 1) {
        iVar4 = -iVar4;
      }
      *(int *)(*(int *)(iVar3 + 4) + 8) = iVar4;
      iVar4 = *(int *)(iVar3 + 4);
      if (*(int *)(iVar4 + 0x14) == 0) {
        uVar5 = fn_82EDC068(iVar3,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8));
        *(unsigned int *)(iVar4 + 0x14) = uVar5;
      }
      iVar4 = fn_82F2CC40(iVar3 + 0x40,*(unsigned int *)(param_1 + 4),
                                *(unsigned int *)(param_1 + 8),param_3,param_4);
      *(int *)(iVar3 + 0x20) = (int)param_3;
      *(int *)(iVar3 + 0x24) = (int)param_4;
      *(unsigned int *)(iVar3 + 0x18) = 0xffffffff;
      *(unsigned int *)(iVar3 + 0x1c) = 0xffffffff;
      *(unsigned int *)(iVar3 + 0x154) = 0;
      *param_2 = iVar3;
      if (iVar4 != 0) {
        return 0;
      }
      return 0xffffffff80004005;
    }
  }
LAB_82edc37c:
  fn_82EDB418(iVar3);
  fn_8265C990(iVar3,0x248c8000);
LAB_82edc390:
  *param_2 = 0;
  return 1;
}

