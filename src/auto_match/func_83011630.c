#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_a0;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern int fn_82FF5198();
extern int fn_83010658();
extern int fn_83013400();
extern int fn_83032FE8();
extern unsigned int lbl_83264304;
extern unsigned int uStack_100;


unsigned __int64 fn_83011630(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  char cVar5;
  __int64 *plVar4;
  unsigned __int64 uStack_100;
  unsigned char auStack_f8 [8];
  unsigned int auStack_f0 [20];
  unsigned int auStack_a0 [40];
  
  uStack_100 = ZEXT48(*(unsigned int **)(param_1 + 0x50)) << 0x20;
  puVar3 = *(unsigned int **)(param_1 + 0x50);
  while (puVar3 != (unsigned int *)0x0) {
    uVar1 = puVar3[2];
    if ((((param_2 == 0) || (*(int *)(uVar1 + 0x34) == param_2)) &&
        (cVar5 = fn_83010658(param_1,*(unsigned int *)(uVar1 + 8),param_3), cVar5 == '\0')) &&
       ((*(unsigned int *)(*(int *)(uVar1 + 8) + 0x14) & 0xffffff00) != 0x5010000)) {
      auStack_f0[0] = 0;
      uVar2 = *(unsigned int *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
      if (uVar2 == 0x4011) {
LAB_830116d8:
        (**(int (***)())(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_f0);
      }
      else if (uVar2 == 0x5011) {
        fn_83032FE8();
        goto LAB_830116d8;
      }
      fn_82FF5198(lbl_83264304,*(unsigned int *)(uVar1 + 0x28));
      plVar4 = (__int64 *)fn_83013400(auStack_f8,param_1,uVar1,param_1 + 0x50,uStack_100);
      uStack_100 = ((((unsigned __int64)(uStack_100)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int *)((unsigned __int64)*plVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      puVar3 = (((unsigned __int64)(uStack_100) >> 0) & 0xFFFFFFFF);
      uStack_100 = *plVar4;
    }
    else {
      uStack_100 = CONCAT44((unsigned int *)*puVar3,puVar3);
      puVar3 = (unsigned int *)*puVar3;
    }
  }
  uStack_100 = ZEXT48(*(unsigned int **)(param_1 + 0x70)) << 0x20;
  puVar3 = *(unsigned int **)(param_1 + 0x70);
  do {
    while( true ) {
      if (puVar3 == (unsigned int *)0x0) {
        return 1;
      }
      uVar1 = puVar3[2];
      if (((param_2 == 0) || (*(int *)(uVar1 + 0x34) == param_2)) &&
         ((cVar5 = fn_83010658(param_1,*(unsigned int *)(uVar1 + 8),param_3), cVar5 == '\0' &&
          ((*(unsigned int *)(*(int *)(uVar1 + 8) + 0x14) & 0xffffff00) != 0x5010000)))) break;
      uStack_100 = CONCAT44((unsigned int *)*puVar3,puVar3);
      puVar3 = (unsigned int *)*puVar3;
    }
    auStack_a0[0] = 0;
    uVar2 = *(unsigned int *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
    if (uVar2 == 0x4011) {
LAB_830117bc:
      (**(int (***)())(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_a0);
    }
    else if (uVar2 == 0x5011) {
      fn_83032FE8();
      goto LAB_830117bc;
    }
    fn_82FF5198(lbl_83264304,*(unsigned int *)(uVar1 + 0x28));
    plVar4 = (__int64 *)fn_83013400(auStack_f8,param_1,uVar1,param_1 + 0x70,uStack_100);
    uStack_100 = ((((unsigned __int64)(uStack_100)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int *)((unsigned __int64)*plVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    puVar3 = (((unsigned __int64)(uStack_100) >> 0) & 0xFFFFFFFF);
    uStack_100 = *plVar4;
  } while( true );
}

