extern int fn_82555040();
extern int fn_82A427B0();
extern int fn_82BFF338();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int *lbl_8327FAFC;
extern unsigned int *lbl_8327FBB8;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


unsigned __int64 fn_82554F20(__int64 param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned __int64 *puVar3;
  __int64 lVar4;
  unsigned __int64 uStack_88;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  
  if ((lbl_8327FAFC != (int *)0x0) ||
     ((iVar2 = fn_82A427B0(0xffffffff8327fafc,0,4), -1 < iVar2 &&
      (iVar2 = (**(int (***)())(*lbl_8327FAFC + 0x28))(lbl_8327FAFC,0xffffffff8327fbb8,0,0,0,0,0),
      -1 < iVar2)))) {
    (**(int (***)())(*lbl_8327FBB8 + 0x30))((double)lbl_821CA460);
    puVar3 = &uStack_88;
    lVar4 = 9;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    stack_pair_80.second = 2;
    uStack_78 = 2;
    stack_pair_80.first = 3;
    uStack_70 = 2;
    uStack_74 = 5;
    uStack_6c = 5;
    uStack_60 = param_2;
    uStack_5c = param_3;
    iVar2 = fn_82BFF338(lbl_8320A898,lbl_8327FAFC,&stack_pair_80.first,param_1 + 0x18);
    if (-1 < iVar2) {
      uVar1 = fn_82555040(param_1,param_4);
      return uVar1;
    }
  }
  return 0;
}

