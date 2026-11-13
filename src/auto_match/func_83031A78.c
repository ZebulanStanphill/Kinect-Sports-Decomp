extern int fn_82FB04A0();
extern int fn_82FF5D28();
extern int fn_83007AE8();
extern int fn_83035A40();
extern int fn_83035CC0();
extern int fn_83035EC0();
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


unsigned __int64 fn_83031A78(__int64 param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int *puStack0000001c;
  unsigned int uStack00000024;
  
  puStack0000001c = (unsigned int *)(param_2 + 4);
  uStack00000024 = param_3;
  uVar2 = fn_83007AE8(param_1,&stack0x0000001c,&stack0x00000024,0);
  if (((int)uVar2 == 1) &&
     (uVar2 = fn_82FB04A0(param_1,&stack0x0000001c,&stack0x00000024), (int)uVar2 == 1)) {
    uVar5 = 0;
    uVar1 = *puStack0000001c;
    puStack0000001c = puStack0000001c + 1;
    if (uVar1 != 0) {
      do {
        piVar3 = (int *)fn_83035A40(*puStack0000001c);
        if (piVar3 == (int *)0x0) {
          return 2;
        }
        fn_83035CC0(piVar3,param_1);
        uVar2 = fn_83035EC0(piVar3,&stack0x0000001c,&stack0x00000024);
        if ((int)uVar2 != 1) {
          (**(int (***)())(*piVar3 + 8))(piVar3);
          return uVar2;
        }
        puVar4 = (unsigned int *)fn_82FF5D28(param_1 + 0xa8);
        if (puVar4 == (unsigned int *)0x0) {
          (**(int (***)())(*piVar3 + 8))(piVar3);
          return 2;
        }
        uVar5 = uVar5 + 1;
        *puVar4 = piVar3;
      } while (uVar5 < uVar1);
    }
  }
  return uVar2;
}

