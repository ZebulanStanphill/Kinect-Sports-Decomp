extern unsigned int fStack_60;
extern int fn_8225B920();
extern int fn_825231B8();
extern int fn_828EA608();
extern int fn_82A1DD38();
extern int XMemSet();
extern unsigned int iStack_5c;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A40;
extern unsigned int lbl_83265A48;
extern unsigned int lbl_832760AC;
extern unsigned int lbl_832767BC;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_8225B9B0(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  char cVar2;
  int iVar1;
  __int64 lVar3;
  float fStack_60;
  int iStack_5c;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  fn_82A1DD38(&fStack_60,param_2,8);
  if (((fStack_60 == lbl_821CA460) && (iStack_5c != 0)) &&
     (((((unsigned __int64)lbl_83265A48 + 7 & 0xffffffff) >> 3) +
       (((unsigned __int64)lbl_83265A40 + 7 & 0xffffffff) >> 3) +
       (((unsigned __int64)lbl_83265A38 + 7 & 0xffffffff) >> 3) +
       (((unsigned __int64)lbl_832760AC + 7 & 0xffffffff) >> 3) +
       ((unsigned __int64)lbl_832767BC + 7 & 0x3fffffff) * 4 & 0xffffffff) <= (param_3 & 0xffffffff))) {
    cVar2 = fn_828EA608(param_1);
    if (cVar2 == '\0') {
      return 1;
    }
    fn_82A1DD38(&stack_pair_50.first,param_2 + 8,0x14);
    if ((((unsigned __int64)stack_pair_50.second == ((unsigned __int64)lbl_83265A40 + 7 & 0xffffffff) >> 3) &&
        ((unsigned __int64)stack_pair_50.first == ((unsigned __int64)lbl_83265A38 + 7 & 0xffffffff) >> 3)) &&
       (((unsigned __int64)uStack_48 == ((unsigned __int64)lbl_83265A48 + 7 & 0xffffffff) >> 3 &&
        ((uStack_44 == lbl_832767BC &&
         ((unsigned __int64)uStack_40 == ((unsigned __int64)lbl_832760AC + 7 & 0xffffffff) >> 3)))))) {
      fn_8225B920(param_1,0,param_2 + 0x1c);
      lVar3 = (unsigned __int64)stack_pair_50.first + param_2 + 0x1c;
      fn_8225B920(param_1,1,lVar3,stack_pair_50.second);
      lVar3 = (unsigned __int64)stack_pair_50.second + lVar3;
      fn_8225B920(param_1,2,lVar3,uStack_48);
      lVar3 = (unsigned __int64)uStack_48 + lVar3;
      if (lbl_832767BC == uStack_44) {
        fn_82A1DD38(*(unsigned int *)(param_1 + 0x100),lVar3,lbl_832767BC << 2);
      }
      iVar1 = fn_825231B8(lbl_832760AC);
      fn_82A1DD38(*(unsigned int *)(iVar1 + 8),((unsigned __int64)uStack_44 & 0x3fffffff) * 4 + lVar3,
                        ((unsigned __int64)lbl_832760AC + 7 & 0xffffffff) >> 3);
                    /* WARNING: Subroutine does not return */
      XMemSet(*(unsigned int *)(*(int *)(param_1 + 0xfc) + 8),0,
                        *(unsigned int *)(*(int *)(param_1 + 0xfc) + 4));
    }
  }
  return 0;
}

