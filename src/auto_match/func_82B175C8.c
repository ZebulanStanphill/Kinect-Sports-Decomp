typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABDD90();


bool fn_82B175C8(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = *(unsigned int *)(param_3 + 8) >> 7 & 0x7f;
  if (uVar2 == 0x78) {
    if (((*(unsigned int *)(param_2 + 8) & 0x3f80) != 0x3000) ||
       (bVar4 = true, (*(unsigned int *)(param_2 + 8) & 0x380000) < 0x80001)) {
      bVar4 = false;
    }
    if ((**(unsigned int **)((0xc - (unsigned int)!bVar4) * 4 + param_2) >> 0x1e & 1) == 0) goto LAB_82b17644;
LAB_82b1763c:
    bVar4 = true;
  }
  else {
LAB_82b17644:
    if (uVar2 == 0x7c) {
      uVar1 = *(unsigned int *)(param_3 + 8);
      iVar3 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
      if ((*(unsigned int *)((*(unsigned int *)(iVar3 + param_3 + -8) & 0x7fff) * 0x28 + *(int *)(param_1 + 0xc) + 4
                    ) & 0x70) == 0x30) goto LAB_82b1763c;
    }
    if (param_4 == 0) {
      bVar4 = false;
    }
    else {
      if (param_4 != 1) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      bVar4 = uVar2 == 0x76;
    }
  }
  return bVar4;
}

