typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_82681728();
extern int fn_82681838();
extern int fn_8268B330();
extern int fn_8268B508();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82697610();
extern int fn_8269A190();
extern int fn_827A16D8();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82723900(int param_1)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  unsigned int uVar3;
  int iVar6;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  char in_RESERVE;
  unsigned char bVar9;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  int aiStack_38 [14];
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar6 = (**(int (***)())(**(int **)(param_1 + 8) + 8))();
    if (iVar6 == 4) {
      iVar6 = *(int *)(param_1 + 8) + -0x68;
      if (*(int *)(param_1 + 8) == 0) {
        iVar6 = 0;
      }
      if (0 < *(int *)(param_1 + 0x1c)) {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,0);
        lVar5 = fn_82697610(uVar4,uVar1);
        if (lVar5 < 0) {
          puVar2 = *(unsigned char **)(param_1 + 4);
          fn_826959C8(puVar2);
          *puVar2 = 0;
        }
        else {
          uStack_3c = 0;
          lVar5 = fn_827A16D8(*(unsigned int *)(iVar6 + 0xa0),lVar5,&uStack_3c);
          if (lVar5 == 0) {
            fn_82681728(aiStack_38,
                              (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                              0xffffffff82196582);
            fn_82681838(*(unsigned int *)(param_1 + 4),aiStack_38);
            lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_38[0] + 8) - 1;
            *(int *)(aiStack_38[0] + 8) = (int)lVar5;
            if (lVar5 == 0) {
              fn_826944C8();
            }
          }
          else {
            fn_8268B330(&uStack_40);
            fn_8268B508(&uStack_40,lVar5,uStack_3c);
            fn_8269A190(aiStack_38,
                              (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                              &uStack_40);
            fn_82681838(*(unsigned int *)(param_1 + 4),aiStack_38);
            lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_38[0] + 8) - 1;
            bVar9 = (lVar5 == 0) << 1;
            *(int *)(aiStack_38[0] + 8) = (int)lVar5;
            if (lVar5 == 0) {
              fn_826944C8();
            }
            lVar5 = ((unsigned __int64)uStack_40 & 0xfffffffc) + 4;
            do {
              puVar8 = (unsigned int *)lVar5;
              uVar7 = (unsigned __int64)*puVar8;
              if (in_RESERVE != '\0') {
                uVar3 = storeWordConditionalIndexed(uVar7 - 1,0,lVar5);
                *puVar8 = uVar3;
                bVar9 = 2;
              }
            } while (!(bool)(bVar9 >> 1 & 1));
            if (uVar7 == 1) {
              fn_8267BE38();
            }
          }
        }
      }
    }
  }
  return;
}

