extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8305D680();
extern int fn_8305D688();
extern unsigned fn_8305D7C0();
extern int fn_83060380();
extern unsigned char fn_830603C0();
extern int fn_830603D0();
extern int fn_83060CB0();
extern int fn_83060CD0();


void fn_8285B008(int *param_1,int param_2)

{
  unsigned char cVar5;
  int iVar3;
  int lVar1;
  int uVar2;
  unsigned int uVar4;
  int uVar6;
  int uVar7;
  int uVar8;
  int lVar9;
  struct { unsigned char a[16]; unsigned char b[16]; unsigned char c[16]; unsigned char it[16]; } T;
  
  fn_83060380(T.it,param_2);
  lVar9 = 0;
  fn_83060CB0(T.it);
  cVar5 = fn_830603C0(T.it);
  if (cVar5 == '\0') {
    do {
      fn_830603D0(T.it);
      iVar3 = fn_8305D680();
      if (iVar3 >= 3) {
        fn_830603D0(T.it);
        uVar4 = fn_8305D7C0();
        if (uVar4 != 3) {
          fn_830603D0(T.it);
          lVar1 = fn_8305D680();
          lVar9 = lVar1 + lVar9 + -2;
        }
      }
      fn_83060CD0(T.it);
      cVar5 = fn_830603C0(T.it);
    } while (cVar5 == '\0');
    if ((int)lVar9 != 0) {
      (*(int (**)())(*param_1 + 8))(param_1,lVar9);
      for (fn_83060CB0(T.it); (cVar5 = fn_830603C0(T.it)) == 0; fn_83060CD0(T.it)) {
        uVar2 = fn_830603D0(T.it);
        iVar3 = fn_8305D680();
        if (iVar3 < 3) continue;
        uVar4 = fn_8305D7C0(uVar2);
        switch(uVar4) {
        case 2: uVar7=0xb4; uVar6=0; uVar8=0x32; (*(int (**)())*param_1)(param_1,uVar6,uVar7,0,uVar8); break;
        case 1: uVar8=0x50; uVar7=0xff; uVar6=0xff; (*(int (**)())*param_1)(param_1,uVar6,uVar7,0,uVar8); break;
        case 0: uVar7=0; uVar6=0xd2; uVar8=0x32; (*(int (**)())*param_1)(param_1,uVar6,uVar7,0,uVar8); break;
        default: if (uVar4 != 3) break; continue;
        }
        fn_8305D688(uVar2,0,T.c);
        lVar9 = 1;
        iVar3 = fn_8305D680(uVar2);
        if (1 < iVar3 + -1) {
          do {
            fn_8305D688(uVar2,lVar9,T.b);
            lVar9 = lVar9 + 1;
            fn_8305D688(uVar2,lVar9,T.a);
            (*(int (**)())(*param_1 + 0x10))(param_1,T.c,T.b,T.a);
            iVar3 = fn_8305D680(uVar2);
          } while ((int)lVar9 < iVar3 + -1);
        }
      }
      (*(int (**)())(*param_1 + 0xc))(param_1);
    }
  }
  return;
}

