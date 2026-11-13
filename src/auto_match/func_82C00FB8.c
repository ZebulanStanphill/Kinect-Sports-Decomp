extern unsigned int *auStack_50;
extern int fn_823AA370();
extern int fn_823AAD90();
extern int fn_828D45F8();
extern int fn_82C00C90();
extern unsigned int lbl_82002AE0;


void fn_82C00FB8(int *param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar5;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned char bVar6;
  unsigned short *puVar7;
  __int64 lVar8;
  unsigned short auStack_50 [1];
  
  puVar7 = auStack_50;
  auStack_50[0] = 0;
  lVar8 = 8;
  do {
    puVar7 = puVar7 + 1;
    *puVar7 = 0;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar5 = (**(int (***)())(*param_1 + 0x54))(param_1,4);
  if (-1 < iVar5) {
    uVar2 = fn_823AA370(param_2);
    uVar3 = fn_828D45F8(param_2);
    uVar4 = fn_823AAD90(param_2);
    iVar5 = fn_82C00C90(param_1,uVar4,uVar3,uVar2,auStack_50);
    if (-1 < iVar5) {
      piVar1 = (int *)param_1[0xe];
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 0x48))(piVar1);
        param_1[0xe] = 0;
        bVar6 = -(param_1[0xa5] != 0) & 0x10;
        (**(int (***)())(*(int *)param_1[0xa4] + 0x20))
                  ((double)lbl_82002AE0,(int *)param_1[0xa4],param_1 + 0xe,auStack_50,bVar6 | 2,
                   bVar6,0xffffffff83175b58,0,0);
      }
    }
  }
  return;
}

