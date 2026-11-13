#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82E3A380();
extern int fn_82E3A4E8();
extern int fn_82E3A690();
extern int fn_82E3A938();
extern int fn_82E3FE10();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_82154AC8;
extern unsigned int lbl_82154AD8;
extern unsigned int lbl_82154AE8;
extern unsigned int lbl_82154AF8;
extern unsigned int lbl_82154B08;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


unsigned __int64 fn_82E406B8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 *param_4
                       )

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  int *piStack_60;
  int *piStack_5c;
  unsigned __int64 uStack_58;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  piStack_60 = (int *)0x0;
  piStack_5c = (int *)0x0;
  uStack_58 = 0;
  uStack_50 = lbl_8202E618;
  uStack_4c = lbl_8202E61C;
  uStack_48 = lbl_8202E620;
  uStack_44 = lbl_8202E624;
  uVar3 = fn_82E3A380();
  if (-1 < (__int64)uVar3) {
    pbVar7 = (unsigned char *)&uStack_50;
    pbVar6 = (unsigned char *)&lbl_82154AC8;
    *param_4 = uStack_58;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar7;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar6 != &lbl_82154AD8);
    pbVar7 = (unsigned char *)&lbl_82154AF8;
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
      pbVar6 = (unsigned char *)&uStack_50;
      pbVar5 = &lbl_82154AD8;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar6;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar5 != (unsigned char *)&lbl_82154AE8);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
        pbVar6 = (unsigned char *)&uStack_50;
        pbVar5 = (unsigned char *)&lbl_82154AE8;
        do {
          bVar1 = *pbVar5;
          bVar2 = *pbVar6;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
        } while (pbVar5 != (unsigned char *)&lbl_82154AF8);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
          pbVar5 = (unsigned char *)&uStack_50;
          pbVar6 = pbVar7;
          do {
            bVar1 = *pbVar6;
            bVar2 = *pbVar5;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar6 = pbVar6 + 1;
            pbVar5 = pbVar5 + 1;
          } while (pbVar6 != &lbl_82154B08);
          if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) goto LAB_82e408dc;
        }
      }
    }
    pbVar6 = (unsigned char *)&uStack_50;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != &lbl_82154B08);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
      uVar3 = fn_82E3A938(param_1,CONCAT44(uStack_50,uStack_4c),CONCAT44(uStack_48,uStack_44),
                            &piStack_60);
      if (-1 < (__int64)uVar3) {
        uVar3 = fn_82E3A4E8(param_1,param_2,param_3,piStack_60);
        if (-1 < (__int64)uVar3) {
          iVar4 = (**(int (***)())*piStack_60)(piStack_60,0xffffffff82154c98,&piStack_5c);
          if ((iVar4 < 0) ||
             (uVar3 = fn_82E3A690(param_1,piStack_5c,param_2,param_3), -1 < (__int64)uVar3)) {
            uVar3 = fn_82E3FE10(param_1,piStack_60,param_2,param_3);
            uVar3 = ((uVar3 & 0xffffffff) >> 0x1f) - 1 & uVar3;
          }
        }
      }
    }
  }
LAB_82e408dc:
  if (piStack_60 != (int *)0x0) {
    (**(int (***)())(*piStack_60 + 8))();
    piStack_60 = (int *)0x0;
  }
  if (piStack_5c != (int *)0x0) {
    (**(int (***)())(*piStack_5c + 8))();
  }
  return uVar3;
}

