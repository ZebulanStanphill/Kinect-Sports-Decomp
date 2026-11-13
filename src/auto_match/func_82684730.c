extern int fn_82670230();
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_82684338();
extern int fn_826895E8();
extern int fn_82689650();
extern int fn_826896B8();
extern unsigned int lbl_831E7E64;


unsigned __int64 fn_82684730(int param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  iVar8 = lbl_831E7E64;
  if (param_2[10] != 0) {
    iVar8 = param_2[10];
  }
  if (*param_2 == 1) {
    iVar5 = param_2[4];
    if (iVar5 != 0) {
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
    }
    uVar10 = *(unsigned int *)(iVar5 + 0xc);
    uVar9 = *(unsigned int *)(iVar5 + 0x10);
LAB_82684840:
    if (*(char *)(param_1 + 0xc) == '\0') {
      iVar1 = param_2[6];
      if ((iVar1 == 0) || (*(int **)(iVar1 + 0xc) == (int *)0x0)) {
        fn_8267C498(iVar5);
        goto LAB_8268498c;
      }
      if ((*(unsigned int *)(iVar1 + 0x1c) & 0x10000) != 0) goto LAB_8268484c;
      if ((*(char *)(param_2 + 0xb) != '\0') && ((*(unsigned int *)(iVar1 + 0x1c) & 0x100000) == 0)) {
        uVar2 = fn_8267B890(iVar8,0x24,0);
        if ((uVar2 & 0xffffffff) == 0) goto LAB_8268487c;
        uVar3 = 1;
        goto LAB_82684868;
      }
      piVar6 = (int *)(**(int (***)())(**(int **)(iVar1 + 0xc) + 8))();
      if (piVar6 != (int *)0x0) {
        cVar7 = (**(int (***)())(*piVar6 + 8))(piVar6,iVar5 + 8,1);
        if (cVar7 != '\0') {
          uVar2 = fn_8267B890(iVar8,0x24,0);
          if ((uVar2 & 0xffffffff) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = fn_826896B8(uVar2,piVar6,uVar10,uVar9);
          }
          fn_82670230(piVar6);
          fn_8267C498(iVar5);
          return uVar3;
        }
        fn_82670230(piVar6);
      }
      uVar3 = 0;
    }
    else {
LAB_8268484c:
      uVar2 = fn_8267B890(iVar8,0x24,0);
      if ((uVar2 & 0xffffffff) == 0) {
LAB_8268487c:
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
LAB_82684868:
        uVar3 = fn_82689650(uVar2,iVar5,uVar10,uVar9,uVar3);
      }
    }
    fn_8267C498(iVar5);
  }
  else {
    if (*param_2 == 2) {
      lVar4 = (**(int (***)())(*(int *)param_2[5] + 4))
                        ((int *)param_2[5],
                         ((unsigned __int64)*(unsigned int *)(param_2[4] + 0x10) & 0xfffffffc) + 8,0x21,0x1b6);
      if (lVar4 != 0) {
        iVar5 = fn_82684338(lVar4,*(unsigned int *)(param_2[4] + 8),param_2[1],param_2[7],param_2[8]
                              ,param_2[9],param_2[10]);
        if (iVar5 != 0) {
          uVar10 = (unsigned int)*(unsigned short *)(param_2[4] + 0x14);
          uVar9 = (unsigned int)*(unsigned short *)(param_2[4] + 0x16);
          fn_8267C4F0(lVar4);
          goto LAB_82684840;
        }
        fn_8267C4F0(lVar4);
      }
    }
    else {
      uVar2 = fn_8267B890(iVar8,0x24,0);
      if ((uVar2 & 0xffffffff) != 0) {
        uVar3 = fn_826895E8(uVar2,0,0);
        return uVar3;
      }
    }
LAB_8268498c:
    uVar3 = 0;
  }
  return uVar3;
}

