extern int fn_82CBA370();
extern int fn_82CBA280();
extern int fn_82CBA440();
extern unsigned int iStack_30;


void fn_82C93DE0(int param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6)

{
  int iVar1;
  int iVar2;
  unsigned char *puVar3;
  __int64 lVar4;
  int iStack_30;
  int aiStack_2c;

  iVar1 = (*(int *)(param_1 + 0x88) * (int)param_5 + param_4) * 2;
  iVar2 = (int)*(short *)(*(int *)(param_1 + 0x6f8) + iVar1);
  if (iVar2 == 0x4000) {
    iVar1 = 0;
    do {
      lVar4 = 8;
      puVar3 = (unsigned char *)(*(int *)(param_1 + 0xd0) * iVar1 + param_2 + -1);
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = 0x80;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
  }
  else {
    iStack_30 = (int)*(short *)(*(int *)(param_1 + 0x6fc) + iVar1);
    aiStack_2c = iVar2;
    if (*(int *)(param_1 + 0x3cb0) == 7) {
      if (*(int *)(param_1 + 0x56a8) == 0) {
        fn_82CBA280(param_1,param_4,param_5,&aiStack_2c,&iStack_30);
      }
      else {
        fn_82CBA370();
      }
    }
    fn_82CBA440(param_1,param_6,*(unsigned int *)(param_1 + 0xd0),param_2,
                      *(unsigned int *)(param_1 + 0xd0),aiStack_2c,iStack_30,0);
  }
  if ((param_3 & 0xffffffff) != 0) {
    (**(int (***)())(param_1 + 0xc70))
              (param_2,param_2,param_3,*(unsigned int *)(param_1 + 0xd0),
               *(unsigned int *)(param_1 + 0x108));
  }
  return;
}
