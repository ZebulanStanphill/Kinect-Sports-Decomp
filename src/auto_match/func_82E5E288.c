extern unsigned int *auStack_50;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_82E5E288(int *param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned short uVar6;
  unsigned short auStack_50 [8];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned char abStack_30 [48];
  
  auStack_50[0] = 0;
  uStack_40 = lbl_8202E618;
  auStack_50[1] = 0;
  uStack_3c = lbl_8202E61C;
  uStack_38 = lbl_8202E620;
  uStack_34 = lbl_8202E624;
  iVar3 = (**(int (***)())(*param_1 + 0x98))(param_1,auStack_50);
  if ((-1 < iVar3) && (uVar6 = 0, auStack_50[0] != 0)) {
    do {
      iVar3 = (**(int (***)())(*param_1 + 0x9c))(param_1,uVar6,&uStack_40,auStack_50 + 1,0,0);
      if (iVar3 < 0) {
        return 0;
      }
      pbVar5 = (unsigned char *)&uStack_40;
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar4;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar5 != abStack_30);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        return 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < auStack_50[0]);
  }
  return 0;
}

