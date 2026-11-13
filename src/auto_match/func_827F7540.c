#define true 1
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern int fn_827F7210();
extern int fn_827F7218();
extern int fn_827F98C8();
extern int fn_82800A48();
extern int fn_8280CB70();
extern unsigned int uStack_50;


void fn_827F7540(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uStack_50;
  unsigned char auStack_4c [4];
  unsigned char auStack_48 [72];
  
  uVar4 = fn_827F7210();
  uVar3 = param_2;
  do {
    uVar7 = uVar3 + 1;
    uVar3 = uVar7 & 0xffff;
    uVar6 = uVar3;
    if ((uVar4 & 0xffff) <= uVar3) {
      return;
    }
    do {
      if ((int)uVar6 == (int)param_2) {
        fn_827F98C8(param_1,uVar3,auStack_4c);
        uVar1 = *(unsigned int *)(param_1 + 0xc);
        uVar6 = fn_827F7218(param_1,uVar3);
        fn_827F98C8(param_1,uVar6,auStack_48);
        uVar2 = *(unsigned int *)(param_1 + 0xc);
        fn_82800A48(param_1,uVar3,&uStack_50);
        fn_8280CB70((uVar6 & 0x3ffffff) * 0x40 + (unsigned __int64)uVar2,uStack_50,
                     (uVar7 & 0xffff) * 0x40 + (unsigned __int64)uVar1);
        break;
      }
      uVar5 = fn_827F7218();
      uVar6 = uVar5 & 0xffff;
    } while ((uVar5 & 0xffff) != 0xffff);
  } while( true );
}

