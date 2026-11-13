typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_180;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_200;
extern unsigned int *auStack_220;
extern unsigned int *auStack_240;
extern unsigned int *auStack_260;
extern unsigned int *auStack_280;
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_2d0;
extern unsigned int *auStack_320;
extern unsigned int *auStack_340;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_822933E8();
extern int fn_822A89B8();
extern int fn_822A9E20();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825200F0();
extern int fn_82534350();
extern int fn_8257EB18();
extern int fn_8257EB78();
extern int fn_8265BF48();
extern int fn_8265CA20();
extern int fn_827D6968();
extern int fn_827D78D0();
extern int fn_828647C0();
extern int fn_82864848();
extern int fn_82864898();
extern int fn_828648B8();
extern int fn_82864988();
extern int fn_82864E90();
extern int fn_82F66FE8();
extern unsigned int iStack_330;
extern unsigned int lbl_83265A24;
extern unsigned int *lbl_8327F848;
extern unsigned int *lbl_8327F84C;
extern unsigned int *lbl_8327F868;
extern unsigned int lbl_8327F878;
extern unsigned int uStack_2dc;
extern unsigned int uStack_328;
extern unsigned int uStack_32c;


void fn_82534D30(__int64 param_1,unsigned int *param_2)

{
  bool bVar1;
  bool bVar2;
  unsigned int uVar3;
  char cVar11;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int *piVar8;
  unsigned int *puVar9;
  int iVar10;
  unsigned int auStack_340;
  struct { int first; unsigned int second; } stack_pair_330;

  unsigned int uStack_328;
  unsigned char auStack_320 [48];
  unsigned int ****appppuStack_2f0 [5];
  unsigned int uStack_2dc;
  unsigned char auStack_2d0 [48];
  unsigned char auStack_2a0 [32];
  unsigned char auStack_280 [32];
  unsigned char auStack_260 [32];
  unsigned char auStack_240 [32];
  unsigned char auStack_220 [32];
  unsigned char auStack_200 [32];
  unsigned char auStack_1e0 [48];
  unsigned char auStack_1b0 [48];
  unsigned char auStack_180 [320];
  
  auStack_340 = 0;
  bVar2 = false;
  auStack_340 = fn_8265BF48(0xffffffff821c3b60,0);
  fn_825200F0(auStack_320,&auStack_340);
  cVar11 = fn_827D6968(lbl_83265A24,auStack_320,0xffffffffffffffff);
  if ((cVar11 == '\0') || (lVar4 = fn_8251F720(&auStack_340,0), lVar4 == 0)) {
    uVar5 = fn_8251F720(param_1,0);
  }
  else {
    uVar5 = fn_8251F720(lVar4,0);
    fn_8251FA58(lVar4);
    param_1 = lVar4;
  }
  uVar6 = fn_825200F0(auStack_320,param_1);
  fn_827D78D0(appppuStack_2f0,lbl_83265A24,uVar6,0xffffffffffffffff,0);
  if (uStack_2dc < 0x10) {
    appppuStack_2f0[0] = appppuStack_2f0;
  }
  fn_82F66FE8(appppuStack_2f0[0],0,0,auStack_180,0x104,0,0,0);
  if ((uVar5 & 0xffffffff) != 0) {
    cVar11 = (**(int (***)())(*lbl_8327F848 + 0x34))(lbl_8327F848,uVar5);
    if (cVar11 == '\0') {
      fn_8251FA58();
    }
    else {
      fn_82534350(uVar5);
      fn_82230110(auStack_260,auStack_180);
      uVar7 = (**(int (***)())*lbl_8327F84C)(lbl_8327F84C,auStack_260);
      fn_82230300(auStack_260,1,0);
      if ((uVar7 & 0xffffffff) >> 0x1f != 0) {
        (**(int (***)())(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x1c2,0xffffffff821c3b98);
      }
      iVar10 = *lbl_8327F84C;
      uVar6 = fn_82864988(auStack_2d0,0xffffffff821c3bbc);
      uVar7 = (**(int (***)())(iVar10 + 0xc))(lbl_8327F84C,uVar6,1);
      fn_82864898(auStack_2d0);
      if ((uVar7 & 0xffffffff) >> 0x1f != 0) {
        (**(int (***)())(*lbl_8327F868 + 0xc))(lbl_8327F868,0xffffffff821c3b18,0x1c8,0xffffffff821c3bc4)
        ;
      }
      iVar10 = *lbl_8327F848;
      uVar6 = fn_82864988(auStack_2d0,0xffffffff821c3bec);
      (**(int (***)())(iVar10 + 0x44))(lbl_8327F848,uVar6);
      fn_82864898(auStack_2d0);
      fn_82230300(auStack_2a0,0,0);
      fn_8257EB18();
      fn_8257EB78(auStack_2a0);
      (**(int (***)())(*lbl_8327F848 + 0x40))(lbl_8327F848,auStack_2a0);
      stack_pair_330.first = 0;
      stack_pair_330.second = 0;
      uStack_328 = 0;
      (**(int (***)())(*lbl_8327F868 + 4))(lbl_8327F868,0xffffffff821c3b18,0x1da,0xffffffff821c3bfc);
      uVar7 = (unsigned __int64)*param_2;
      if (uVar7 != param_2[1]) {
        do {
          piVar8 = (int *)fn_82864E90();
          piVar8 = (int *)(**(int (***)())(*piVar8 + 0x18))();
          (**(int (***)())(*piVar8 + 0x30))(auStack_320,piVar8,uVar7);
          uVar6 = fn_82864988(auStack_1b0,0xffffffff821c3bbc);
          cVar11 = fn_828647C0(auStack_320,uVar6);
          if (cVar11 == '\0') {
            bVar2 = true;
            uVar6 = fn_82864988(auStack_1e0,0xffffffff821c3c30);
            cVar11 = fn_828647C0(auStack_320,uVar6);
            bVar1 = false;
            if (cVar11 != '\0') goto LAB_82535088;
          }
          else {
LAB_82535088:
            bVar1 = true;
          }
          if (bVar2) {
            bVar2 = false;
            fn_82864898(auStack_1e0);
          }
          fn_82864898(auStack_1b0);
          if (!bVar1) {
            fn_82864848(auStack_2d0);
            fn_828648B8(auStack_280,auStack_320);
            uVar3 = lbl_8327F878;
            uVar6 = fn_8223B688(auStack_200,auStack_280);
            fn_822A89B8(uVar3,0,uVar6,auStack_2d0);
            fn_82230300(auStack_200,1,0);
            fn_82230300(auStack_280,1,0);
            fn_822A9E20(&stack_pair_330.first,auStack_320);
            fn_828648B8(auStack_240,uVar7);
            puVar9 = (unsigned int *)fn_8223B688(auStack_220,auStack_240);
            if (0xf < (unsigned int)puVar9[5]) {
              puVar9 = (unsigned int *)*puVar9;
            }
            (**(int (***)())(*lbl_8327F868 + 4))
                      (lbl_8327F868,0xffffffff821c3b18,0x1ef,0xffffffff821c3c38,puVar9);
            fn_82230300(auStack_220,1,0);
            fn_82230300(auStack_240,1,0);
            fn_82864898(auStack_2d0);
          }
          fn_82864898(auStack_320);
          uVar7 = uVar7 + 0x24;
        } while ((uVar7 & 0xffffffff) != (unsigned __int64)param_2[1]);
      }
      iVar10 = (**(int (***)())(*lbl_8327F84C + 8))(lbl_8327F84C,&stack_pair_330.first,1);
      if (iVar10 < 0) {
        (**(int (***)())(*lbl_8327F868 + 0xc))(lbl_8327F868,0xffffffff821c3b18,500,0xffffffff821c3bc4);
      }
      iVar10 = (**(int (***)())(*lbl_8327F84C + 8))(lbl_8327F84C,&stack_pair_330.first,1);
      if (iVar10 < 0) {
        (**(int (***)())(*lbl_8327F868 + 0xc))(lbl_8327F868,0xffffffff821c3b18,0x1fa,0xffffffff821c3bc4)
        ;
      }
      fn_8251FA58(uVar5);
      if (stack_pair_330.first != 0) {
        fn_822933E8(stack_pair_330.first,stack_pair_330.second);
        fn_8265CA20(stack_pair_330.first);
      }
      stack_pair_330.first = 0;
      stack_pair_330.second = 0;
      uStack_328 = 0;
      fn_82230300(auStack_2a0,1,0);
    }
  }
  fn_82230300(appppuStack_2f0,1,0);
  return;
}

