#define CONCAT13(h,l) ((unsigned int)((((unsigned char)(h)) << 24) | ((unsigned int)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int uStack_1c;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_826F0768(int param_1,int *param_2,unsigned char param_3)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned __int64 uStack_28;
  unsigned __int64 uStack_1c;
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  if (uVar1 < 0x10) {
    iVar3 = uVar1 * 0xc + param_1 + 0x24 + 0x10;
  }
  else {
    iVar3 = (uVar1 - 0x10) * 0xc + *(int *)(param_1 + 0x28);
  }
  uVar2 = *(unsigned __int64 *)(iVar3 + 4);
  uStack_2c = CONCAT13(param_3,(((unsigned __int64)(uStack_2c) >> 8) & 0xFFFFFF));
  if (uVar1 < 0x10) {
    puVar4 = (unsigned int *)(uVar1 * 0xc + param_1 + 0x24 + 0x10);
  }
  else {
    puVar4 = (unsigned int *)((uVar1 - 0x10) * 0xc + *(int *)(param_1 + 0x28));
  }
  uStack_1c = CONCAT44(param_2,uStack_2c);
  uStack_28 = ((((unsigned __int64)(uStack_28)) & (~(((unsigned __int64)0xFF) << 32))) | ((((unsigned __int64)((unsigned char)((unsigned __int64)uVar2 >> 0x18))) & ((unsigned __int64)0xFF)) << 32));
  *puVar4 = 2;
  puVar4[1] = param_2;
  puVar4[2] = uStack_2c;
  if ((((unsigned __int64)(uStack_28) >> 32) & 0xFF) != 0) {
    uStack_28 = ((((unsigned __int64)(uStack_28)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)uVar2 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    uStack_2c = (unsigned int)(((unsigned __int64)(uStack_28) >> 32) & 0xFF);
    uStack_30 = (((unsigned __int64)(uStack_28) >> 0) & 0xFFFFFFFF);
    uStack_28 = uVar2;
    (**(int (***)())(*param_2 + 8))(param_2,&uStack_30);
  }
  return;
}

