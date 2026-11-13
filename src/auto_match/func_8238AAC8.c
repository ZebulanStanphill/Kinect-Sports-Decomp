extern unsigned int *auStack_a0;
extern int fn_822A1630();
extern int fn_822A1968();
extern int fn_82359698();
extern int fn_82372A58();
extern int fn_8238A840();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_825521F0();
extern int fn_825604A0();
extern int fn_82566E58();
extern int fn_82567CC0();
extern int iRam83276568;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821B44EC;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8238AD00;
extern unsigned int uStack_40;


/* WARNING: Removing unreachable block (ram,0x8238ab38) */
/* WARNING: Removing unreachable block (ram,0x8238ac74) */

void fn_8238AAC8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  double dVar5;
  unsigned int auStack_a0 [4];
  unsigned char **ppuStack_90;
  unsigned char *puStack_8c;
  unsigned char ***pppuStack_80;
  unsigned char **ppuStack_70;
  unsigned char *puStack_6c;
  unsigned char ***pppuStack_60;
  unsigned int uStack_40;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar3 == 1) {
    iVar3 = fn_822A1968(*(unsigned int *)(iVar1 + 0xd4));
    if (iVar3 != 0) {
      return;
    }
    uVar4 = 2;
  }
  else if (iVar3 == 2) {
    iVar3 = iRam83276568;
    if (*(int *)(param_1 + 0x198) == 0) {
      puStack_6c = &lbl_8238AD00;
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821B44EC;
      fn_825521F0((double)lbl_821CA460,(double)lbl_8218E8E8,param_1,param_2,&ppuStack_70);
      iRam83276568 = 0;
      *(unsigned int *)(param_1 + 0x198) = 1;
      iVar3 = 0;
    }
    if (iVar3 == 0) {
      return;
    }
    uVar4 = 3;
    *(unsigned int *)(param_1 + 0x198) = 0;
  }
  else {
    if (iVar3 == 3) {
      fn_822A1630(*(unsigned int *)(iVar1 + 0xd4),4);
      fn_8238A840(param_1,4);
      auStack_a0[0] = *(unsigned int *)(iVar1 + 0x314);
      auStack_a0[0] =
           fn_82535298(auStack_a0,**(unsigned int **)(iVar1 + 0x9b8),0xffffffff83296bc0,
                             0xffffffff83296bd0);
      fn_82536288(auStack_a0);
      return;
    }
    if (iVar3 != 4) {
      if (iVar3 != 5) {
        return;
      }
      dVar5 = (double)lbl_8218E8E8;
      iVar3 = iRam83276568;
      if (*(int *)(param_1 + 0x198) == 0) {
        puStack_8c = &lbl_8238AD00;
        pppuStack_80 = &ppuStack_90;
        ppuStack_90 = &lbl_821B44EC;
        fn_825521F0((double)lbl_821CA460,dVar5,param_1,param_2,&ppuStack_90);
        iRam83276568 = 0;
        *(unsigned int *)(param_1 + 0x198) = 1;
        iVar3 = 0;
      }
      if (iVar3 == 0) {
        return;
      }
      uStack_40 = 0;
      fn_825521F0((double)ltcg_pool_0_0f,dVar5);
      *(unsigned int *)(param_1 + 0x198) = 0;
      fn_82566E58(*(unsigned int *)(param_1 + 400),
                        *(unsigned int *)(*(int *)(param_1 + 8) + 0x9b4));
      *(unsigned int *)(param_1 + 400) = 0;
      fn_825604A0(param_1 + 0x10);
      uVar2 = fn_82372A58(*(unsigned int *)(param_1 + 8));
      fn_82359698(iVar1,uVar2);
      *(unsigned int *)(param_1 + 0xc) = 0;
      return;
    }
    iVar3 = fn_82567CC0(*(unsigned int *)(param_1 + 400),param_1 + 0x10);
    if (iVar3 == 0) {
      return;
    }
    uVar4 = 5;
  }
  *(unsigned int *)(param_1 + 0xc) = uVar4;
  return;
}

