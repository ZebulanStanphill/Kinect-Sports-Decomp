extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82AA75B8();
extern unsigned int iStack_44;


void fn_82A96610(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int in_r0;
  int *piVar3;
  __int64 lVar4;
  int *piVar5;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned short auStack_50;
  int iStack_44;
  unsigned char auStack_40 [16];
  
  piVar5 = (int *)(param_2 + 0xc);
  piVar3 = &iStack_44;
  lVar4 = 4;
  puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  do {
    piVar3 = piVar3 + 1;
    auStack_50 = (unsigned short)(*piVar3 << (piVar5[8] & 0x3fU)) & (unsigned short)piVar5[4];
    fn_82AA75B8(&auStack_50,&auStack_50,0x20001);
    iVar1 = *piVar5;
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 1;
    *(unsigned short *)(iVar1 * 2 + param_1) = *(unsigned short *)(iVar1 * 2 + param_1) | auStack_50;
  } while (lVar4 != 0);
  return;
}

