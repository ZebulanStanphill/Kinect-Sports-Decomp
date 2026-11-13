extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82933088();
extern int fn_82933428();
extern int fn_82983380();
extern int fn_829860E0();


int fn_82986C50(unsigned __int64 param_1,int param_2)

{
  __int64 lVar1;
  int iVar4;
  unsigned __int64 uVar2;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar6;
  __int64 lVar7;
  int *piVar8;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 4) == 0xe)) {
    uVar6 = (__int64)*(int *)(param_2 + 0x18) * (__int64)*(int *)(param_2 + 0x14);
    lVar1 = fn_8265C940((uVar6 & 0xfffffff) << 4,0x24810000);
    if ((lVar1 != 0) && (iVar4 = fn_829860E0(param_1,param_2,lVar1), -1 < iVar4)) {
      uVar2 = fn_82930318(0x50);
      if ((uVar2 & 0xffffffff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_82933088(uVar2,0,0,0,0,1,param_2 + 0x30);
      }
      if (iVar4 != 0) {
        if (*(int **)(param_2 + 0x10) == (int *)0x0) {
LAB_82986d1c:
          piVar8 = (int *)(iVar4 + 0x20);
          uVar2 = 0;
          lVar7 = lVar1;
          if ((uVar6 & 0xffffffff) != 0) {
            do {
              uVar3 = fn_82930318(0x14);
              if ((uVar3 & 0xffffffff) == 0) {
                iVar5 = 0;
              }
              else {
                iVar5 = fn_829304E0(uVar3,0,0,0xffffffff8204e390);
              }
              *piVar8 = iVar5;
              if (iVar5 == 0) goto LAB_82986dd8;
              uVar3 = fn_82930318(0x40);
              if ((uVar3 & 0xffffffff) == 0) {
                iVar5 = 0;
              }
              else {
                iVar5 = fn_82933428(uVar3,lVar7,param_2 + 0x30);
              }
              *(int *)(*piVar8 + 8) = iVar5;
              if (iVar5 == 0) goto LAB_82986dd8;
              uVar2 = uVar2 + 1;
              piVar8 = (int *)(*piVar8 + 0xc);
              lVar7 = lVar7 + 0x10;
            } while ((uVar2 & 0xffffffff) < (uVar6 & 0xffffffff));
          }
          fn_82983380(param_1,iVar4);
          fn_8265C990(lVar1,0x24810000);
          return iVar4;
        }
        iVar5 = (**(int (***)())(**(int **)(param_2 + 0x10) + 4))();
        *(int *)(iVar4 + 0x10) = iVar5;
        if (iVar5 != 0) goto LAB_82986d1c;
      }
    }
LAB_82986dd8:
    fn_8265C990(lVar1,0x24810000);
  }
  return 0;
}

