extern unsigned int *auStack_74;
extern unsigned int *auStack_88;
extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CF0388();
extern int fn_82CF1790();
extern int fn_82CF2CF0();
extern int fn_82CF3C90();
extern unsigned int iStack_8c;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_90;


void fn_82CF45F8(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned char uStack_90;
  int iStack_8c;
  unsigned int auStack_88 [2];
  unsigned char *puStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned char auStack_74 [116];
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  uVar8 = (unsigned __int64)uVar1;
  puStack_80 = auStack_74;
  uStack_78 = 0x80000006;
  uStack_7c = 0;
  iVar3 = fn_82CE5410();
  if ((int)(uStack_78 & 0x3fffffff) < (int)uVar1) {
    uVar7 = ((unsigned __int64)uStack_78 & 0x3fffffff) << 1;
    if ((int)uVar7 <= (int)uVar1) {
      uVar7 = uVar8;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),&puStack_80,uVar7,4);
  }
  lVar9 = 0;
  uStack_7c = uVar1;
  if (0 < (int)uVar1) {
    iVar3 = 0;
    do {
      puVar2 = puStack_80;
      uVar4 = fn_82CF3C90(param_1,lVar9,uStack_90);
      lVar9 = lVar9 + 1;
      *(unsigned int *)(puVar2 + iVar3) = uVar4;
      iVar3 = iVar3 + 4;
    } while ((int)lVar9 < (int)uVar1);
  }
  iStack_8c = 0;
  auStack_88[0] = 0;
  fn_82CF2CF0(&puStack_80,param_2,param_1,&iStack_8c,auStack_88,0);
  iVar3 = iStack_8c;
  if (iStack_8c != 0) {
    fn_82CF0388(iStack_8c,param_3,*(unsigned int *)(param_2 + 0x14),auStack_88[0]);
    iVar5 = fn_82CE5410();
    fn_82CE5338(*(unsigned int *)(iVar5 + 0x10),iVar3);
  }
  if (0 < (int)uVar1) {
    iVar3 = 0;
    do {
      iVar5 = *(int *)(puStack_80 + iVar3);
      if (iVar5 != 0) {
        fn_82CF1790(iVar5);
        iVar6 = fn_82CE5410();
        (**(int (***)())(**(int **)(iVar6 + 0x10) + 8))(*(int **)(iVar6 + 0x10),iVar5,0x58);
      }
      uVar8 = uVar8 - 1;
      iVar3 = iVar3 + 4;
    } while (uVar8 != 0);
  }
  iVar3 = fn_82CE5410();
  uStack_7c = 0;
  if ((uStack_78 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),puStack_80,uStack_78 & 0x3fffffff,4);
  }
  return;
}

