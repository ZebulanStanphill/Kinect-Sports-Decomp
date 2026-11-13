extern int fn_82528EE0();
extern int fn_82F64988();
extern unsigned int lbl_832765BC;


void fn_8235A590(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  int iVar1;
  __int64 lVar2;
  
  if (lbl_832765BC == 0) {
    fn_82528EE0(param_2,param_3,0xffffffff821b2618,param_1);
    iVar1 = 0;
  }
  else {
    lVar2 = 0;
    iVar1 = 0x10;
    do {
      if (*(int *)(iVar1 + *(int *)(lbl_832765BC + 0x28)) == (int)param_1) goto code_r0x8235a5f0;
      iVar1 = iVar1 + 4;
      lVar2 = lVar2 + 1;
    } while (iVar1 < 0x18);
    lVar2 = -1;
code_r0x8235a5f0:
    fn_82F64988(param_2,param_3,(unsigned __int64)*(unsigned int *)(lbl_832765BC + 0x3c) + lVar2 * 0x11c + 8)
    ;
    iVar1 = ((unsigned int)LZCOUNT((int)lVar2) >> 5 ^ 1) + 1;
  }
  *param_4 = iVar1;
  return;
}

