extern unsigned int *auStack_58;
extern int fn_82E72660();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_821549E8;
extern unsigned int lbl_821549F8;
extern unsigned int lbl_82154A08;
extern unsigned int lbl_82154AD8;
extern unsigned int lbl_82154AE8;
extern unsigned int lbl_82154AF8;
extern unsigned int lbl_82154B08;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5e;
extern unsigned int uStack_60;


__int64 fn_82E3B468(unsigned __int64 param_1,int *param_2,int *param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned short uVar7;
  unsigned short uStack_60;
  unsigned short uStack_5e;
  int *piStack_5c;
  unsigned int auStack_58 [2];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if (((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) || (param_4 == (unsigned int *)0x0)) {
    return -0x7fffbffd;
  }
  *param_4 = 0;
  piStack_5c = (int *)0x0;
  uStack_50 = lbl_8202E618;
  uStack_4c = lbl_8202E61C;
  uStack_48 = lbl_8202E620;
  uStack_44 = lbl_8202E624;
  lVar3 = (**(int (***)())(*param_2 + 0xc))(param_2,&uStack_50);
  if (-1 < lVar3) {
    pbVar5 = (unsigned char *)&uStack_50;
    pbVar6 = &lbl_82154AD8;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar5;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar6 != (unsigned char *)&lbl_82154AE8);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      puVar4 = &lbl_821549E8;
      stack_pair_40.first = lbl_821549E8;
    }
    else {
      pbVar5 = (unsigned char *)&uStack_50;
      pbVar6 = (unsigned char *)&lbl_82154AE8;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar5;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar6 != (unsigned char *)&lbl_82154AF8);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        puVar4 = &lbl_821549F8;
        stack_pair_40.first = lbl_821549F8;
      }
      else {
        pbVar5 = (unsigned char *)&uStack_50;
        pbVar6 = (unsigned char *)&lbl_82154AF8;
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar5;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != &lbl_82154B08);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
          lVar3 = -0x7ff8ffa9;
          goto LAB_82e3b6bc;
        }
        puVar4 = &lbl_82154A08;
        stack_pair_40.first = lbl_82154A08;
      }
    }
    stack_pair_40.second = puVar4[1];
    uStack_38 = puVar4[2];
    uStack_34 = puVar4[3];
    lVar3 = (**(int (***)())(*param_3 + 0x1c))(param_3,&stack_pair_40.first,&piStack_5c);
    if (-1 < lVar3) {
      uStack_60 = 0;
      lVar3 = (**(int (***)())(*param_2 + 0x30))(param_2,&uStack_60);
      if (-1 < lVar3) {
        uVar7 = 0;
        if (uStack_60 != 0) {
          do {
            uStack_5e = 0;
            lVar3 = (**(int (***)())(*param_2 + 0x34))(param_2,uVar7,&uStack_5e,auStack_58);
            if ((lVar3 < 0) ||
               (lVar3 = fn_82E72660(piStack_5c,uStack_5e,auStack_58[0]), lVar3 < 0))
            goto LAB_82e3b6bc;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uStack_60);
        }
        *param_4 = piStack_5c;
        (**(int (***)())(*piStack_5c + 4))();
      }
    }
  }
LAB_82e3b6bc:
  if (piStack_5c != (int *)0x0) {
    (**(int (***)())(*piStack_5c + 8))();
  }
  return lVar3;
}

