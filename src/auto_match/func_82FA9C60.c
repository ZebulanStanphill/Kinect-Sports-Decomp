extern int fn_82FAE168();
extern int fn_82FAF750();
extern int fn_82FF4F40();
extern unsigned int lbl_83264304;


void fn_82FA9C60(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  
  puVar1 = (unsigned int *)fn_82FAF750(*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x60));
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x44) - (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
  if ((__int64)uVar4 < 1) {
    if ((param_3 & 0x400) != 0) {
      fn_82FF4F40(lbl_83264304,param_4,0x400,puVar1);
    }
    lVar6 = 0;
    lVar3 = 0;
  }
  else {
    param_2 = uVar4 + param_2;
    trapWord(6,(unsigned __int64)*puVar1,0);
    trapWord(6,(unsigned __int64)puVar1[1],0);
    lVar6 = (uVar4 & 0xffffffff) / (unsigned __int64)*puVar1 + 1;
    lVar3 = (uVar4 & 0xffffffff) / (unsigned __int64)puVar1[1] + 1;
  }
  trapWord(6,(unsigned __int64)*puVar1,0);
  lVar7 = (param_2 & 0xffffffff) / (unsigned __int64)*puVar1 + 1;
  trapWord(6,(unsigned __int64)puVar1[1],0);
  lVar5 = (param_2 & 0xffffffff) / (unsigned __int64)puVar1[1] + 1;
  if (((param_3 & 0x200) != 0) && ((int)lVar3 < (int)lVar5)) {
    lVar5 = lVar5 - lVar3;
    do {
      fn_82FF4F40(lbl_83264304,param_4,0x200,puVar1);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (((param_3 & 0x100) != 0) && ((int)lVar6 < (int)lVar7)) {
    lVar7 = lVar7 - lVar6;
    do {
      fn_82FF4F40(lbl_83264304,param_4,0x100,puVar1);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((param_3 & 0x800) != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_82FAE168(*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x60));
    }
    if (iVar2 <= (int)param_2) {
      fn_82FF4F40(lbl_83264304,param_4,0x800,puVar1);
    }
  }
  return;
}

