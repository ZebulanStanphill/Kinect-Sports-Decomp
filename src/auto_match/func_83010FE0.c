#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_a0;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern int fn_82FF5198();
extern int fn_83010770();
extern int fn_83013400();
extern int fn_83032FE8();
extern int fn_830333C8();
extern unsigned int lbl_83264304;
extern unsigned int uStack_100;


unsigned __int64 fn_83010FE0(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  char cVar6;
  __int64 *plVar5;
  unsigned __int64 uStack_100;
  unsigned char auStack_f8 [8];
  unsigned int auStack_f0 [20];
  unsigned int auStack_a0 [40];
  
  uStack_100 = ZEXT48(*(unsigned int **)(param_1 + 0x50)) << 0x20;
  puVar4 = *(unsigned int **)(param_1 + 0x50);
joined_r0x83011014:
  do {
    if (puVar4 == (unsigned int *)0x0) break;
    uVar1 = puVar4[2];
    iVar2 = *(int *)(uVar1 + 8);
    if ((((param_2 & 0xffffffff) == 0) ||
        (cVar6 = fn_83010770(param_1,param_2,*(unsigned int *)(iVar2 + 0x10)), cVar6 != '\0'))
       && ((param_3 == 0 || (*(int *)(uVar1 + 0x34) == param_3)))) {
      cVar6 = '\0';
      uVar3 = *(unsigned int *)(iVar2 + 0x14) >> 8;
      if (uVar3 == 0x4011) {
        cVar6 = '\x01';
      }
      else if (uVar3 == 0x5011) {
        cVar6 = fn_830333C8(*(unsigned int *)(uVar1 + 8),param_2,*(unsigned int *)(uVar1 + 0x34),uVar1
                             );
      }
      if (cVar6 != '\0') {
        auStack_f0[0] = 0;
        uVar3 = *(unsigned int *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
        if (uVar3 == 0x4011) {
LAB_830110c0:
          (**(int (***)())(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_f0);
        }
        else if (uVar3 == 0x5011) {
          fn_83032FE8();
          goto LAB_830110c0;
        }
        fn_82FF5198(lbl_83264304,*(unsigned int *)(uVar1 + 0x28));
        plVar5 = (__int64 *)fn_83013400(auStack_f8,param_1,uVar1,param_1 + 0x50,uStack_100);
        uStack_100 = ((((unsigned __int64)(uStack_100)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int *)((unsigned __int64)*plVar5 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        puVar4 = (((unsigned __int64)(uStack_100) >> 0) & 0xFFFFFFFF);
        uStack_100 = *plVar5;
        goto joined_r0x83011014;
      }
    }
    uStack_100 = CONCAT44((unsigned int *)*puVar4,puVar4);
    puVar4 = (unsigned int *)*puVar4;
  } while( true );
  uStack_100 = ZEXT48(*(unsigned int **)(param_1 + 0x70)) << 0x20;
  puVar4 = *(unsigned int **)(param_1 + 0x70);
  do {
    while( true ) {
      if (puVar4 == (unsigned int *)0x0) {
        return 1;
      }
      uVar1 = puVar4[2];
      iVar2 = *(int *)(uVar1 + 8);
      if ((((param_2 & 0xffffffff) == 0) ||
          (cVar6 = fn_83010770(param_1,param_2,*(unsigned int *)(iVar2 + 0x10)), cVar6 != '\0'))
         && (((param_3 == 0 || (*(int *)(uVar1 + 0x34) == param_3)) &&
             (((*(unsigned int *)(iVar2 + 0x14) & 0xffffff00) == 0x501100 &&
              (cVar6 = fn_830333C8(*(unsigned int *)(uVar1 + 8),param_2,
                                     *(unsigned int *)(uVar1 + 0x34),uVar1), cVar6 != '\0'))))))
      break;
      uStack_100 = CONCAT44((unsigned int *)*puVar4,puVar4);
      puVar4 = (unsigned int *)*puVar4;
    }
    auStack_a0[0] = 0;
    uVar3 = *(unsigned int *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
    if (uVar3 == 0x4011) {
LAB_830111d4:
      (**(int (***)())(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_a0);
    }
    else if (uVar3 == 0x5011) {
      fn_83032FE8();
      goto LAB_830111d4;
    }
    fn_82FF5198(lbl_83264304,*(unsigned int *)(uVar1 + 0x28));
    plVar5 = (__int64 *)fn_83013400(auStack_f8,param_1,uVar1,param_1 + 0x70,uStack_100);
    uStack_100 = ((((unsigned __int64)(uStack_100)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int *)((unsigned __int64)*plVar5 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    puVar4 = (((unsigned __int64)(uStack_100) >> 0) & 0xFFFFFFFF);
    uStack_100 = *plVar5;
  } while( true );
}

