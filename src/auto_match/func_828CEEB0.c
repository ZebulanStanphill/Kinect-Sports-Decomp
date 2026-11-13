extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_8223B6E0();
extern int fn_822D7FE0();
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828865A0();
extern int fn_82886C90();
extern int fn_8288C2E0();
extern int fn_8289F2E0();
extern int fn_828B22F0();
extern int fn_828B27A8();
extern int fn_828CD558();
extern int fn_828CD7B8();
extern int fn_828CED70();
extern int fn_828E9D60();
extern int fn_828E9D90();
extern unsigned int iStack_68;
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int lbl_82026584;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_9c;


unsigned __int64 fn_828CEEB0(unsigned __int64 param_1,int param_2,int *param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  char cVar8;
  int iVar5;
  unsigned __int64 uVar3;
  int *piVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar4;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned char auStack_a0 [4];
  unsigned int uStack_9c;
  struct { int first; int second; } stack_pair_98;

  unsigned char auStack_80 [24];
  int iStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  
  fn_8288C2E0(&stack_pair_98.first,auStack_a0);
  cVar8 = fn_828865A0(param_3);
  if (cVar8 != '\0') {
    (**(int (***)())(*param_3 + 4))(param_3);
    iVar5 = fn_82886C90();
    if (iVar5 == 0) {
      (**(int (***)())(*param_3 + 0x48))(param_3,param_4);
      fn_822D7FE0(auStack_80);
      (**(int (***)())(*param_3 + 0xc))(param_3,auStack_80);
      iVar5 = fn_828E9D90(auStack_80);
      uVar10 = (unsigned __int64)(iVar5 + 0x18ff) / 0x1900;
      if (uVar10 == 1) {
        (**(int (***)())(*param_3 + 0x48))(param_3,0xffffffffffffffff);
        fn_828CD7B8(param_1,&stack_pair_98.first);
        fn_8223B6E0(auStack_80);
      }
      else {
        uVar3 = fn_8289F2E0(*(unsigned int *)(param_2 + 0x10),param_4);
        uStack_9c = fn_823AA970();
        piVar6 = (int *)fn_828CED70(param_2,&uStack_9c);
        iVar1 = *piVar6;
        uStack_9c = fn_823AA970(uVar3);
        puVar7 = (unsigned int *)fn_828CED70(param_2,&uStack_9c);
        uVar12 = 0;
        lVar11 = 0;
        *puVar7 = iVar1 + 1U & 0xff;
        if (uVar10 != 0) {
          do {
            fn_828E9D60(auStack_80,lVar11);
            uVar4 = fn_8265C9E0(200);
            iVar2 = stack_pair_98.first;
            if ((uVar4 & 0xffffffff) == 0) {
              uStack_9c = 0;
            }
            else {
              uStack_9c = iVar5 - (int)lVar11;
              if (stack_pair_98.second == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = *(unsigned int *)(*(int *)(stack_pair_98.first + 4) + 8);
              }
              puVar7 = &uStack_9c;
              if (0x18ff < uStack_9c) {
                puVar7 = (unsigned int *)&lbl_82026584;
              }
              uStack_9c = fn_828CD558(uVar4,param_3,uVar9,iVar1,uVar12,uVar10,auStack_80,*puVar7);
            }
            fn_828B27A8(&stack_pair_98.first,iVar2,&uStack_9c);
            uVar12 = uVar12 + 1;
            lVar11 = lVar11 + 0x1900;
          } while ((uVar12 & 0xffffffff) < uVar10);
        }
        fn_828CD7B8(param_1,&stack_pair_98.first);
        if (iStack_68 != 0) {
          fn_8265CA20();
        }
        iStack_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
      }
      goto LAB_828cf0d4;
    }
  }
  fn_828CD7B8(param_1,&stack_pair_98.first);
LAB_828cf0d4:
  fn_828B22F0(&stack_pair_98.first);
  fn_8265CA20(stack_pair_98.first);
  return param_1;
}

