extern float fRam83270244;
extern float fRam83270248;
extern int fn_8251F720();
extern int fn_8265BF48();
extern int fn_8284C850();
extern int iRam83270240;
extern int iRam83270250;
extern int iRam83270258;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_83297898;
extern unsigned int lbl_8329E4FC;
extern unsigned int uRam8327024c;
extern unsigned int uRam83270254;


void fn_825F51D8(void)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if ((lbl_8329E4FC & 1) == 0) {
    lbl_8329E4FC = lbl_8329E4FC | 1;
    lbl_83297898 = fn_8265BF48(0xffffffff821ca420,0);
  }
  iRam83270240 = fn_8251F720(0xffffffff83297898,0);
  iVar1 = fn_8284C850(*(unsigned int *)(iRam83270240 + 0x14));
  fRam83270244 = lbl_821916FC / (float)(__int64)iVar1;
  iVar1 = fn_8284C850(*(unsigned int *)(iRam83270240 + 0x14));
  uVar3 = lbl_8326B430 - 6;
  uVar2 = lbl_8326B434 - 6;
  iRam83270250 = ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
  uRam8327024c = 4;
  uRam83270254 = 4;
  fRam83270248 = lbl_821CA460 / (float)(__int64)iVar1;
  iRam83270258 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
  return;
}

