extern int fn_8305F770();
extern int fn_830604F0();
extern int fn_83065890();
extern int fn_83065900();
extern int fn_83068418();
extern unsigned int lbl_8217E690;
extern unsigned int lbl_8217E890;
extern unsigned int lbl_8217E8A0;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_58;


void fn_83063800(int param_1,unsigned int *param_2)

{
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar1;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned char **appuStack_60 [2];
  unsigned int uStack_58;
  unsigned char *puStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned char **ppuStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  *param_2 = *(unsigned int *)(param_1 + 0xc4);
  param_2[1] = *(unsigned int *)(param_1 + 200);
  uVar2 = fn_830604F0(param_1 + 0x34);
  param_2[2] = uVar2;
  uVar2 = fn_8305F770(param_1 + 0x34);
  param_2[3] = uVar2;
  param_2[6] = 0;
  param_2[5] = 0;
  uStack_4c = *(unsigned int *)(param_1 + 0x2c);
  uVar4 = (unsigned __int64)uStack_4c;
  puStack_50 = &lbl_8217E690;
  uStack_48 = uStack_4c;
  if (uStack_4c != 0) {
    do {
      param_2[5] = param_2[5] + 1;
      uVar3 = fn_83068418(uVar4);
      param_2[6] = (uVar3 & 0xff) + param_2[6];
      uVar4 = (**(int (***)())(puStack_50 + 4))(&puStack_50,uStack_48);
      uStack_48 = (unsigned int)uVar4;
    } while ((uVar4 & 0xffffffff) != 0);
  }
  param_2[4] = 0;
  uStack_58 = 0;
  appuStack_60[0] = &lbl_8217E890;
  fn_83065890(appuStack_60,*(unsigned int *)(param_1 + 0x2c));
  uVar4 = (unsigned __int64)uStack_58;
  while (uVar4 != 0) {
    uStack_3c = (unsigned int)uVar4;
    iVar5 = 0;
    ppuStack_40 = &lbl_8217E8A0;
    iVar6 = 0;
    uStack_38 = uStack_3c;
    if ((uVar4 & 0xffffffff) != 0) {
      do {
        iVar5 = iVar6 + 1;
        lVar1 = (*(int (**)())ppuStack_40[1])(&ppuStack_40);
        uStack_38 = (unsigned int)lVar1;
        iVar6 = iVar5;
      } while (lVar1 != 0);
      uVar4 = (unsigned __int64)uStack_58;
      uStack_38 = 0;
    }
    if ((int)param_2[4] < iVar5) {
      param_2[4] = iVar5;
    }
    uVar4 = (*(int (**)())appuStack_60[0][1])(appuStack_60,uVar4);
    uStack_58 = (unsigned int)uVar4;
  }
  fn_83065900(param_2);
  return;
}

