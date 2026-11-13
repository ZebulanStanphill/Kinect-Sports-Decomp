extern unsigned int fStack_64;
extern int fn_822C0AA0();
extern int fn_82321138();
extern int fn_823223C0();
extern int fn_8234B0C8();
extern int fn_8265CA20();
extern int fn_8288DCC0();
extern int fn_828A12E8();
extern int fn_828B55B0();
extern unsigned int iStack_7c;
extern unsigned int lbl_8218E8E8;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_90;


void fn_82327898(double param_1,int param_2,unsigned int param_3,unsigned __int64 param_4,
                  unsigned int param_5,unsigned int param_6,unsigned __int64 param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  int in_stack_00000054;
  unsigned int uStack_90;
  int aiStack_8c [3];
  struct { unsigned int first; int second; } stack_pair_80;

  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  float fStack_64;
  
  uVar1 = *(unsigned int *)(param_2 + 0xbc);
  uVar7 = (unsigned __int64)uVar1;
  uVar5 = fn_828A12E8(*(unsigned int *)(param_2 + 0x10));
  iVar6 = fn_8288DCC0(uVar5,param_7);
  if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0xbc), iVar6 != 0)) {
    fStack_64 = (float)param_1;
    uStack_70 = (unsigned int)param_4;
    stack_pair_80.first = uVar1;
    stack_pair_80.second = iVar6;
    uStack_78 = param_8;
    uStack_74 = param_3;
    uStack_6c = param_6;
    uStack_68 = param_5;
    fn_82321138(uVar7 + 0x508,&stack_pair_80.first);
    uStack_90 = param_3;
    fn_823223C0(aiStack_8c,uVar7 + 0x2a0,&uStack_90);
    fn_822C0AA0(uVar7,param_4,*(unsigned int *)(aiStack_8c[0] + 0x10));
    fn_8234B0C8((double)lbl_8218E8E8,(unsigned __int64)*(unsigned int *)(iVar6 + 0x118) + 0x2c0,
                      0xffffffff821acc9c);
  }
  puVar2 = *(unsigned int **)(param_2 + 0xd0);
  puVar8 = (unsigned int *)*puVar2;
  while (puVar8 != puVar2) {
    if (puVar8[2] == in_stack_00000054) {
      puVar3 = (unsigned int *)puVar8[1];
      puVar4 = (unsigned int *)*puVar8;
      *puVar3 = puVar4;
      puVar4[1] = puVar3;
      fn_8265CA20(puVar8);
      *(int *)(param_2 + 0xd4) = *(int *)(param_2 + 0xd4) + -1;
      puVar8 = puVar4;
    }
    else {
      puVar8 = (unsigned int *)*puVar8;
    }
  }
  fn_828B55B0(param_7);
  return;
}

