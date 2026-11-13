extern int fn_827F15D0();
extern int fn_827F4010();


void fn_827F1A20(unsigned __int64 param_1,__int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  iVar2 = (int)param_2;
  uVar6 = (unsigned __int64)*(unsigned short *)(iVar2 + 0xe8) - 1;
  if (-1 < (__int64)uVar6) {
    lVar4 = ((unsigned __int64)*(unsigned short *)(iVar2 + 0xe8) + 0x27) * 4 + param_2;
    do {
      if ((*(unsigned short *)((((unsigned int)((uVar6 & 0xffffffff) >> 4) & 0xfff) + 0x77) * 2 + iVar2) >>
           ((unsigned int)uVar6 & 0xf) & 1) == 0) {
        (**(int (***)())(*(int *)*(unsigned int *)lVar4 + 4))(param_1);
      }
      uVar6 = uVar6 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (__int64)uVar6);
  }
  if ((*(unsigned short *)(iVar2 + 0xea) & 1) != 0) {
    lVar4 = (unsigned __int64)*(unsigned short *)(iVar2 + 0xe8) - 1;
    if (-1 < lVar4) {
      lVar5 = ((unsigned __int64)*(unsigned short *)(iVar2 + 0xe8) + 0x17) * 4 + param_2;
      do {
        iVar1 = *(int *)lVar5;
        iVar3 = fn_827F4010(((int *)lVar5)[0x10]);
        if (iVar3 != iVar1) {
          *(unsigned short *)(iVar2 + 0xea) = *(unsigned short *)(iVar2 + 0xea) & 0xfffe;
          break;
        }
        lVar4 = lVar4 + -1;
        lVar5 = lVar5 + -4;
      } while (-1 < lVar4);
    }
  }
  if (((*(unsigned short *)(iVar2 + 0xea) >> 1 & 1) == 0) || ((*(unsigned short *)(iVar2 + 0xea) & 1) == 0)) {
    fn_827F15D0(param_2);
  }
  *(unsigned char *)(iVar2 + 0x188) = 1;
  return;
}

