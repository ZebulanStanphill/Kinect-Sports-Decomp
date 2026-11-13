extern unsigned int *auStack_70;
extern int fn_82E50BE8();
extern int fn_82E6FEB8();
extern int fn_82E700E0();
extern int fn_82E70378();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_82154AD8;
extern unsigned int lbl_82154AE8;
extern unsigned int lbl_82154AF8;
extern unsigned int lbl_82154B08;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


__int64 fn_82E3B1A8(int param_1,int *param_2,unsigned __int64 param_3,unsigned int param_4,unsigned __int64 param_5,
                      unsigned __int64 param_6,int *param_7)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned int auStack_70 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  
  if (((param_2 == (int *)0x0) || ((param_5 & 0xffffffff) == 0)) || (param_7 == (int *)0x0)) {
    return -0x7fffbffd;
  }
  *param_7 = 0;
  stack_pair_60.first = lbl_8202E618;
  stack_pair_60.second = lbl_8202E61C;
  uStack_58 = lbl_8202E620;
  uStack_54 = lbl_8202E624;
  lVar4 = (**(int (***)())(*param_2 + 0xc))(param_2,&stack_pair_60.first);
  if (lVar4 < 0) goto LAB_82e3b42c;
  pbVar7 = (unsigned char *)&stack_pair_60.first;
  pbVar8 = &lbl_82154AD8;
  do {
    bVar1 = *pbVar8;
    bVar2 = *pbVar7;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar8 = pbVar8 + 1;
    pbVar7 = pbVar7 + 1;
  } while (pbVar8 != (unsigned char *)&lbl_82154AE8);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    uVar5 = fn_82E50BE8(0x70,0,0,0,0);
    if ((uVar5 & 0xffffffff) == 0) {
LAB_82e3b3b0:
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)fn_82E6FEB8(uVar5,param_2,param_3,param_5,param_6,
                                      *(unsigned int *)(param_1 + 100),*(unsigned int *)(param_1 + 0x44) & 4);
    }
LAB_82e3b3b4:
    *param_7 = (int)piVar6;
    if (piVar6 == (int *)0x0) {
      lVar4 = -0x7ff8fff2;
      goto LAB_82e3b42c;
    }
    auStack_70[0] = 0;
    lVar4 = (**(int (***)())(*piVar6 + 8))(piVar6,auStack_70);
    if ((lVar4 < 0) ||
       ((param_4 < auStack_70[0] && (lVar4 = (**(int (***)())(*(int *)*param_7 + 4))(), lVar4 < 0))))
    goto LAB_82e3b42c;
  }
  else {
    pbVar7 = (unsigned char *)&stack_pair_60.first;
    pbVar8 = (unsigned char *)&lbl_82154AE8;
    do {
      bVar1 = *pbVar8;
      bVar2 = *pbVar7;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar8 != (unsigned char *)&lbl_82154AF8);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      uVar5 = fn_82E50BE8(0x88,0,0,0,0);
      if ((uVar5 & 0xffffffff) == 0) goto LAB_82e3b3b0;
      piVar6 = (int *)fn_82E700E0(uVar5,param_2,param_3,param_5,param_6,
                                        *(unsigned int *)(param_1 + 100),*(unsigned int *)(param_1 + 0x44) & 4
                                       );
      goto LAB_82e3b3b4;
    }
    pbVar7 = (unsigned char *)&stack_pair_60.first;
    pbVar8 = (unsigned char *)&lbl_82154AF8;
    do {
      bVar1 = *pbVar8;
      bVar2 = *pbVar7;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar8 != &lbl_82154B08);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      uVar5 = fn_82E50BE8(0x70,0,0,0,0);
      if ((uVar5 & 0xffffffff) == 0) goto LAB_82e3b3b0;
      piVar6 = (int *)fn_82E70378(uVar5,param_2,param_3,param_5,param_6,
                                        *(unsigned int *)(param_1 + 100),*(unsigned int *)(param_1 + 0x44) & 4
                                       );
      goto LAB_82e3b3b4;
    }
    lVar4 = -0x7fffbfff;
  }
  if (-1 < (int)lVar4) {
    return lVar4;
  }
LAB_82e3b42c:
  puVar3 = (unsigned int *)*param_7;
  if (puVar3 != (unsigned int *)0x0) {
    (**(int (***)())*puVar3)(puVar3,1);
  }
  *param_7 = 0;
  return lVar4;
}

