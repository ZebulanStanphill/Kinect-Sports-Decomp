extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82E50330();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;
extern unsigned int uStack_58;


unsigned __int64 fn_82EE21F8(unsigned char *param_1,int *param_2,int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned __int64 uVar6;
  unsigned int auStack_70 [4];
  unsigned char auStack_60 [8];
  unsigned __int64 uStack_58;
  unsigned char abStack_50 [16];
  unsigned char abStack_40 [64];
  
  if ((param_3 == (int *)0x0) || (param_2 == (int *)0x0)) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    uVar6 = 0;
    auStack_70[0] = 0;
    uStack_58 = 0;
    uVar3 = (**(int (***)())(*param_3 + 0xc))(param_3,auStack_70);
    if ((-1 < (__int64)uVar3) && (auStack_70[0] != 0)) {
      do {
        uVar3 = (**(int (***)())(*param_3 + 0x10))(param_3,uVar6,abStack_50);
        pbVar4 = (unsigned char *)&lbl_8202E618;
        pbVar5 = param_1;
        if ((__int64)uVar3 < 0) break;
        do {
          bVar1 = *pbVar4;
          bVar2 = *pbVar5;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar4 != &lbl_8202E628);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
LAB_82ee22f4:
          uVar3 = (**(int (***)())(*param_3 + 0x14))(param_3,abStack_50,auStack_60);
          if ((__int64)uVar3 < 0) break;
          uVar3 = (**(int (***)())(*param_2 + 0x18))(param_2,abStack_50,auStack_60);
          uVar3 = -(unsigned __int64)(uVar3 != 0xffffffffc00d3e8e) & uVar3;
          if ((int)uVar3 < 0) break;
          fn_82E50330(auStack_60);
        }
        else {
          pbVar5 = abStack_50;
          pbVar4 = param_1;
          do {
            bVar1 = *pbVar5;
            bVar2 = *pbVar4;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar5 = pbVar5 + 1;
            pbVar4 = pbVar4 + 1;
          } while (pbVar5 != abStack_40);
          if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) goto LAB_82ee22f4;
        }
        uVar6 = uVar6 + 1;
      } while ((uVar6 & 0xffffffff) < (unsigned __int64)auStack_70[0]);
    }
  }
  fn_82E50330(auStack_60);
  return uVar3;
}

