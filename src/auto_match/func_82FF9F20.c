extern void *memcpy(void *,const void *,unsigned int);
extern int fn_82FA5100();
extern unsigned int lbl_832645A4;


int fn_82FF9F20(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned char param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar3 = 0x800;
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 8) + 8);
  *param_3 = uVar1;
  if ((param_4 != '\0') || ((uVar1 & 0x7ff) != 0)) {
    uVar3 = 0x10;
  }
  uVar2 = fn_82FA5100(lbl_832645A4,uVar1,uVar3);
  *param_2 = (int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0x34;
  }
  else {
    memcpy((void *)uVar2,*(unsigned int *)(*(int *)(param_1 + 8) + 4),*param_3);
    uVar3 = 1;
  }
  return uVar3;
}

