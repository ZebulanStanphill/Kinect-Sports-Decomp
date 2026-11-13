extern unsigned int *auStack_48;
extern int fn_82E5A068();
extern int fn_82E62670();
extern int fn_82E628C8();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_820F8F08;
extern unsigned int lbl_820F8F18;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


__int64 fn_82F37278(int *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  __int64 lVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  int *piStack_50;
  int *piStack_4c;
  unsigned int auStack_48 [2];
  __int64 alStack_40 [2];
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  unsigned int uStack_24;
  
  if (param_1[0x1d] == 0) {
    return -0x3ff2c94e;
  }
  lVar3 = (**(int (***)())(*param_1 + 0x14))(param_1,param_1[0x1d],0);
  if (-1 < lVar3) {
    alStack_40[0] = 0;
    lVar3 = (**(int (***)())(*(int *)param_1[0x1d] + 0x14))((int *)param_1[0x1d],0,alStack_40);
    if (-1 < lVar3) {
      *(__int64 *)(param_1 + 0x20) = *(__int64 *)(param_1 + 0x20) + alStack_40[0];
      stack_pair_30.first = lbl_8202E618;
      stack_pair_30.second = lbl_8202E61C;
      uStack_28 = lbl_8202E620;
      uStack_24 = lbl_8202E624;
      (**(int (***)())(*(int *)param_1[0x1d] + 0xc))((int *)param_1[0x1d],&stack_pair_30.first);
      pbVar6 = &lbl_820F8F08;
      pbVar5 = (unsigned char *)&stack_pair_30.first;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar5;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar6 != &lbl_820F8F18);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        piStack_50 = (int *)0x0;
        iVar4 = fn_82E5A068(param_1[0x1d],&piStack_50);
        if (-1 < iVar4) {
          if (piStack_50 == (int *)0x0) goto LAB_82f37444;
          iVar4 = fn_82E62670(piStack_50,auStack_48);
          if (-1 < iVar4) {
            fn_82E628C8(piStack_50,auStack_48[0] | 0x80000000);
          }
          piStack_4c = (int *)0x0;
          lVar3 = (**(int (***)())*piStack_50)(piStack_50,0xffffffff82154c48,&piStack_4c);
          if ((-1 < lVar3) &&
             (lVar3 = (**(int (***)())(*param_1 + 0x14))(param_1,piStack_4c,0), piStack_4c != (int *)0x0
             )) {
            (**(int (***)())(*piStack_4c + 8))(piStack_4c);
          }
        }
        if (piStack_50 != (int *)0x0) {
          (**(int (***)())(*piStack_50 + 8))();
        }
      }
LAB_82f37444:
      if (-1 < (int)lVar3) goto LAB_82f37464;
    }
  }
  (**(int (***)())(*param_1 + 0x1c))(param_1,param_1[0x1d]);
LAB_82f37464:
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(int (***)())(*(int *)param_1[0x1d] + 8))();
    param_1[0x1d] = 0;
  }
  return lVar3;
}

