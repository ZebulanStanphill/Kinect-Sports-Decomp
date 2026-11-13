extern int fn_8305D5F0();
extern int fn_8305D5F8();
extern int fn_8305D618();
extern int fn_8305D7C8();
extern int fn_8305E0F8();
extern int fn_8305F320();
extern int fn_83065C58();
extern int fn_83065E60();
extern int fn_83066810();
extern int fn_83068418();
extern int fn_8306AB38();


void fn_83063228(int param_1,int param_2,__int64 param_3)

{
  char cVar4;
  int iVar3;
  __int64 lVar1;
  unsigned __int64 uVar2;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  char cStack_50;
  
  cVar4 = fn_83068418(param_2);
  if (cVar4 != '\0') {
    fn_8306AB38(param_2 + 0x58,param_3);
    return;
  }
  lVar7 = param_3 + 0x10;
  iVar5 = param_2 + 0x10;
  iVar3 = fn_83066810((double)*(float *)(param_1 + 0x30),iVar5,lVar7);
  if (cStack_50 == '\0') {
    if (iVar3 == 1) {
      iVar3 = *(int *)(param_2 + 0x30);
    }
    else {
      if (iVar3 != 2) {
        if (*(int *)(param_2 + 0x34) != 0) {
          if (*(int *)(param_2 + 0x30) == 0) {
            fn_8305F320((double)*(float *)(param_1 + 0x30),lVar7,iVar5,lVar7,0);
            lVar1 = param_3;
          }
          else {
            lVar1 = fn_83065E60();
            lVar6 = lVar1 + 0x10;
            fn_8305D5F0(lVar6);
            uVar2 = fn_8305D7C8(lVar7);
            fn_8305E0F8(lVar6,uVar2);
            uVar2 = fn_8305D618(lVar7);
            fn_8305D5F8(lVar6,uVar2);
            fn_8305F320((double)*(float *)(param_1 + 0x30),lVar7,iVar5,lVar6,lVar7);
            fn_83063228(param_1,*(unsigned int *)(param_2 + 0x30),param_3);
          }
          goto LAB_830633f4;
        }
        fn_8305F320((double)*(float *)(param_1 + 0x30),lVar7,iVar5,0,lVar7);
        goto LAB_83063294;
      }
      iVar3 = *(int *)(param_2 + 0x34);
    }
    if (iVar3 == 0) {
      fn_83065C58(param_3);
      return;
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x34);
    if (iVar3 != 0) {
      if (*(int *)(param_2 + 0x30) == 0) goto LAB_830633f8;
      lVar1 = fn_83065E60();
      lVar6 = lVar1 + 0x10;
      fn_8305D5F0(lVar6);
      uVar2 = fn_8305D7C8(lVar7);
      fn_8305E0F8(lVar6,uVar2);
      uVar2 = fn_8305D618(lVar7);
      fn_8305D5F8(lVar6,uVar2);
      fn_83063228(param_1,*(unsigned int *)(param_2 + 0x30),param_3);
LAB_830633f4:
      iVar3 = *(int *)(param_2 + 0x34);
      param_3 = lVar1;
      goto LAB_830633f8;
    }
LAB_83063294:
    iVar3 = *(int *)(param_2 + 0x30);
  }
LAB_830633f8:
  fn_83063228(param_1,iVar3,param_3);
  return;
}

