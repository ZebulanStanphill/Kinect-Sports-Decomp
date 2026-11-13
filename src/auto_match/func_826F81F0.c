#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack_20 ((*(unsigned __int64*)&uStack_20))
extern int fn_826F6C28();
extern unsigned int iStack_1c;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int uStack_20;


void fn_826F81F0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  double dVar3;
  unsigned int uStack_20;
  int iStack_1c;
  
  if (param_2[0x6a] == 0) {
    piVar2 = (int *)(**(int (***)())(*param_2 + 0x40))(param_2);
    if (((unsigned int)piVar2[0x2c0] >> 0x11 & 1) == 0) {
      dVar3 = (double)(**(int (***)())(*piVar2 + 0xa0))();
      iVar1 = (int)(dVar3 * (double)lbl_82005CCC + (double)lbl_82002C5C);
      *(char *)(param_1 + 4) = (char)iVar1;
      _uStack_20 = CONCAT44(*(unsigned int *)(param_1 + 4),iVar1);
      fn_826F6C28(piVar2,&uStack_20);
    }
  }
  return;
}

