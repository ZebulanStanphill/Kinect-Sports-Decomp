extern int fn_82FA5060();
extern int fn_8300FA30();
extern int fn_8300FCF0();
extern int fn_8302BD60();
extern int fn_83036370();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E4;


int fn_83008DB0(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int iVar3;
  int uVar4;
  
  uVar4 = 2;
  uVar1 = fn_82FA5060(lbl_831BC768,0x1c);
  if (((uVar1) != 0) &&
     (piVar2 = (int *)fn_83036370(uVar1,0x50100,0), piVar2 != (int *)0x0)) {
    fn_8302BD60(piVar2,*(unsigned int *)(param_1 + 0x54),0,0);
    (*(int (**)())(*piVar2 + 0x14))(piVar2,*(unsigned int *)(param_1 + 0xc));
    uVar1 = fn_82FA5060(lbl_831BC768,0x38);
    if (((uVar1) != 0) && (iVar3 = fn_8300FA30(uVar1,0), iVar3 != 0)) {
      *(int **)(iVar3 + 8) = piVar2;
      *(unsigned __int64 *)(iVar3 + 0x18) = 0;
      *(unsigned int *)(iVar3 + 0x20) = 0;
      *(unsigned int *)(iVar3 + 0x28) = 0;
      fn_8300FCF0(lbl_832642E4,iVar3);
      uVar4 = 1;
    }
    (*(int (**)())(*piVar2 + 8))(piVar2);
  }
  return uVar4;
}

