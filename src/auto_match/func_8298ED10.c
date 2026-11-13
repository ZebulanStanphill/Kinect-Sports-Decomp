typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_b0;
extern unsigned int *auStack_bc;
extern int fn_828FC510();
extern int fn_828FF248();
extern int fn_82901578();
extern int fn_829302D0();
extern int fn_82930318();
extern int fn_82933910();
extern int fn_8293F968();
extern int fn_828FC510();
extern int fn_82980C90();
extern int memcpy();


unsigned __int64 fn_8298ED10(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  int iVar6;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  bool bVar7;
  int *piStack_c0;
  unsigned int auStack_bc [3];
  unsigned char auStack_b0 [144];

  uVar1 = param_1[5];
  piStack_c0 = (int *)0x0;
  bVar7 = true;
  for (; uVar1 != 0; uVar1 = *(unsigned int *)(uVar1 + 0x20)) {
    iVar6 = *(int *)(uVar1 + 0x10);
    if (((iVar6 == 2) || (iVar6 == 3)) || (iVar6 == 4)) {
      bVar7 = false;
      break;
    }
  }
  if (!bVar7) {
    if (param_2 == 0) {
      auStack_bc[0] = 0;
      iVar6 = fn_8293F968(param_1[1],*param_1 & 0x1a0003,auStack_bc,param_1,0xffffffff8298ecc8);
      if (-1 < iVar6) {
        return (unsigned __int64)auStack_bc[0];
      }
    }
    else {
      fn_828FC510(param_1,param_1 + 10,0xbf8,0xffffffff8204f7d4);
    }
    goto LAB_8298eee0;
  }
  fn_828FC510(auStack_b0,0);
  if (param_2 == 0) {
    iVar6 = fn_82901578(auStack_b0,param_1[1],*param_1 & 0x1a0003,0,&piStack_c0,0);
    if (-1 < iVar6) {
      uVar2 = (**(int (***)())(*piStack_c0 + 0x10))();
      lVar3 = fn_829302D0(uVar2,1);
      if (lVar3 != 0) {
        uVar4 = (**(int (***)())(*piStack_c0 + 0xc))();
        memcpy(lVar3,uVar4,uVar2);
        if (piStack_c0 != (int *)0x0) {
          (**(int (***)())(*piStack_c0 + 8))();
          piStack_c0 = (int *)0x0;
        }
        goto LAB_8298eea4;
      }
    }
  }
  else {
    fn_82980C90(param_1,param_1 + 10,0xc81,0xffffffff8204f7a4);
    uVar2 = 0;
    lVar3 = 0;
LAB_8298eea4:
    uVar5 = fn_82930318(0x38);
    if ((uVar5 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = fn_82933910(uVar5,param_1 + 10,lVar3,uVar2);
    }
    if ((uVar5 & 0xffffffff) != 0) {
      fn_828FF248(auStack_b0);
      return uVar5;
    }
  }
  fn_828FF248(auStack_b0);
LAB_8298eee0:
  param_1[0x12] = 1;
  if (piStack_c0 != (int *)0x0) {
    (**(int (***)())(*piStack_c0 + 8))();
  }
  return 0;
}
