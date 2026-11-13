typedef unsigned char bool;
extern int fn_82ABE0E8();
extern int fn_82AD6090();


void fn_82AD7788(int param_1,int param_2,unsigned int *param_3)

{
  int iVar1;
  bool bVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar3 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
  bVar2 = (uVar3 == 0x56 || uVar3 == 0x57 || uVar3 == 0x59 || uVar3 == 0x5a || uVar3 == 0x54 || uVar3 == 0x55);
  if (bVar2) {
    iVar4 = fn_82ABE0E8(param_2,param_1);
    if (iVar4 == 8) {
      return;
    }
    if (iVar4 == 9) {
      return;
    }
    *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x100;
  }
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_2 + 8) | 0x8000000;
  if ((param_3[1] & 1) == 0) {
    uVar3 = *param_3 & 0xfffffffe;
    iVar4 = uVar3 - 4;
    if ((iVar4 != 0) && (*(unsigned int *)(iVar4 + 8) + 1U <= *(unsigned int *)(iVar4 + 12))) goto LAB_82ad7858;
  }
  iVar4 = fn_82AD6090(param_3,1);
LAB_82ad7858:
  {
    int *slot = (int *)(iVar4 + 16) + (*(int *)(iVar4+8))++;
    *slot = param_2;
  }
}
