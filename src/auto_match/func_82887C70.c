extern int fn_82887B28();
extern int fn_82887BE8();
extern unsigned int iStack00000014;
extern unsigned int lbl_83212A18;
extern unsigned int lbl_83212A1C;
extern unsigned int lbl_83212A20;
extern unsigned int stack0x00000014;


void fn_82887C70(int param_1,unsigned int param_2,unsigned int param_3,unsigned char param_4,
                  unsigned char param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  int iStack00000014;
  
  iVar1 = lbl_83212A1C;
  *(unsigned int *)(param_1 * 4 + lbl_83212A18) = param_2;
  *(unsigned int *)(param_1 * 4 + iVar1) = param_3;
  iStack00000014 = param_1;
  uVar2 = fn_82887BE8();
  puVar3 = (unsigned char *)fn_82887B28(uVar2,&stack0x00000014);
  iVar1 = lbl_83212A20;
  *puVar3 = param_4;
  *(unsigned char *)(iVar1 + param_1) = param_5;
  return;
}

