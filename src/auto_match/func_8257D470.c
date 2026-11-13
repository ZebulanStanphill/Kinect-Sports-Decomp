#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82563908();
extern int fn_8257D6A0();
extern int fn_8257D9B8();
extern int fn_825A4ED0();
extern int fn_825A5070();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831D44F0;


unsigned __int64 fn_8257D470(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  
  if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x1c))();
  }
  if ((uVar3 & 0xffffffff) != 0) {
    puVar7 = (unsigned int *)(param_1 + 0x1dc);
    lVar8 = 2;
    do {
      puVar2 = puVar7 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar2 | 0x4000;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    puVar7 = (unsigned int *)(param_1 + 0x1dc);
    lVar8 = 2;
    do {
      puVar2 = puVar7 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar2 | 0x80;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    puVar7 = (unsigned int *)(param_1 + 0x1dc);
    lVar8 = 2;
    do {
      puVar2 = puVar7 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar2 | 8;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    puVar7 = (unsigned int *)(param_1 + 0x1dc);
    lVar8 = 2;
    do {
      puVar2 = puVar7 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar2 | 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    *(unsigned int *)(param_1 + 0xb64) = *(unsigned int *)(param_2 + 0x5c0);
    *(unsigned int *)(param_1 + 0xb68) = *(unsigned int *)(param_2 + 0x5c4);
    iVar6 = *(int *)(param_1 + 0x8c0);
    uVar4 = CONCAT44(*(unsigned int *)(param_2 + 0x5d0),lbl_821CA460);
    *(unsigned __int64 *)(iVar6 + 0x50) = *(unsigned __int64 *)(param_2 + 0x5c8);
    *(unsigned __int64 *)(iVar6 + 0x58) = uVar4;
    *(int *)(*(int *)(param_2 + 0x84) + 0x3e4) = param_1;
    uVar1 = *(unsigned int *)(param_1 + 0x890);
    uVar3 = (unsigned __int64)uVar1;
    if (*(int *)(uVar1 + 0xc) == 5) {
      uVar4 = fn_825A4ED0(uVar3);
      uVar3 = fn_825A5070(uVar3,uVar4);
    }
    else {
      uVar3 = (unsigned __int64)*(unsigned int *)(uVar1 + 8);
    }
    if ((uVar3 & 0xffffffff) != 0) {
      uVar5 = fn_82563908((double)*(float *)(param_2 + 0x504),
                                (double)*(float *)(param_2 + 0x500),uVar3,param_1);
      *(int *)(param_1 + 0x7c4) = (int)uVar3;
      *(unsigned int *)(param_1 + 0x7c0) = uVar5;
    }
    fn_8257D6A0(param_1,*(unsigned int *)(param_2 + 0x84));
    if (*(int *)(param_1 + 0x8c0) == 0) {
      uVar4 = 0xffffffff82196288;
    }
    else {
      uVar4 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x20))();
    }
    iVar6 = fn_8257D9B8(uVar4,param_2 + 0x5bc);
    if (iVar6 != 0) {
      lbl_831D44F0 = 1;
      *(unsigned int *)(param_1 + 0xb60) = 1;
    }
    puVar7 = (unsigned int *)(param_1 + 0x1dc);
    lVar8 = 2;
    do {
      puVar2 = puVar7 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar2 | 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    *(unsigned int *)(param_1 + 0xa20) = 1;
    *(unsigned int *)(param_1 + 0x990) = 1;
    uVar3 = 1;
    *(unsigned int *)(param_1 + 0xb0c) = 1;
    *(unsigned int *)(param_1 + 0xb74) = 0;
  }
  return uVar3;
}

