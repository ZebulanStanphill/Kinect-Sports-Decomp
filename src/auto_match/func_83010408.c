typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_130;
extern unsigned int *auStack_180;
extern unsigned int *auStack_188;
extern unsigned int *auStack_90;
extern unsigned int *auStack_e0;
extern int fn_82FF5198();
extern int fn_83013400();
extern int fn_83032FE8();
extern unsigned int lbl_83264304;
extern unsigned int uStack_190;


void fn_83010408(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int *puVar4;
  char cVar6;
  __int64 *plVar5;
  unsigned __int64 uStack_190;
  unsigned char auStack_188 [8];
  unsigned int auStack_180 [20];
  unsigned int auStack_130 [20];
  unsigned int auStack_e0;
  unsigned int auStack_90 [36];
  
  bVar3 = true;
  uStack_190 = ZEXT48(*(unsigned int **)(param_1 + 0x50)) << 0x20;
  puVar4 = *(unsigned int **)(param_1 + 0x50);
  while (puVar4 != (unsigned int *)0x0) {
    uVar1 = puVar4[2];
    if (*(int *)(uVar1 + 0x28) == param_2) {
      if (bVar3) {
        auStack_180[0] = 0;
        uVar2 = *(unsigned int *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
        if ((uVar2 == 0x4011) || ((uVar2 == 0x5011 && (cVar6 = fn_83032FE8(), cVar6 != '\0')))) {
          (**(int (***)())(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_180);
        }
        fn_82FF5198(lbl_83264304,*(unsigned int *)(uVar1 + 0x28));
        bVar3 = false;
      }
      else {
        auStack_e0 = 0;
        uVar2 = *(unsigned int *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
        if (uVar2 == 0x4011) {
LAB_830104dc:
          (**(int (***)())(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),&auStack_e0);
        }
        else if (uVar2 == 0x5011) {
          fn_83032FE8();
          goto LAB_830104dc;
        }
        fn_82FF5198(lbl_83264304,*(unsigned int *)(uVar1 + 0x28));
      }
      plVar5 = (__int64 *)fn_83013400(auStack_188,param_1,uVar1,param_1 + 0x50,uStack_190);
      uStack_190 = ((((unsigned __int64)(uStack_190)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int *)((unsigned __int64)*plVar5 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      puVar4 = (((unsigned __int64)(uStack_190) >> 0) & 0xFFFFFFFF);
      uStack_190 = *plVar5;
    }
    else {
      uStack_190 = CONCAT44((unsigned int *)*puVar4,puVar4);
      puVar4 = (unsigned int *)*puVar4;
    }
  }
  uStack_190 = ZEXT48(*(unsigned int **)(param_1 + 0x70)) << 0x20;
  puVar4 = *(unsigned int **)(param_1 + 0x70);
  do {
    while( true ) {
      if (puVar4 == (unsigned int *)0x0) {
        return;
      }
      uVar1 = puVar4[2];
      if (*(int *)(uVar1 + 0x28) == param_2) break;
      uStack_190 = CONCAT44((unsigned int *)*puVar4,puVar4);
      puVar4 = (unsigned int *)*puVar4;
    }
    if (bVar3) {
      auStack_130[0] = 0;
      uVar2 = *(unsigned int *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
      if ((uVar2 == 0x4011) || ((uVar2 == 0x5011 && (cVar6 = fn_83032FE8(), cVar6 != '\0')))) {
        (**(int (***)())(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_130);
      }
      fn_82FF5198(lbl_83264304,*(unsigned int *)(uVar1 + 0x28));
      bVar3 = false;
    }
    else {
      auStack_90[0] = 0;
      uVar2 = *(unsigned int *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
      if (uVar2 == 0x4011) {
LAB_830105f0:
        (**(int (***)())(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_90);
      }
      else if (uVar2 == 0x5011) {
        fn_83032FE8();
        goto LAB_830105f0;
      }
      fn_82FF5198(lbl_83264304,*(unsigned int *)(uVar1 + 0x28));
    }
    plVar5 = (__int64 *)fn_83013400(auStack_188,param_1,uVar1,param_1 + 0x70,uStack_190);
    uStack_190 = ((((unsigned __int64)(uStack_190)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int *)((unsigned __int64)*plVar5 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    puVar4 = (((unsigned __int64)(uStack_190) >> 0) & 0xFFFFFFFF);
    uStack_190 = *plVar5;
  } while( true );
}

