extern char lbl_83219D50[];

extern int fn_82A3F678();
extern int fn_82A3FE48();
extern int fn_82A3FEE0();
extern void *fn_82A3FF60(void *,unsigned,unsigned,int);
extern int *fn_82A42038(void *);


int fn_82A426A8(unsigned int *param_1,unsigned int param_2,void *param_3)

{
  void *iVar1;
  int *piVar2;
  int lVar3;
  
  lVar3 = 0;
  if (param_1 == (unsigned int *)0x0) {
    lVar3 = -0x7769ffff;
  }
  if ((param_2 & 0xfffffffe) != 0) {
    lVar3 = -0x7769ffff;
  }
  if (((int)lVar3 >= 0) && (lVar3 = fn_82A3FE48(lbl_83219D50), lVar3 >= 0)) {
    iVar1 = fn_82A3FF60(lbl_83219D50,0x3f8c,0x20970001,0);
    piVar2 = iVar1 ? fn_82A42038(iVar1) : 0;
    if (piVar2 == (int *)0x0) {
      lVar3 = -0x7ff8fff2;
    }
    else {
      lVar3 = fn_82A3F678(piVar2);
      if ((lVar3 < 0) || (lVar3 = (*(int (**)())(*piVar2 + 0x14))(piVar2,param_2,param_3), lVar3 < 0))
      {
        (*(int (**)())(*piVar2 + 8))(piVar2);
      }
      else {
        *param_1 = piVar2;
      }
    }
    fn_82A3FEE0(lbl_83219D50);
  }
  return lVar3;
}

