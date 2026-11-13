extern int fn_82EEDD00();


unsigned __int64
fn_82EEDD60(int param_1,short param_2,unsigned int param_3,int *param_4,unsigned int *param_5,unsigned int *param_6,
             int param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  int aiStack_60;
  
  uVar1 = *(unsigned int *)(param_1 + 0x70);
  uVar6 = 0;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      aiStack_60 = 0;
      uVar3 = fn_82EEDD00(param_1,uVar5,&aiStack_60);
      if (aiStack_60 == 0) {
        return 0xffffffffc00d36bb;
      }
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if ((param_2 == -1) || (param_2 == *(short *)(aiStack_60 + 0x14))) {
        if (param_7 == 0) {
          iVar4 = *(int *)(aiStack_60 + 8);
        }
        else {
          iVar4 = *(int *)(aiStack_60 + 0xc);
        }
        if (iVar4 == 0) {
          uVar2 = param_3 & 0xffff;
          if ((uVar2 == uVar6) || ((*(int *)(aiStack_60 + 0x38) != 0 && (uVar2 == uVar6 + 1)))) {
            *param_4 = aiStack_60;
            if (param_5 != (unsigned int *)0x0) {
              *param_5 = (int)uVar5;
            }
            if (param_6 != (unsigned int *)0x0) {
              *param_6 = (unsigned int)(uVar6 != uVar2);
            }
            break;
          }
          uVar6 = uVar6 + 1 & 0xffff;
          if (*(int *)(aiStack_60 + 0x38) != 0) {
            uVar6 = uVar6 + 1 & 0xffff;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (unsigned __int64)uVar1);
    if ((uVar5 & 0xffffffff) < (unsigned __int64)uVar1) {
      return uVar3;
    }
  }
  return 0xffffffffc00d3e8d;
}

