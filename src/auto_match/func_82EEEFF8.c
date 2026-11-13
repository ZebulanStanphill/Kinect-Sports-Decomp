extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EEDD00();
extern int fn_82EEE070();
extern int fn_82EEE258();
extern int fn_82F41728();
extern int fn_82F41758();
extern int fn_82F41920();
extern unsigned int uStack_50;


__int64 fn_82EEEFF8(int *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  unsigned int uStack_50;
  int aiStack_4c [19];
  
  uVar1 = param_1[0x1c];
  lVar4 = 0;
  aiStack_4c[0] = 0;
  uStack_50 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    while (lVar4 = fn_82EEDD00(param_1,uVar3,aiStack_4c), iVar5 = aiStack_4c[0], -1 < lVar4) {
      if (aiStack_4c[0] == 0) goto LAB_82eef1f0;
      fn_82F41920(aiStack_4c[0]);
      uStack_50 = 0;
      fn_82F41728(iVar5,0,&uStack_50);
      lVar4 = (**(int (***)())(*param_1 + 0x24))(param_1,0x20201,iVar5);
      fn_82F41920(iVar5);
      if ((int)lVar4 < 0) break;
      uVar2 = fn_82E50BE8(uStack_50,0,0,0,0);
      if (uVar2 == 0) {
        lVar4 = -0x7ff8fff2;
LAB_82eef1a8:
        if ((uVar2 & 0xffffffff) != 0) {
          fn_82E4FE40(uVar2);
        }
        break;
      }
      fn_82F41728(iVar5,uVar2,&uStack_50);
      lVar4 = (**(int (***)())(*param_1 + 0x24))(param_1,0x20201,iVar5);
      fn_82F41920(iVar5);
      fn_82F41758(iVar5);
      if ((int)lVar4 < 0) goto LAB_82eef1a8;
      lVar4 = (**(int (***)())(*param_1 + 0x24))(param_1,0x20800,iVar5);
      if ((int)lVar4 == -0x3ff2c172) {
        lVar4 = 0;
      }
      else if ((((int)lVar4 < 0) || (lVar4 = fn_82EEE258(param_1,iVar5), lVar4 < 0)) ||
              (lVar4 = fn_82EEE070(param_1,iVar5,uVar2,uStack_50,0,0,1), lVar4 < 0))
      goto LAB_82eef1a8;
      fn_82E4FE40(uVar2);
      uVar3 = uVar3 + 1;
      if ((unsigned __int64)uVar1 <= (uVar3 & 0xffffffff)) break;
    }
    iVar5 = (int)lVar4;
    if (((iVar5 == -0x7ff8ffa9) || (iVar5 == -0x3ff2c94f)) ||
       ((iVar5 == -0x3ff2c172 || (iVar5 == -0x3ff2c171)))) {
LAB_82eef1f0:
      lVar4 = -0x7fff0001;
    }
  }
  return lVar4;
}

