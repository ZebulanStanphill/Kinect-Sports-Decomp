typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_50;
extern int fn_82767170();
extern int fn_827671F0();


float * fn_82769900(int param_1,int param_2,float *param_3)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int auStack_50;
  short sStack_48;
  short sStack_46;
  short sStack_44;
  short sStack_42;
  
  auStack_50 = *(unsigned int *)(param_1 + 8);
  uVar3 = fn_82767170();
  fn_827671F0(&auStack_50,uVar3);
  if ((sStack_44 <= sStack_48) || (bVar2 = true, sStack_42 <= sStack_46)) {
    bVar2 = false;
  }
  if (!bVar2) {
    sStack_42 = 0;
    iVar5 = param_2 * 8 + *(int *)(param_1 + 0x10);
    sStack_46 = 0;
    uVar1 = iVar5 + 2;
    sStack_48 = 0;
    uVar4 = iVar5 + 3;
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0xc);
    sStack_44 = CONCAT11(*(unsigned char *)
                          (*(int *)((uVar4 >> 10 & 0x3ffffc) + iVar5) + (uVar4 & 0xfff)),
                         *(unsigned char *)
                          (*(int *)((uVar1 >> 10 & 0x3ffffc) + iVar5) + (uVar1 & 0xfff)));
  }
  param_3[2] = (float)(__int64)sStack_44;
  param_3[3] = (float)(__int64)sStack_42;
  param_3[1] = (float)(__int64)sStack_46;
  *param_3 = (float)(__int64)sStack_48;
  return param_3;
}

