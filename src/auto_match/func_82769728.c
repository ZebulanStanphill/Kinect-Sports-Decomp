typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_40;
extern int fn_827672A0();


double fn_82769728(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int auStack_40;
  short sStack_38;
  short sStack_36;
  short sStack_34;
  short sStack_32;
  
  iVar5 = param_2 * 8 + *(int *)(param_1 + 0x10);
  auStack_40 = *(unsigned int *)(param_1 + 8);
  iVar3 = iVar5 + 4;
  iVar1 = **(int **)(param_1 + 8);
  iVar4 = iVar1 + iVar3;
  fn_827672A0(&auStack_40,
                CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)(iVar4 + 3),*(unsigned char *)(iVar4 + 2)),
                                  *(unsigned char *)(iVar4 + 1)),*(unsigned char *)(iVar1 + iVar3)));
  if ((sStack_34 <= sStack_38) || (bVar2 = true, sStack_32 <= sStack_36)) {
    bVar2 = false;
  }
  if (!bVar2) {
    iVar5 = iVar5 + 2;
    sStack_38 = 0;
    sStack_34 = CONCAT11(*(unsigned char *)(iVar1 + iVar5 + 1),*(unsigned char *)(iVar1 + iVar5));
  }
  return (double)(__int64)((int)sStack_34 - (int)sStack_38);
}

