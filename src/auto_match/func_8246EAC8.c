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
extern int fn_822315A0();
extern int fn_82356F98();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_8246E850();
extern int fn_824713F8();

typedef struct Ref_8246EAC8 { int p; unsigned int rep; } Ref_8246EAC8;

void fn_8246EAC8(int param_1,int param_2,int param_3,int param_4)
{
  Ref_8246EAC8 a;
  Ref_8246EAC8 b;
  int v;
  a.p = 0;
  fn_824713F8(&b,param_2,&a,&param_3);
  fn_8246E850(param_1,fn_82365BD8(&a,&b),0,0,0,param_4);
  fn_82356F98(&a);
  fn_823F2E20(&b,&a);
  if (a.rep != 0) {
    fn_822315A0(a.rep);
  }
  if (b.rep != 0) {
    fn_822315A0(b.rep);
  }
}
