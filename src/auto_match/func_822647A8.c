typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_8225F670();
extern int fn_8225FCE8(const char *,__vector4);
extern int fn_8225FDE0();
extern unsigned char fn_82E1CAD0(int);
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern unsigned int lbl_83276584;


void fn_822647A8(unsigned param_1,unsigned param_2,unsigned param_3,unsigned param_4,
                  unsigned param_5,unsigned param_6,unsigned param_7,unsigned param_8,__vector4 pos,__vector4 opponent)

{
  undefined4 uVar1;
  unsigned char *pcVar2;
  int iVar3;
  unsigned char cVar4;
  
  uVar1 = lbl_83276584;
  pcVar2 = (unsigned char *)fn_8225F670();
  if (*pcVar2 != '\0') {
    iVar3 = fn_8225FDE0(0x11,param_3);
    if ((iVar3 == 0) && (cVar4 = fn_82E1CAD0(0x11), cVar4 != '\0')) {
      fn_82E1CB88("MatchCounter",uVar1);
      fn_82E1CB88("Round",param_1);
      fn_82E1CB88("PlayerId",param_2);
      fn_82E1CB88("BlockCount",param_4);
      fn_82E1CB88("ConsecutiveBlocks",param_5);
      fn_82E1CB88("BlockArea",param_6);
      fn_8225FCE8("PlayerPosition",pos);
      fn_8225FCE8("OpponentPosition",opponent);
      fn_82E1CB88("PlayerStunned",param_7);
      fn_82E1CB88("OpponentStunned",param_8);
      fn_82E1CCA8();
    }
  }
  return;
}

