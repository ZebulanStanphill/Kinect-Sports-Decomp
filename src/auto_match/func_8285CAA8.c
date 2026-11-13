extern int fn_828116B8();
extern int fn_8285A980();
extern int fn_8285ABD8();
extern int fn_8285CA00();
extern int fn_82862A60();
extern unsigned int lbl_8321157C;
extern unsigned int lbl_83211580;
extern unsigned int lbl_83211584;
extern unsigned int lbl_83211588;
extern unsigned int lbl_8321158C;
extern unsigned int lbl_8321159C;


unsigned __int64
fn_8285CAA8(int param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  int iVar1;
  char cVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  
  iVar1 = fn_828116B8(lbl_8321159C,*(unsigned int *)(param_1 + 0x44));
  if ((iVar1 == 0) && (iVar1 = fn_8285ABD8(param_2,lbl_8321157C), iVar1 != 0)) {
    fn_8285A980((double)lbl_83211584,*(unsigned int *)(param_2 + 0x14),
                      *(unsigned short *)(param_2 + 0x18),lbl_83211580);
    cVar2 = fn_82862A60(0xffffffff832115b0,param_3,lbl_8321158C,param_6);
    if (cVar2 != '\0') {
      uVar3 = *(unsigned short *)(param_2 + 0x18);
      if (1 < uVar3) {
        uVar4 = 1;
        do {
          fn_8285A980((double)lbl_83211584,*(unsigned int *)(param_2 + 0x14),uVar3,lbl_83211580)
          ;
          uVar4 = uVar4 + 1;
          uVar3 = *(unsigned short *)(param_2 + 0x18);
        } while (uVar4 < uVar3);
      }
      lbl_83211588 = uVar3;
      if (((*(int *)(param_4 + 0x40) != 0) &&
          (iVar1 = *(int *)(*(int *)(param_4 + 0x40) + 0x44), iVar1 != 0)) &&
         (iVar1 = fn_8285CA00(param_2,iVar1,param_5), iVar1 != 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

