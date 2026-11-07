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
extern unsigned char *fn_8288AE70(int, unsigned int *);
extern void fn_8289EDA0(unsigned int,unsigned int,unsigned int *,unsigned char);
extern int fn_828A1C98();
extern unsigned int iStack_1c;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


unsigned int fn_8288B150(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int result;

  undefined1 uStack_20;
  unsigned int iStack_1c;
  struct { undefined4 first; undefined4 second; } stack_pair_18;

  

  fn_828A1C98(&stack_pair_18.first,param_1 + 0x124,&param_2);
  iStack_1c = 0;
  fn_8289EDA0(stack_pair_18.first,stack_pair_18.second,&iStack_1c,uStack_20);
  if ((iStack_1c != 0) &&
     (pcVar1 = (char *)fn_8288AE70(param_1 + 0x124,&param_2), *pcVar1 == '\0')) {
    result = 0;
  } else { result = 1; }
  return (unsigned char)result;
}

