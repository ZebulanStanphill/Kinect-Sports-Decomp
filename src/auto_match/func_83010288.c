#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_80;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_d8;
extern int fn_82FF5198();
extern int fn_83013400();
extern int fn_83032FE8();
extern unsigned int lbl_83264304;
extern unsigned int uStack_e0;


void fn_83010288(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  __int64 *plVar4;
  unsigned __int64 uStack_e0;
  unsigned char auStack_d8 [8];
  unsigned int auStack_d0 [20];
  unsigned int auStack_80 [32];
  
  uStack_e0 = ZEXT48(*(unsigned int **)(param_1 + 0x50)) << 0x20;
  puVar3 = *(unsigned int **)(param_1 + 0x50);
  while (puVar3 != (unsigned int *)0x0) {
    uVar1 = puVar3[2];
    if (*(int *)(uVar1 + 0x28) == param_2) {
      auStack_d0[0] = 0;
      uVar2 = *(unsigned int *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
      if (uVar2 == 0x4011) {
LAB_830102f0:
        (**(int (***)())(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_d0);
      }
      else if (uVar2 == 0x5011) {
        fn_83032FE8();
        goto LAB_830102f0;
      }
      fn_82FF5198(lbl_83264304,*(unsigned int *)(uVar1 + 0x28));
      plVar4 = (__int64 *)fn_83013400(auStack_d8,param_1,uVar1,param_1 + 0x50,uStack_e0);
      uStack_e0 = ((((unsigned __int64)(uStack_e0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int *)((unsigned __int64)*plVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      puVar3 = (((unsigned __int64)(uStack_e0) >> 0) & 0xFFFFFFFF);
      uStack_e0 = *plVar4;
    }
    else {
      uStack_e0 = CONCAT44((unsigned int *)*puVar3,puVar3);
      puVar3 = (unsigned int *)*puVar3;
    }
  }
  uStack_e0 = ZEXT48(*(unsigned int **)(param_1 + 0x70)) << 0x20;
  puVar3 = *(unsigned int **)(param_1 + 0x70);
  do {
    while( true ) {
      if (puVar3 == (unsigned int *)0x0) {
        return;
      }
      uVar1 = puVar3[2];
      if (*(int *)(uVar1 + 0x28) == param_2) break;
      uStack_e0 = CONCAT44((unsigned int *)*puVar3,puVar3);
      puVar3 = (unsigned int *)*puVar3;
    }
    auStack_80[0] = 0;
    uVar2 = *(unsigned int *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
    if (uVar2 == 0x4011) {
LAB_8301039c:
      (**(int (***)())(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_80);
    }
    else if (uVar2 == 0x5011) {
      fn_83032FE8();
      goto LAB_8301039c;
    }
    fn_82FF5198(lbl_83264304,*(unsigned int *)(uVar1 + 0x28));
    plVar4 = (__int64 *)fn_83013400(auStack_d8,param_1,uVar1,param_1 + 0x70,uStack_e0);
    uStack_e0 = ((((unsigned __int64)(uStack_e0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int *)((unsigned __int64)*plVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    puVar3 = (((unsigned __int64)(uStack_e0) >> 0) & 0xFFFFFFFF);
    uStack_e0 = *plVar4;
  } while( true );
}

