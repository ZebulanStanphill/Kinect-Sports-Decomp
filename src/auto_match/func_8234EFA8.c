#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8234F188();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


void fn_8234EFA8(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  unsigned __int64 uStack_30;
  
  fn_8255FD70(&uStack_30,*(unsigned int *)*param_1,param_2);
  iVar3 = (int)(((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar1 = (int)((float)(__int64)((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) - (int)(((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) >> 2) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
  iVar2 = *(int *)(iVar1 * 4 + (int)(((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF));
  dVar4 = (double)*(float *)(iVar2 + 0x4c);
  uStack_30 = (__int64)iVar1;
  if (dVar4 == (double)lbl_821954E8) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uStack_30 = CONCAT44(lbl_83265A28,iVar1) & 0x7fffffffffffff | 0x3f80000000000000;
    dVar4 = (double)((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) - lbl_821CA460);
  }
  fn_8234F188(dVar4,(double)*(float *)(iVar2 + 0x48),(double)*(float *)(iVar2 + 0x50),
                    (double)*(float *)(iVar2 + 0x54),param_1,iVar2 + 0x40,iVar2 + 0x44);
  if (iVar3 != 0) {
    fn_8265CA20(iVar3);
  }
  return;
}

