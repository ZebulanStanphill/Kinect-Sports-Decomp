#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_b0;
extern int fn_82FA5190();
extern int fn_82FF5198();
extern int fn_83010770();
extern int fn_83011828();
extern int fn_83019E38();
extern int fn_83032FE8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264304;
extern unsigned int uStack_c0;


void fn_83011CF8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  char cVar7;
  int iVar6;
  __int64 lVar8;
  unsigned __int64 uStack_c0;
  unsigned int *puStack_b8;
  unsigned int *puStack_b4;
  unsigned int auStack_b0 [20];
  
  puVar1 = *(unsigned int **)(param_1 + 0x70);
  puVar4 = (unsigned int *)0x0;
  do {
    while( true ) {
      while( true ) {
        puVar3 = puVar1;
        if (puVar3 == (unsigned int *)0x0) {
          fn_83011828(param_1,param_2,param_3,param_4);
          return;
        }
        puVar1 = (unsigned int *)puVar3[2];
        if ((((param_2 & 0xffffffff) == 0) ||
            (cVar7 = fn_83010770(param_1,param_2,puVar3[1]), cVar7 != '\0')) &&
           (((param_3 & 0xffffffff) == 0 || ((unsigned __int64)(unsigned int)puVar1[0xd] == (param_3 & 0xffffffff))
            ))) break;
        puVar1 = (unsigned int *)*puVar3;
        puVar4 = puVar3;
      }
      if (((param_4 & 0xff) != 0) || (puVar1[0xc] == 0)) break;
      puVar1[0xc] = puVar1[0xc] + -1;
      puVar1 = (unsigned int *)*puVar3;
      puVar4 = puVar3;
    }
    uStack_c0 = CONCAT44(puVar1,(((unsigned __int64)(uStack_c0) >> 32) & 0xFFFFFFFF));
    lVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x90) - (unsigned __int64)(unsigned int)puVar1[5]) +
            (unsigned __int64)(unsigned int)puVar1[3];
    puVar1[3] = (int)lVar8;
    iVar6 = fn_83019E38(param_1 + 0x50,lVar8,&uStack_c0);
    if (iVar6 != 1) {
      auStack_b0[0] = 0;
      uVar2 = *(unsigned int *)(puVar1[2] + 0x14) >> 8;
      if (uVar2 == 0x4011) {
LAB_83011dfc:
        (**(int (***)())(*(int *)puVar1[2] + 0x28))((int *)puVar1[2],auStack_b0);
      }
      else if (uVar2 == 0x5011) {
        fn_83032FE8();
        goto LAB_83011dfc;
      }
      fn_82FF5198(lbl_83264304,puVar1[10]);
      (**(int (***)())(*(int *)puVar1[2] + 8))();
      uVar5 = lbl_831BC768;
      (**(int (***)())*puVar1)(puVar1,0);
      fn_82FA5190(uVar5,puVar1);
    }
    puStack_b8 = (unsigned int *)*puVar3;
    if (puVar3 == *(unsigned int **)(param_1 + 0x70)) {
      *(unsigned int **)(param_1 + 0x70) = puStack_b8;
    }
    else {
      *puVar4 = puStack_b8;
    }
    if (puVar3 == *(unsigned int **)(param_1 + 0x74)) {
      *(unsigned int **)(param_1 + 0x74) = puVar4;
    }
    uStack_c0 = CONCAT44(puStack_b8,puVar4);
    *puVar3 = *(unsigned int *)(param_1 + 0x78);
    *(unsigned int **)(param_1 + 0x78) = puVar3;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    puVar1 = puStack_b8;
    puStack_b4 = puVar4;
  } while( true );
}

