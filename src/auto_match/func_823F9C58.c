#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_30;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82F68CC0();
extern unsigned int uStack_3b;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_823F9C58(int param_1,unsigned __int64 param_2,int param_3)

{
  int in_r0;
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int auStack_90 [8];
  unsigned int auStack_70 [8];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned char uStack_3c;
  unsigned char uStack_3b;
  unsigned char auStack_30 [48];
  
  uStack_4c = 0xffffffff;
  uStack_50 = 0xffffffff;
  uStack_3c = 0;
  uStack_3b = 0;
  puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uStack_44 = 0xffffffff;
  puVar1 = auStack_90;
  uStack_40 = 0xffffffff;
  lVar2 = 7;
  uStack_a0 = 0xffffffff;
  uStack_9c = 1;
  auStack_90[0] = 0;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0xffffffff;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = auStack_70;
  auStack_70[0] = 0;
  lVar2 = 7;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0xffffffff;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (**(int (***)())(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18),param_2,&uStack_50);
  (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))(*(int **)(param_1 + 0x20),param_2,&uStack_a0);
  (**(int (***)())(**(int **)(param_1 + 0x28) + 0x14))(*(int **)(param_1 + 0x28),param_2,auStack_90);
  (**(int (***)())(**(int **)(param_1 + 0x30) + 0x14))(*(int **)(param_1 + 0x30),param_2,auStack_70);
  if (param_3 != 0) {
    fn_82F68CC0(*(int *)(param_1 + 8) + param_3,&uStack_50,0x30);
    *(unsigned __int64 *)(*(int *)(param_1 + 0xc) + param_3) = CONCAT44(uStack_a0,uStack_9c);
    fn_82F68CC0(*(int *)(param_1 + 0x10) + param_3,auStack_90,0x20);
    fn_82F68CC0(*(int *)(param_1 + 0x14) + param_3,auStack_70,0x20);
  }
  return;
}

