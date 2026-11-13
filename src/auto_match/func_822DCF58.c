#define true 1
extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822DBCB8();
extern int fn_822DBD60();
extern int fn_822DC2E0();
extern int fn_822DD1B8();
extern int fn_822DD640();
extern int fn_822DD750();
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_822DCF58(int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_e0 [32];
  unsigned char auStack_c0 [32];
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned char auStack_80 [128];
  
  fn_822DBCB8(auStack_80,param_4);
  fn_822DBCB8(auStack_c0,param_3);
  iVar1 = *param_1;
  cVar2 = fn_822DD640(auStack_c0,auStack_80);
  if (cVar2 != '\0') {
    iVar3 = param_1[1];
    while( true ) {
      cVar2 = fn_822DD640(auStack_c0,auStack_80);
      if (cVar2 == '\0') break;
      uVar4 = (unsigned __int64)uStack_9c;
      uVar5 = (unsigned __int64)uStack_a0;
      fn_82230300(auStack_e0,0,0);
      if (uVar5 != uVar4) {
        fn_82230360(auStack_e0,uVar5,uVar4 - uVar5);
      }
      fn_822DD1B8(param_1,auStack_e0);
      fn_82230300(auStack_e0,1,0);
      fn_822DC2E0(auStack_c0);
    }
    iVar3 = ((iVar3 - iVar1) / 0x1c) * 0x1c + *param_1;
    if ((((param_2 - iVar1) / 0x1c) * 0x1c + *param_1 != iVar3) && (iVar3 != param_1[1])) {
      fn_822DD750();
    }
  }
  fn_822DBD60(auStack_c0);
  fn_822DBD60(auStack_80);
  fn_822DBD60(param_3);
  fn_822DBD60(param_4);
  return;
}

