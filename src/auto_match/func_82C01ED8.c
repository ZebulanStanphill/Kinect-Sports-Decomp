extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_82C08D70();
extern int fn_82C09238();
extern int fn_82C09348();
extern int fn_82C09700();


unsigned __int64 fn_82C01ED8(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 *puVar2;
  int iVar3;
  unsigned int uVar4;
  __int64 lVar1;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned char auStack_80 [8];
  unsigned char auStack_78 [8];
  unsigned char auStack_70 [8];
  unsigned __int64 auStack_68 [13];
  
  *param_3 = 0;
  uVar7 = 0;
  puVar2 = (unsigned __int64 *)(**(int (***)())(*(int *)param_1[0xc] + 0x50))();
  iVar3 = (**(int (***)())(*param_1 + 0x74))(param_1);
  uVar5 = (unsigned __int64)(unsigned int)param_1[0x87];
  puVar6 = (unsigned int *)(param_1 + 0x87);
  if (uVar5 != 0) {
    if ((param_2 & 0xffffffff) < uVar5) {
      uVar5 = param_2;
    }
    uVar7 = fn_82C09238(param_1[0x82],(int)puVar2 + *param_3 + iVar3,uVar5,auStack_80,
                              auStack_68,auStack_78,2);
    *puVar6 = *puVar6;
    *param_3 = *param_3;
    uVar4 = (**(int (***)())(*param_1 + 0x74))(param_1);
    if (7 < uVar4) {
      *(unsigned __int64 *)(param_1 + 0x20) = auStack_68[0];
      *puVar2 = auStack_68[0];
    }
  }
  while ((((int)uVar7 == 0 && ((param_2 & 0xffffffff) != 0)) && (param_1[0x88] == 0))) {
    do {
      if (*puVar6 != 0) goto LAB_82c0206c;
      if (param_1[0x80] == 0) {
        fn_82C09700(param_1[0x82],param_1[0x7f] & 0xffff);
      }
      else if (param_1[0x7d] == 5) {
        param_1[0x7d] = 1;
        fn_82C08D70(param_1[0x82]);
      }
      uVar7 = fn_82C09348(param_1[0x82],auStack_70,puVar6,0xffffffffffffffff);
    } while ((int)uVar7 == 0);
    if ((int)uVar7 == 0x21) {
      param_1[0x88] = 1;
    }
LAB_82c0206c:
    uVar5 = (unsigned __int64)*puVar6;
    if (uVar5 == 0) break;
    if ((param_2 & 0xffffffff) < uVar5) {
      uVar5 = param_2;
    }
    uVar7 = fn_82C09238(param_1[0x82],(int)puVar2 + *param_3 + iVar3,uVar5,auStack_80,
                              auStack_68,auStack_78,2);
    *puVar6 = *puVar6;
    *param_3 = *param_3;
    uVar4 = (**(int (***)())(*param_1 + 0x74))(param_1);
    if (7 < uVar4) {
      *(unsigned __int64 *)(param_1 + 0x20) = auStack_68[0];
      *puVar2 = auStack_68[0];
    }
  }
  uVar5 = -(unsigned __int64)((-(unsigned __int64)(uVar7 != 0x21) & uVar7) != 0) & 0xffffffff8000ffff;
  if ((-1 < (int)uVar5) && (*param_3 != 0)) {
    iVar3 = *(int *)param_1[0xc];
    lVar1 = (**(int (***)())(*param_1 + 0x74))(param_1);
    (**(int (***)())(iVar3 + 0x48))(param_1[0xc],lVar1 + (unsigned __int64)*param_3);
  }
  return uVar5;
}

