extern unsigned int *auStack_170;
extern unsigned int *auStack_180;
extern unsigned int *auStack_4c;
extern int fn_82E57A78();
extern int fn_82E58808();
extern int fn_82E7BF78();
extern int fn_82EF0F88();
extern int fn_82EF1830();
extern int fn_82EF19C0();
extern int fn_82EF1A70();
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


__int64 fn_82E7DA30(int param_1,int *param_2)

{
  int iVar1;
  unsigned short uVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned short auStack_180;
  int *piStack_17c;
  unsigned int uStack_178;
  unsigned int uStack_174;
  unsigned char auStack_170 [292];
  unsigned char auStack_4c [4];
  unsigned int uStack_48;
  unsigned int uStack_40;
  
  piStack_17c = (int *)0x0;
  auStack_180 = 0;
  uStack_174 = 0;
  uStack_178 = 0;
  fn_82EF19C0(auStack_170);
  if (param_2 == (int *)0x0) {
    lVar4 = -0x7fffbffd;
  }
  else {
    iVar1 = (**(int (***)())(**(int **)(param_1 + 4) + 0x10))
                      (*(int **)(param_1 + 4),0xffffffff82154a58,0,&piStack_17c);
    if (iVar1 < 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = fn_82E57A78(piStack_17c,&auStack_180);
      if ((-1 < lVar4) && (lVar4 = fn_82EF1A70(auStack_4c,auStack_180), -1 < lVar4)) {
        uVar2 = 0;
        if (auStack_180 != 0) {
          do {
            lVar4 = fn_82E58808(piStack_17c,uVar2,&uStack_174);
            if (lVar4 < 0) goto LAB_82e7db88;
            lVar4 = fn_82E7BF78(uStack_174,0x104,&uStack_178);
            if (lVar4 < 0) goto LAB_82e7db88;
            lVar3 = (unsigned __int64)uStack_178 + 2;
            uStack_178 = (unsigned int)lVar3;
            lVar4 = fn_82EF1A70(auStack_4c,lVar3);
            if (lVar4 < 0) goto LAB_82e7db88;
            lVar4 = fn_82EF0F88(auStack_4c,uStack_174,lVar3);
            if (lVar4 < 0) goto LAB_82e7db88;
            uVar2 = uVar2 + 1;
          } while (uVar2 < auStack_180);
        }
        lVar4 = (**(int (***)())(*param_2 + 0x68))(param_2,0xffffffff8214c130,uStack_48,uStack_40);
      }
    }
  }
LAB_82e7db88:
  if (piStack_17c != (int *)0x0) {
    (**(int (***)())(*piStack_17c + 8))();
    piStack_17c = (int *)0x0;
  }
  fn_82EF1830(auStack_170);
  return lVar4;
}

