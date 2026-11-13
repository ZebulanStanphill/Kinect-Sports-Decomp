#define true 1
extern unsigned int lbl_82027790;
extern unsigned int lbl_82027794;
extern unsigned int lbl_82027798;
extern unsigned int lbl_82027799;


unsigned __int64 fn_828F0248(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  int iVar3;
  unsigned int *puVar2;
  
  iVar3 = 0x31;
  puVar1 = (unsigned int *)0x820279e4;
  while( true ) {
    puVar2 = puVar1 + -3;
    iVar3 = iVar3 + -1;
    if ((puVar1[-4] == param_1) && ((*puVar2 & param_2) == param_2)) break;
    puVar1 = puVar2;
    if (puVar2 < &lbl_82027799) {
      return 0xffffffff80004005;
    }
  }
  if (param_3 != (unsigned int *)0x0) {
    iVar3 = iVar3 * 0xc;
    *param_3 = *(unsigned int *)(&lbl_82027790 + iVar3);
    param_3[1] = *(unsigned int *)(&lbl_82027794 + iVar3);
    param_3[2] = *(unsigned int *)(&lbl_82027798 + iVar3);
  }
  return 0;
}

