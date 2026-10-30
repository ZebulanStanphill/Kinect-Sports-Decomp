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
extern void fn_82CFC050(void *, void *, unsigned int);
extern int fn_82CFD5F0();
extern int fn_82CFFC80();
extern int fn_82CFFD50();
extern void *fn_82CFFD68(void *);
extern int fn_82CFFEF0();


void fn_82E0E668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar4;
  unsigned int uVar1;
  void *uVar2;
  void *uVar3;
  struct { undefined1 c [8]; undefined1 b [8]; undefined1 a [8]; } L;
  
  fn_82CFFC80(L.a,param_1,param_2);
  fn_82CFFC80(L.b,param_3,param_4);
  pcVar4 = (char *)fn_82CFFD50(L.c,L.a);
  if ((*pcVar4 != '\0') && (pcVar4 = (char *)fn_82CFFD50(L.c,L.b), *pcVar4 != '\0'))
  {
    fn_82CFFEF0(L.b);
    uVar1 = fn_82CFD5F0();
    uVar2 = fn_82CFFD68(L.a);
    fn_82CFC050(fn_82CFFD68(L.b),uVar2,uVar1);
  }
  return;
}

