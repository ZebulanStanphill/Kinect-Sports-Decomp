typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_50;
extern int fn_827672A0();


float * fn_82769B98(int param_1,int param_2,float *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int auStack_50;
  short sStack_48;
  short sStack_46;
  short sStack_44;
  short sStack_42;
  
  iVar5 = param_2 * 8 + *(int *)(param_1 + 0x10);
  auStack_50 = *(unsigned int *)(param_1 + 8);
  iVar3 = iVar5 + 4;
  iVar1 = **(int **)(param_1 + 8);
  iVar4 = iVar1 + iVar3;
  fn_827672A0(&auStack_50,
                CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)(iVar4 + 3),*(unsigned char *)(iVar4 + 2)),
                                  *(unsigned char *)(iVar4 + 1)),*(unsigned char *)(iVar1 + iVar3)));
  if ((sStack_44 <= sStack_48) || (bVar2 = true, sStack_42 <= sStack_46)) {
    bVar2 = false;
  }
  if (!bVar2) {
    iVar5 = iVar5 + 2;
    sStack_42 = 0;
    sStack_46 = 0;
    sStack_48 = 0;
    sStack_44 = CONCAT11(*(unsigned char *)(iVar1 + iVar5 + 1),*(unsigned char *)(iVar1 + iVar5));
  }
  param_3[2] = (float)(__int64)sStack_44;
  param_3[3] = (float)(__int64)sStack_42;
  param_3[1] = (float)(__int64)sStack_46;
  *param_3 = (float)(__int64)sStack_48;
  return param_3;
}

