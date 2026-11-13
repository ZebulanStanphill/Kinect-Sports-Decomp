extern unsigned int *auStack_830;
extern unsigned int *auStack_8cc;
extern unsigned int *auStack_8d0;
extern float fRam831ce910;
extern unsigned int fStack_900;
extern int fn_82230300();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_8229D418();
extern int fn_82358FD8();
extern int fn_82520AC8();
extern unsigned int lbl_8219386C;
extern float lbl_821954D4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_8dc;


void fn_822A1830(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  float fVar2;
  unsigned __int64 uVar3;
  double dVar4;
  float fStack_900;
  unsigned int ***apppuStack_8f0 [5];
  unsigned int uStack_8dc;
  unsigned char auStack_8d0 [4];
  unsigned char auStack_8cc [156];
  unsigned char auStack_830 [2048];
  
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fStack_900 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
  fn_8223CFC0(auStack_8d0,2,1);
  fVar2 = (fStack_900 - lbl_821CA460) * lbl_821954D4;
  uVar3 = fn_82240158(auStack_8d0,(&lbl_8219386C)[param_3]);
  fn_82520AC8(uVar3,1 - (unsigned __int64)(unsigned int)(int)fVar2);
  fn_822403C8(apppuStack_8f0,auStack_8cc);
  if (uStack_8dc < 0x10) {
    apppuStack_8f0[0] = apppuStack_8f0;
  }
  fn_82358FD8(*(unsigned int *)(param_1 + 0x1c),auStack_830,0x400,apppuStack_8f0[0]);
  fn_82230300(apppuStack_8f0,1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  dVar4 = (double)fRam831ce910;
  if (*(int *)(iVar1 + 0x14) == 0) {
    fn_8229D418(iVar1,param_2,auStack_830);
    *(float *)(iVar1 + 0x10) = (float)dVar4;
    *(unsigned int *)(iVar1 + 0xc) = 1;
  }
  fn_8223DCC8(auStack_8d0);
  return;
}

