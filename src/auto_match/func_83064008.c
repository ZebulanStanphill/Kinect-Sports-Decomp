#define true 1
extern int fn_8305D5F0();
extern int fn_8305D5F8();
extern int fn_8305D618();
extern int fn_8305D7C8();
extern int fn_8305E0F8();
extern int fn_8305F320();
extern int fn_83065C58();
extern int fn_83065E60();
extern int fn_83066810();
extern int fn_83068640();
extern int fn_83068648();
extern int fn_8306AAF0();
extern int fn_8306AB38();
extern int fn_8306AB80();


unsigned __int64
fn_83064008(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar4;
  char cVar5;
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  char cStack_70;
  
  do {
    while( true ) {
      uVar9 = (unsigned __int64)*param_3;
      if (uVar9 == 0) {
        return 1;
      }
      fn_8306AB80(param_3,uVar9);
      lVar8 = uVar9 + 0x10;
      iVar4 = fn_83066810((double)*(float *)(param_1 + 0x30),param_2,lVar8);
      if (cStack_70 != '\0') {
        fn_83068640(uVar9,1);
      }
      if (iVar4 != 1) break;
      cVar5 = fn_83068648(uVar9);
      uVar3 = param_4;
LAB_83064084:
      if (cVar5 == '\0') {
        fn_8306AB38(uVar3,uVar9);
      }
      else {
        fn_8306AAF0();
      }
    }
    if (iVar4 == 2) {
      cVar5 = fn_83068648(uVar9);
      uVar3 = param_5;
      goto LAB_83064084;
    }
    lVar1 = fn_83065E60();
    lVar2 = fn_83065E60();
    lVar7 = lVar1 + 0x10;
    fn_8305D5F0(lVar7);
    uVar3 = fn_8305D7C8(lVar8);
    fn_8305E0F8(lVar7,uVar3);
    uVar3 = fn_8305D618(lVar8);
    fn_8305D5F8(lVar7,uVar3);
    lVar6 = lVar2 + 0x10;
    fn_8305D5F0(lVar6);
    uVar3 = fn_8305D7C8(lVar8);
    fn_8305E0F8(lVar6,uVar3);
    uVar3 = fn_8305D618(lVar8);
    fn_8305D5F8(lVar6,uVar3);
    cVar5 = fn_83068648(uVar9);
    if (cVar5 == '\0') {
      fn_8306AB38(param_4,lVar2);
      fn_8306AB38(param_5,lVar1);
    }
    else {
      uVar3 = fn_83068648(uVar9);
      fn_83068640(lVar1,uVar3);
      uVar3 = fn_83068648(uVar9);
      fn_83068640(lVar2,uVar3);
      fn_8306AAF0(param_4,lVar2);
      fn_8306AAF0(param_5,lVar1);
    }
    fn_8305F320((double)*(float *)(param_1 + 0x30),lVar8,param_2,lVar7,lVar6);
    fn_83065C58(uVar9);
  } while( true );
}

