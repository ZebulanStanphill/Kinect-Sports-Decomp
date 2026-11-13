typedef unsigned char bool;
extern unsigned int *auStack_40;
extern unsigned int *auStack_44;
extern unsigned int *auStack_4c;
extern int fn_8267BE38();
extern int fn_8268ACE8();
extern int fn_8268B330();
extern int fn_8268C510();
extern int fn_8268C750();
extern int fn_82696958();
extern int fn_826D7220();
extern int fn_826F35B0();
extern unsigned int uStack_50;
extern unsigned __int64 storeWordConditionalIndexed();


/* WARNING: Type propagation algorithm not settling */

void fn_826F71B0(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  char in_RESERVE;
  unsigned char bVar9;
  unsigned int uStack_50;
  unsigned int auStack_4c [2];
  unsigned char auStack_44 [4];
  unsigned char auStack_40 [64];
  
  iVar5 = fn_8268ACE8(param_2 + 0xc);
  bVar9 = (iVar5 == 0) << 1;
  if (iVar5 != 0) {
    auStack_4c[1] = 5;
    fn_8268C750(auStack_44,param_2 + 0xc);
    fn_8268C750(auStack_40,param_4);
    fn_8268B330(&uStack_50);
    fn_826F35B0(param_3,&uStack_50,auStack_4c + 1);
    fn_8268C510(auStack_4c,((unsigned __int64)uStack_50 & 0xfffffffc) + 8);
    (**(int (***)())(**(int **)(param_2 + 0x58) + 4))
              (*(int **)(param_2 + 0x58),auStack_4c,*(unsigned int *)(*(int *)(param_3 + 8) + 8));
    lVar6 = ((unsigned __int64)auStack_4c[0] & 0xfffffffc) + 4;
    do {
      puVar7 = (unsigned int *)lVar6;
      uVar8 = (unsigned __int64)*puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar8 - 1,0,lVar6);
        *puVar7 = uVar2;
        bVar9 = 2;
      }
    } while (!(bool)(bVar9 >> 1 & 1));
    bVar9 = (uVar8 == 1) << 1;
    if (uVar8 == 1) {
      fn_8267BE38();
    }
    uVar3 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x5c))();
    piVar1 = *(int **)(param_2 + 0x58);
    iVar5 = *piVar1;
    uVar4 = fn_82696958(param_2 + 0x48,uVar3);
    (**(int (***)())(iVar5 + 8))(piVar1,uVar3,uVar4);
    lVar6 = ((unsigned __int64)uStack_50 & 0xfffffffc) + 4;
    do {
      puVar7 = (unsigned int *)lVar6;
      uVar8 = (unsigned __int64)*puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar8 - 1,0,lVar6);
        *puVar7 = uVar2;
        bVar9 = 2;
      }
    } while (!(bool)(bVar9 >> 1 & 1));
    if (uVar8 == 1) {
      fn_8267BE38();
    }
    fn_826D7220(auStack_4c + 1);
  }
  return;
}

