extern int fn_8267BE38();
extern int fn_8268AF70();
extern int fn_82693D88();
extern int fn_82693E40();
extern int fn_82693FE8();
extern int fn_82694448();
extern int memcpy();
extern unsigned int uStack_50;
extern unsigned int uStack_54;


unsigned int *
fn_826947E8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  char cVar4;
  unsigned int *puVar3;
  unsigned int uVar5;
  unsigned int * apuStack_60;
  unsigned int *puStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  
  uVar5 = param_3 + param_5;
  puVar1 = (unsigned int *)fn_82693D88(param_1,uVar5);
  if (puVar1 != (unsigned int *)0x0) {
    if (param_3 != 0) {
      memcpy(puVar1,param_2,param_3);
    }
    if (param_5 != 0) {
      memcpy((int)puVar1 + param_3,param_4,param_5);
    }
    *(unsigned char *)((int)puVar1 + uVar5) = 0;
    puStack_58 = puVar1;
    uVar2 = fn_8268AF70(puVar1,uVar5,0x1505);
    uStack_54 = uVar2 & 0xffffff;
    uStack_50 = uVar5;
    cVar4 = fn_82694448(param_1,&puStack_58,&apuStack_60);
    if (cVar4 != '\0') {
      if (uVar5 < 0xc) {
        *puVar1 = *(unsigned int *)(param_1 + 0x10);
        *(unsigned int **)(param_1 + 0x10) = puVar1;
      }
      else {
        fn_8267BE38(puVar1);
      }
      return apuStack_60;
    }
    puVar3 = (unsigned int *)fn_82693E40(param_1);
    apuStack_60 = puVar3;
    if (puVar3 != (unsigned int *)0x0) {
      puVar3[2] = 0;
      puVar3[4] = uVar5;
      *puVar3 = puVar1;
      puVar3[3] = uVar2 & 0xffffff;
      puVar3[1] = 0;
      fn_82693FE8(param_1,param_1,&apuStack_60,puVar3[3]);
      return puVar3;
    }
    if (uVar5 < 0xc) {
      *puVar1 = *(unsigned int *)(param_1 + 0x10);
      *(unsigned int **)(param_1 + 0x10) = puVar1;
    }
    else {
      fn_8267BE38(puVar1);
    }
  }
  return *(unsigned int **)(param_1 + 0x18);
}

