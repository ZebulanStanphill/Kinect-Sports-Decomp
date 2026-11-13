extern int fn_82E6F498();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;
extern unsigned int uStack_58;


unsigned __int64
fn_82E70AB8(int *param_1,unsigned __int64 param_2,int param_3,__int64 param_4,__int64 *param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned __int64 uVar6;
  int aiStack_60 [2];
  unsigned __int64 uStack_58;
  unsigned char abStack_50 [4];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iStack_4c = param_1[4];
  iStack_48 = param_1[5];
  iStack_44 = param_1[6];
  pbVar5 = (unsigned char *)&lbl_8202E618;
  uStack_58 = 0;
  uVar3 = 0;
  aiStack_60[0] = 0;
  pbVar4 = abStack_50;
  do {
    bVar1 = *pbVar5;
    bVar2 = *pbVar4;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar5 != &lbl_8202E628);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        uVar3 = (**(int (***)())(*param_1 + 0x24))(param_1,param_2 - uVar6,&uStack_58,0);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar3 = fn_82E6F498(param_1,uStack_58,aiStack_60);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        if (aiStack_60[0] != param_3) {
          param_4 = (param_2 - uVar6) * param_4;
          goto LAB_82e70bc4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_2);
    }
  }
  else {
    param_4 = -1;
    uVar3 = 0;
LAB_82e70bc4:
    *param_5 = param_4;
  }
  return uVar3;
}

