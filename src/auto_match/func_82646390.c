typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82637398();
extern int fn_82639238();
extern int fn_82639EA8();
extern int fn_8263E9F0();
extern int fn_82643B08();
extern int fn_82645110();
extern int fn_826458A0();
extern int fn_82645EA8();
extern int fn_8264F1D8();
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned __int64
fn_82646390(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4,unsigned __int64 param_5
             )

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int *puVar4;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned char bVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_64;
  
  if (param_4 == (unsigned int *)0x0) {
    if ((param_5 & 0xffffffff) != 0) {
      param_4 = (unsigned int *)(param_2 + 0x3280);
      goto LAB_826463dc;
    }
  }
  else {
LAB_826463dc:
    if (((param_5 & 0xffffffff) != 0) && (uVar9 = 0, *(int *)(param_2 + 0x327c) != 0)) {
      uVar10 = 0;
      do {
        stack_pair_70.first = *param_4;
        stack_pair_70.second = param_4[1];
        uStack_68 = param_4[2];
        uStack_64 = param_4[3];
        uVar1 = *(unsigned int *)(*(int *)(param_2 + 0x3264) + 0x24);
        if (uStack_68 == (uVar1 >> 0x12) + 1) {
          uStack_68 = uStack_68 + 7 & 0xfffffff8;
        }
        if (uStack_64 == (uVar1 >> 3 & 0x7fff) + 1) {
          uStack_64 = uStack_64 + 7 & 0xfffffff8;
        }
        fn_82645EA8(param_2,3 << (uVar10 & 0x3f));
        fn_82639238(param_2,(~(unsigned __int64)*(unsigned char *)(param_2 + 0x2abf) & 0xffffffff) >> 4 & 2);
        if (uVar9 < *(int *)(param_2 + 0x327c) - 1U) {
          uVar6 = param_3;
          if (*(int *)(param_2 + 0x3148) != 0) {
            uVar6 = param_3 | 0x100;
          }
          if (*(int *)(param_2 + 0x3158) != 0) {
            uVar6 = uVar6 | 0x200;
          }
          fn_8263E9F0((double)*(float *)(param_2 + 0x3450),param_2,uVar6,&stack_pair_70.first,0,0,
                            param_5,param_4,0);
        }
        else {
          fn_8263E9F0(param_1,param_2,param_3,&stack_pair_70.first,0,0,param_5,param_4,0);
        }
        uVar9 = uVar9 + 1;
        param_4 = param_4 + 4;
        uVar10 = uVar10 + 2;
      } while (uVar9 < *(unsigned int *)(param_2 + 0x327c));
    }
  }
  fn_82645EA8(param_2,0);
  fn_82639238(param_2,2);
  uVar9 = 0x1000000 << (*(unsigned int *)(param_2 + 0x2c3c) & 0x3f);
  if ((*(unsigned int *)(param_2 + 0x3434) & 0x3f000000) != 0) {
    uVar9 = *(unsigned int *)(param_2 + 0x3434) & 0x3f000000;
  }
  if (*(int *)(param_2 + 0x327c) == 1) {
    fn_82645110(param_2);
  }
  else {
    fn_82645EA8(param_2,0xffffffff80000000);
    uVar10 = *(unsigned int *)(param_2 + 0x3500);
    if (uVar10 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = ((unsigned __int64)(uVar10 >> 0x14) + 0x200 & 0x1000) + ((unsigned __int64)uVar10 & 0x1fffffff) +
              -0x40000000;
    }
    fn_826458A0(param_2,uVar9,0xffffffff8264ef50,lVar7);
    fn_82645EA8(param_2,0);
    fn_82645110(param_2);
    puVar4 = *(unsigned int **)(param_2 + 0x350c);
    if (*(unsigned int **)(param_2 + 0x3510) < puVar4 + 2) {
      puVar4 = (unsigned int *)fn_82643B08(param_2 + 0x3500);
    }
    *puVar4 = 0x88000000;
    puVar4[1] = 0x80000000;
    *(unsigned int **)(param_2 + 0x350c) = puVar4 + 2;
    puVar4 = *(unsigned int **)(param_2 + 0x350c);
    if (*(unsigned int **)(param_2 + 0x3510) < puVar4 + 3) {
      puVar4 = (unsigned int *)fn_82643B08(param_2 + 0x3500);
    }
    *puVar4 = 0x89000000;
    uVar10 = *(unsigned int *)(param_2 + 0x3470);
    if (uVar10 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = ((uVar10 >> 0x14) + 0x200 & 0x1000) + (uVar10 & 0x1fffffff) + -0x40000000;
    }
    puVar4[1] = iVar5;
    uVar10 = *(unsigned int *)(param_2 + 0x34e8);
    if (uVar10 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = ((uVar10 >> 0x14) + 0x200 & 0x1000) + (uVar10 & 0x1fffffff) + -0x40000000;
    }
    puVar4[2] = iVar5;
    *(unsigned int **)(param_2 + 0x350c) = puVar4 + 3;
  }
  puVar4 = *(unsigned int **)(param_2 + 0x350c);
  if (*(unsigned int **)(param_2 + 0x3510) < puVar4 + 1) {
    puVar4 = (unsigned int *)fn_82643B08(param_2 + 0x3500);
  }
  *puVar4 = 0x87000000;
  bVar8 = *(unsigned char *)(param_2 + 0x2abc);
  *(unsigned int **)(param_2 + 0x350c) = puVar4 + 1;
  *(unsigned int *)(param_2 + 0x3264) = 0;
  *(unsigned int *)(param_2 + 0x325c) = 0;
  *(unsigned char *)(param_2 + 0x2abc) = bVar8 & 0xdf;
  *(unsigned char *)(param_2 + 0x2abf) = *(unsigned char *)(param_2 + 0x2abf) & 0xcf;
  if ((((bVar8 & 8) == 0) && ((bVar8 & 4) == 0)) && (*(char *)(param_2 + 0x304b) == '\0')) {
    if ((bVar8 & 0x10) == 0) {
      if (((((*(unsigned char *)(param_2 + 0x2abc) & 0x20) == 0) ||
           ((*(int *)(param_2 + 0x3268) != *(int *)(param_2 + 0x3148) &&
            (*(int *)(param_2 + 0x3148) != 0)))) ||
          ((*(int *)(param_2 + 0x326c) != *(int *)(param_2 + 0x314c) &&
           (*(int *)(param_2 + 0x314c) != 0)))) ||
         ((((*(int *)(param_2 + 0x3270) != *(int *)(param_2 + 0x3150) &&
            (*(int *)(param_2 + 0x3150) != 0)) ||
           ((*(int *)(param_2 + 0x3274) != *(int *)(param_2 + 0x3154) &&
            (*(int *)(param_2 + 0x3154) != 0)))) ||
          ((*(int *)(param_2 + 0x3278) != *(int *)(param_2 + 0x3158) &&
           (*(int *)(param_2 + 0x3158) != 0)))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
    bVar8 = 1;
    if (bVar2) goto LAB_826467e4;
  }
  bVar8 = 0;
LAB_826467e4:
  *(unsigned int *)(param_2 + 0x3258) = 0;
  *(unsigned int *)(param_2 + 0x3254) = 0xffffffff;
  *(unsigned int *)(param_2 + 0x2ab4) = 0;
  *(unsigned int *)(param_2 + 0x2ab8) = 0;
  *(unsigned char *)(param_2 + 0x2abc) = bVar8 | *(unsigned char *)(param_2 + 0x2abc) & 0xfe;
  iVar5 = fn_8264F1D8(param_2,uVar9);
  fn_82639EA8(param_2,0xffffffff821cc030);
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    fn_82637398(param_2,0);
    uVar3 = 0xffffffff8007000e;
  }
  return uVar3;
}

