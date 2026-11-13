#define true 1
extern int fn_8267BE38();
extern int fn_8268B120();
extern int fn_8268BB68();
extern int fn_826BD078();
extern int fn_82F65390();
extern unsigned int iStack00000014;
extern unsigned int iStack_50;
extern unsigned int lbl_831E7E64;
extern unsigned int stack0x00000014;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_8268C070(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iStack00000014;
  int iStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char uStack_40;
  unsigned int uStack_3c;
  
  uStack_4c = 0;
  uStack_48 = 0;
  iStack_50 = 0;
  uStack_44 = 0x200;
  uStack_40 = 0;
  uStack_3c = lbl_831E7E64;
  iStack00000014 = param_1;
  uVar1 = fn_826BD078(&stack0x00000014);
  do {
    if ((uVar1 & 0xffffffff) == 0) {
LAB_8268c1e8:
      fn_8268BB68(param_3,&iStack_50);
      if (iStack_50 != 0) {
        fn_8267BE38();
      }
      return;
    }
    if ((uVar1 & 0xffffffff) == 0x26) {
      iVar2 = fn_82F65390(iStack00000014,0xffffffff82005c68,5);
      if (iVar2 == 0) {
        uVar3 = 0x22;
      }
      else {
        iVar2 = fn_82F65390(iStack00000014,0xffffffff82005c70,5);
        if (iVar2 != 0) {
          iVar2 = fn_82F65390(iStack00000014,0xffffffff82005c78,4);
          if (iVar2 == 0) {
            fn_8268B120(&iStack_50,0x26);
            iStack00000014 = iStack00000014 + 4;
          }
          else {
            iVar2 = fn_82F65390(iStack00000014,0xffffffff82005c80,3);
            if (iVar2 == 0) {
              uVar3 = 0x3c;
            }
            else {
              iVar2 = fn_82F65390(iStack00000014,0xffffffff82005c84,3);
              if (iVar2 != 0) {
                uVar1 = 0x26;
                goto LAB_8268c178;
              }
              uVar3 = 0x3e;
            }
            fn_8268B120(&iStack_50,uVar3);
            iStack00000014 = iStack00000014 + 3;
          }
          goto LAB_8268c1e8;
        }
        uVar3 = 0x27;
      }
      fn_8268B120(&iStack_50,uVar3);
      iStack00000014 = iStack00000014 + 5;
      goto LAB_8268c1e8;
    }
LAB_8268c178:
    fn_8268B120(&iStack_50,uVar1);
    uVar1 = fn_826BD078(&stack0x00000014);
  } while( true );
}

