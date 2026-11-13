extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8265C9E0();
extern int fn_828BAB20();
extern int fn_828BCA78();
extern int fn_828C23A8();
extern int fn_828C35A0();
extern unsigned int iStack_3c;
extern unsigned int stack0x00000000;


void fn_828C37F0(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned int auStack_38 [14];
  
  uVar2 = fn_828C35A0(param_1 + 0xe8);
  uVar3 = fn_8265C9E0(0x24);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_828C23A8(uVar3,param_3,param_4);
  }
  puVar5 = (unsigned int *)fn_828BAB20(&stack0x00000000 + -0x40,uVar4);
  puVar6 = (unsigned int *)fn_828BCA78(uVar2,param_4);
  uVar7 = 0;
  uVar8 = 0;
  if ((unsigned int *)(&stack0x00000000 + -0x38) != puVar5) {
    uVar8 = puVar5[1];
    puVar5[1] = 0;
    uVar7 = *puVar5;
    *puVar5 = 0;
  }
  iVar1 = puVar6[1];
  puVar6[1] = uVar8;
  *puVar6 = uVar7;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

