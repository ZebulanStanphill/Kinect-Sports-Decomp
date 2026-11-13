extern unsigned int *auStack_60;
extern int fn_82554860();
extern int fn_8255FD70();
extern int fn_8255FEE8();
extern int fn_8265CA20();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_70;


void fn_824C7510(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uStack_70;
  unsigned char auStack_60 [72];
  
  fn_8255FD70(&uStack_70,*(unsigned int *)(param_1 + 0x1c8),param_2);
  iVar3 = (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar1 = (int)((float)(__int64)((((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) - (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 2) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
  puVar2 = (unsigned int *)(iVar1 * 4 + (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF));
  uStack_70 = (__int64)iVar1;
  lVar4 = fn_8255FEE8((double)lbl_82192734,*puVar2,auStack_60,0);
  fn_82554860(param_1 + 4,0,lVar4 + 0x40,auStack_60);
  if (iVar3 != 0) {
    fn_8265CA20(iVar3);
  }
  return;
}

