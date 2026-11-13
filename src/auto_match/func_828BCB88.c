extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8265C9E0();
extern int fn_828BAB20();
extern int fn_828BB5B0();
extern int fn_828BCA78();
extern unsigned int iStack_3c;
extern unsigned int stack0x00000000;


void fn_828BCB88(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned int auStack_38 [14];
  
  uVar2 = fn_8265C9E0(0x28);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828BB5B0(uVar2,param_2,param_3,param_4);
  }
  puVar4 = (unsigned int *)fn_828BAB20(&stack0x00000000 + -0x40,uVar3);
  puVar5 = (unsigned int *)fn_828BCA78(param_1 + 0xf8,param_4);
  uVar6 = 0;
  uVar7 = 0;
  if ((unsigned int *)(&stack0x00000000 + -0x38) != puVar4) {
    uVar7 = puVar4[1];
    puVar4[1] = 0;
    uVar6 = *puVar4;
    *puVar4 = 0;
  }
  iVar1 = puVar5[1];
  puVar5[1] = uVar7;
  *puVar5 = uVar6;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

