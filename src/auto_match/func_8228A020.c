extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_82230218();
extern int fn_822883D0();
extern int fn_82289670();
extern int fn_8228ABB8();
extern int fn_8228ACD0();
extern int fn_8234F298();


void fn_8228A020(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_30 [4];
  unsigned char auStack_2c [44];
  
  iVar1 = param_1[3];
  uVar5 = 0;
  fn_82289670(iVar1,*(unsigned int *)(iVar1 + 0x6a0));
  iVar2 = *param_1;
  *(unsigned int *)(*(int *)(iVar1 + 0x6a0) * 0x40 + iVar1 + 0x6a8) = 3;
  iVar4 = *(int *)(iVar1 + 0x6a0) * 0x40 + iVar1;
  if (iVar2 == 0) {
    *(unsigned __int64 *)(iVar4 + 0x6b0) = *(unsigned __int64 *)param_1[2];
    fn_82230218(*(int *)(iVar1 + 0x6a0) * 0x40 + iVar1 + 0x6c8,(unsigned __int64)(unsigned int)param_1[2] + 8
                      ,0,0xffffffffffffffff);
    uVar5 = (**(int (***)())(**(int **)(param_1[1] + 0x8c0) + 100))();
    *(unsigned __int64 *)(iVar1 + 0x1208) = *(unsigned __int64 *)param_1[2];
  }
  else {
    *(unsigned __int64 *)(iVar4 + 0x6b0) = 0;
    *(unsigned __int64 *)(iVar1 + 0x1208) = 0;
  }
  uVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x6a0);
  if ((uVar5 & 0xffffffff) == 0) {
    fn_8228ACD0(iVar1,uVar3,iVar1 + 0x520);
  }
  else {
    if (*(int *)(*(int *)(iVar1 + 0x11f0) + 0x18b8) == 1) {
      uVar3 = -((unsigned __int64)(uVar3 < 2) - 1);
    }
    fn_8234F298(*(int *)(iVar1 + 0x11f0) + 0x234,uVar3,auStack_2c,auStack_30);
    fn_8228ABB8(iVar1,*(unsigned int *)(iVar1 + 0x6a0),uVar5,auStack_2c,auStack_30);
  }
  fn_822883D0(iVar1,*(int *)(iVar1 + 0x6a0),
                    *(unsigned int *)((*(int *)(iVar1 + 0x6a0) + 0x1b) * 0x40 + iVar1));
  *(unsigned int *)(iVar1 + 0x604) = 1;
  return;
}

