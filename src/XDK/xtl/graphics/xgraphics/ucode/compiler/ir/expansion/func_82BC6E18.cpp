class Iface_82BC6E18 { public: virtual void f0();virtual void f1();virtual void f2();virtual void f3();virtual void f4();virtual void f5();virtual void f6();virtual void f7();virtual void f8();virtual void f9();virtual void f10();virtual void f11();virtual void f12();virtual void f13();virtual void f14();virtual void f15();virtual void f16();virtual void f17();virtual void f18();virtual void f19();virtual void f20();virtual void f21();virtual void f58(int,int,int); };

typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
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
extern "C" int fn_82AB15D0(int,const char*,const char*,const char*,int);
extern "C" int fn_82BD3510(unsigned*,int);
extern "C" unsigned int lbl_820E4F24;


static __forceinline int flagA_82BC6E18(unsigned *p) { if((p[0]&0x400000)!=0) { unsigned v=p[1]; return ((v>>15)&(v>>11)&(v>>7)&(v>>3)&1); } return 0; }
static __forceinline int flagB_82BC6E18(unsigned *p) { if((p[0]&0x400000)!=0) { unsigned v=p[1]; return ((v>>20)&1); } return 0; }
extern "C" void fn_82BC6E18(undefined8 param_1,uint *param_2,uint *param_3,int param_4,Iface_82BC6E18 *param_5)

{
  int uVar1;
  struct { char table[4]; union { unsigned key; unsigned char bytes[4]; } u; } frame;
  
frame.u.key = *param_2;
frame.table[0] = 0;
frame.table[1] = 1;
frame.table[2] = 2;
frame.table[3] = 3;
  if ((param_4 == 0) || (param_5 == (Iface_82BC6E18 *)0x0)) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","operand_number != 0 && pIRI != 0","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\expansion.cpp",0x10df);
  }
  if (param_3 != (uint *)0x0) {
    uVar1=flagA_82BC6E18(param_3);
    if (uVar1 != 0) {
      *(bool *)((int)param_5 + param_4 + 0x98) = *(char *)((int)param_5 + param_4 + 0x98) == '\0';
    }
    uVar1=flagB_82BC6E18(param_3);
    if (uVar1 != 0) {
      *(undefined1 *)((int)param_5 + param_4 + 0x9e) = 1;
    }
    frame.table[0] = fn_82BD3510(param_3,0);
    frame.table[1] = fn_82BD3510(param_3,1);
    frame.table[2] = fn_82BD3510(param_3,2);
    frame.table[3] = fn_82BD3510(param_3,3);
  }
  param_5->f58(param_4,0,frame.table[frame.u.bytes[0]]);
  param_5->f58(param_4,1,frame.table[frame.u.bytes[1]]);
  param_5->f58(param_4,2,frame.table[frame.u.bytes[2]]);
  param_5->f58(param_4,3,frame.table[frame.u.bytes[3]]);
  *param_2 = lbl_820E4F24;
  return;
}

