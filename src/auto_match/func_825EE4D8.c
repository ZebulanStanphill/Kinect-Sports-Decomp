extern int fn_82622F28();
extern int fn_82622F78();
extern int fn_82623030();
extern int fn_82638698();
extern unsigned int lbl_82193CC0;
extern unsigned int uStack_28;
extern unsigned int uStack_78;


void fn_825EE4D8(int param_1,int param_2,__int64 param_3)

{
  unsigned __int64 *puVar1;
  __int64 lVar2;
  unsigned __int64 uStack_78;
  unsigned int *apuStack_70 [18];
  unsigned int uStack_28;
  
  if ((*(int *)(param_2 + 0x80) == 0) ||
     (*(int *)(param_2 + 0x80) == ((unsigned int *)param_3)[3] + 1)) {
    if ((*(unsigned int *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 0x2000) != 0) {
      fn_82638698(*(unsigned int *)*(unsigned int *)param_3,lbl_82193CC0);
    }
    fn_82622F78(param_1,param_2,param_3);
    puVar1 = &uStack_78;
    param_3 = param_3 + -8;
    lVar2 = 10;
    do {
      param_3 = param_3 + 8;
      puVar1 = puVar1 + 1;
      *puVar1 = *(unsigned __int64 *)param_3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    uStack_28 = *(unsigned int *)(param_2 + 0x88);
    fn_82622F28(param_1,param_2,apuStack_70);
    if ((*(unsigned int *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 0x2000) != 0) {
      fn_82638698(*apuStack_70[0],0);
    }
    fn_82623030(param_1,param_2,apuStack_70);
  }
  return;
}

