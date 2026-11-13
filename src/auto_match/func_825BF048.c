extern unsigned int *auStack_50;
extern int fn_825200F0();
extern int fn_827DDFB8();
extern int fn_82A1E650();


unsigned __int64 fn_825BF048(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char auStack_50 [32];
  
  iVar2 = fn_82A1E650(*(unsigned int *)(param_1 + 0x1b4),0);
  if ((iVar2 != 0x102) && (uVar5 = 0, *(int *)(*(int *)(param_1 + 0x5c) + 8) != 0)) {
    iVar2 = 0;
    do {
      puVar3 = (unsigned int *)(*(int *)(param_1 + 100) + iVar2);
      if (puVar3 != (unsigned int *)0x0) {
        uVar1 = *puVar3;
        uVar4 = uVar1 >> 0x18;
        if (uVar1 == 0) {
          uVar4 = 0x7a;
        }
        if (uVar4 == *param_2) {
          fn_825200F0(auStack_50);
          fn_827DDFB8(param_3,auStack_50);
        }
      }
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + 0xc;
    } while (uVar5 < *(unsigned int *)(*(int *)(param_1 + 0x5c) + 8));
  }
  return 0;
}

