extern unsigned int *auStack_70;
extern int fn_82E50BE8();
extern int fn_82E50C30();
extern int fn_82EE4C50();
extern int fn_82EE4CB0();
extern int fn_82EE4DC0();
extern int fn_82EE5338();
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_82153858;
extern unsigned int lbl_8215385C;
extern unsigned int lbl_82153860;
extern unsigned int lbl_82153864;
extern unsigned int lbl_82153868;
extern unsigned int lbl_8215386C;
extern unsigned int lbl_82153870;
extern unsigned int lbl_82153874;
extern unsigned int lbl_8215491C;
extern unsigned int lbl_82154978;
extern unsigned int lbl_82154988;
extern unsigned int lbl_82154B88;
extern unsigned int lbl_82154B98;
extern unsigned int lbl_82154BA8;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_82E563B0(unsigned int *param_1,int *param_2,int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned int uVar6;
  unsigned int *puVar8;
  unsigned __int64 uVar7;
  unsigned short auStack_70 [8];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  param_1[1] = 0;
  *param_1 = &lbl_8215491C;
  fn_82E50C30(param_1 + 2);
  puVar8 = param_1 + 0x11;
  param_1[0x11] = lbl_82153858;
  param_1[0x12] = lbl_8215385C;
  param_1[0x13] = lbl_82153860;
  param_1[0x14] = lbl_82153864;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uStack_5c = lbl_8202E61C;
  uStack_58 = lbl_8202E620;
  uStack_54 = lbl_8202E624;
  if (param_2 != (int *)0x0) {
    iVar3 = (**(int (***)())(*param_2 + 0xc))(param_2,&uStack_60);
    *param_3 = iVar3;
    if (-1 < iVar3) {
      pbVar4 = (unsigned char *)&uStack_60;
      pbVar5 = (unsigned char *)&lbl_82154978;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar4;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar5 != (unsigned char *)&lbl_82154988);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        iVar3 = fn_82EE4C50(param_2,&uStack_60);
        *param_3 = iVar3;
        if (iVar3 < 0) goto LAB_82e56684;
        pbVar4 = (unsigned char *)&uStack_60;
        pbVar5 = &lbl_82154B88;
        do {
          bVar1 = *pbVar5;
          bVar2 = *pbVar4;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar5 = pbVar5 + 1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar5 != (unsigned char *)&lbl_82154B98);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
          *puVar8 = lbl_82153858;
          param_1[0x12] = lbl_8215385C;
          param_1[0x13] = lbl_82153860;
          uVar6 = lbl_82153864;
        }
        else {
          pbVar4 = (unsigned char *)&uStack_60;
          pbVar5 = (unsigned char *)&lbl_82154B98;
          do {
            bVar1 = *pbVar5;
            bVar2 = *pbVar4;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar5 = pbVar5 + 1;
            pbVar4 = pbVar4 + 1;
          } while (pbVar5 != (unsigned char *)&lbl_82154BA8);
          if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
            *puVar8 = lbl_82153868;
            param_1[0x12] = lbl_8215386C;
            param_1[0x13] = lbl_82153870;
            uVar6 = lbl_82153874;
          }
          else {
            *puVar8 = uStack_60;
            param_1[0x12] = uStack_5c;
            param_1[0x13] = uStack_58;
            uVar6 = uStack_54;
          }
        }
        param_1[0x14] = uVar6;
        iVar3 = fn_82EE4CB0(param_2,param_1 + 0x15,param_1 + 0x16);
        *param_3 = iVar3;
        if (iVar3 < 0) goto LAB_82e56684;
        auStack_70[0] = 0;
        iVar3 = fn_82EE4DC0(param_2,auStack_70);
        *param_3 = iVar3;
        if (iVar3 < 0) goto LAB_82e56684;
        iVar3 = fn_82E50BE8((unsigned __int64)auStack_70[0] << 1,0,0,0,0);
        param_1[0x19] = iVar3;
        if (iVar3 != 0) {
          param_1[0x18] = (unsigned int)auStack_70[0];
          param_1[0x17] = (unsigned int)auStack_70[0];
          if (auStack_70[0] != 0) {
            uVar7 = 0;
            do {
              iVar3 = fn_82EE5338(param_2,uVar7,uVar7 * 2 + (unsigned __int64)(unsigned int)param_1[0x19]);
              *param_3 = iVar3;
              if (iVar3 < 0) break;
              uVar7 = uVar7 + 1 & 0xffff;
            } while (uVar7 < auStack_70[0]);
          }
          goto LAB_82e56684;
        }
        iVar3 = -0x7ff8fff2;
      }
      else {
        iVar3 = -0x7ff8ffa9;
      }
      *param_3 = iVar3;
    }
  }
LAB_82e56684:
  *param_3 = 0;
  return param_1;
}

