extern int fn_82575DF0();
extern int fn_82583170();
extern int fn_8263CBB0();
extern int fn_82645EA8();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;


void fn_82581F00(double param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  double dVar4;
  
  uVar3 = (unsigned __int64)(unsigned int)param_2[0x37];
  if (uVar3 != 0) {
    dVar4 = (double)ltcg_pool_0_0f;
    do {
      piVar2 = (int *)uVar3;
      uVar3 = (unsigned __int64)(unsigned int)piVar2[5];
      dataCacheBlockTouch(uVar3);
      iVar1 = *(int *)(*piVar2 + 4);
      if (((*(char *)(iVar1 + 0x1a4) != '\0') || (*(char *)(iVar1 + 0x1a5) != '\0')) ||
         ((*(char *)(iVar1 + 0x1a6) == '\0' &&
          (((double)(float)piVar2[3] <= dVar4 ||
           (param_1 <= (double)(float)((double)(float)piVar2[2] + (double)(float)piVar2[3]))))))) {
        fn_82583170(param_1);
        uVar3 = (unsigned __int64)(unsigned int)piVar2[5];
      }
      else {
        fn_82575DF0(param_2[1]);
      }
    } while (uVar3 != 0);
  }
  if (0x380000 < (unsigned int)param_2[0x3b]) {
    (**(int (***)())(*param_2 + 0x24))(param_1,param_2);
  }
  fn_82645EA8(lbl_8320A898,3);
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(lbl_8320A898,0,param_2[0x3a],0x80000000);
}

