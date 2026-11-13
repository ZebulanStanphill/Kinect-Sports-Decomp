typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_40;
extern int fn_82767170();
extern int fn_827671F0();


double fn_82769330(int param_1,int param_2)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int auStack_40;
  short sStack_38;
  short sStack_36;
  short sStack_34;
  short sStack_32;
  
  auStack_40 = *(unsigned int *)(param_1 + 8);
  uVar3 = fn_82767170();
  fn_827671F0(&auStack_40,uVar3);
  if ((sStack_34 <= sStack_38) || (bVar2 = true, sStack_32 <= sStack_36)) {
    bVar2 = false;
  }
  if (!bVar2) {
    sStack_38 = 0;
    iVar5 = param_2 * 8 + *(int *)(param_1 + 0x10);
    uVar1 = iVar5 + 2;
    uVar4 = iVar5 + 3;
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0xc);
    sStack_34 = CONCAT11(*(unsigned char *)
                          (*(int *)((uVar4 >> 10 & 0x3ffffc) + iVar5) + (uVar4 & 0xfff)),
                         *(unsigned char *)
                          (*(int *)((uVar1 >> 10 & 0x3ffffc) + iVar5) + (uVar1 & 0xfff)));
  }
  return (double)(__int64)((int)sStack_34 - (int)sStack_38);
}

