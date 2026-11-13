#define true 1
extern int fn_82A6D090();
extern int fn_82A6D200();
extern int fn_82A75DF8();
extern unsigned int iStack_6c;
extern unsigned int lbl_820A89B8;
extern unsigned int lbl_820A8AA8;
extern unsigned int uStack_70;


unsigned __int64 fn_82A74938(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned short uVar4;
  unsigned __int64 uVar5;
  short sVar6;
  int *piVar7;
  unsigned int uStack_70;
  int iStack_6c;
  int aiStack_68;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(param_2 + 4);
  uVar5 = 0;
  sVar6 = *(short *)(iVar1 + 0x20);
  do {
    if (param_3 <= sVar6) {
      return uVar5;
    }
    uVar5 = 0;
    iVar3 = *param_1;
    aiStack_68 = 0;
    iStack_6c = 0;
    if (param_1[0x1f] == 0) {
      piVar7 = param_1 + 0x38;
      uVar5 = fn_82A75DF8(0xffffffff820a8468,piVar7,&uStack_70,&iStack_6c,&aiStack_68);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      uVar5 = fn_82A6D200(piVar7,uStack_70);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      if (iStack_6c == 0) goto LAB_82a749f4;
      if (iStack_6c == 1) {
        *(unsigned short *)(iVar3 + 0x1e) = 0;
        *(short *)(iVar3 + 0x1c) =
             ((short)*(unsigned int *)(iVar3 + 0x130) - *(short *)(iVar3 + 0x20)) + -1;
      }
      else {
        uVar5 = fn_82A6D200(piVar7,1);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        *(unsigned short *)(iVar3 + 0x1c) = *(unsigned short *)(&lbl_820A89B8 + (iStack_6c + -2) * 2);
        *(unsigned short *)(iVar3 + 0x1e) = *(unsigned short *)(&lbl_820A8AA8 + (iStack_6c + -2) * 2);
        *(int *)(iVar3 + 0x24) = -1 - (aiStack_68 >> 0x1f);
      }
    }
    else if (param_1[0x1f] == 3) {
LAB_82a749f4:
      param_1[0x1f] = 3;
      uVar5 = fn_82A6D090(param_1 + 0x38,0xe,&uStack_70);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      *(short *)(iVar3 + 0x1e) = (short)(uStack_70 >> 6);
      *(unsigned int *)(iVar3 + 0x24) = (uStack_70 & 1) - 1;
      *(short *)(iVar3 + 0x1c) = (short)((int)(uStack_70 & 0x3e) >> 1);
      param_1[0x1f] = 0;
    }
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar4 = (unsigned short)*(unsigned int *)(iVar1 + 0x24);
    *(unsigned short *)(iVar1 + 0x1e) = (*(unsigned short *)(iVar1 + 0x1e) ^ uVar4) - uVar4;
    if (param_3 <= (int)*(short *)(iVar1 + 0x20) + (int)*(short *)(iVar1 + 0x1c)) {
      return uVar5;
    }
    sVar6 = *(short *)(iVar1 + 0x20) + *(short *)(iVar1 + 0x1c);
    *(short *)(iVar1 + 0x20) = sVar6;
    iVar3 = sVar6 * 4;
    *(int *)(iVar3 + iVar2) = (int)*(short *)(iVar1 + 0x1e) + *(int *)(iVar3 + iVar2);
    *(short *)(iVar1 + 0x20) = *(short *)(iVar1 + 0x20) + 1;
    param_1[0x1f] = 0;
    sVar6 = *(short *)(iVar1 + 0x20);
  } while( true );
}

