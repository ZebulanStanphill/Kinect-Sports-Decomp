static __forceinline unsigned *Init_82709BF8(unsigned *p) {*p=0;return p;}
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
extern int fn_8267B890();
extern int fn_826C3768();
extern int fn_82700DA0();
extern int fn_82709658();
extern unsigned int lbl_831E7E64;


void fn_82709BF8(int param_1,undefined4 param_2,int *param_3,unsigned param_4,unsigned param_5)

{
  undefined4 *puVar1;
  struct { unsigned key; void *value; } kv;
  struct { unsigned rc; int *ptr; unsigned data[2]; unsigned char flag; } val;
  if (*(unsigned *)(param_1 + 0xa00) == 0) {
    void *mem=(void *)fn_8267B890(lbl_831E7E64,4,0);
    puVar1=mem ? Init_82709BF8((unsigned *)mem) : 0;
    *(undefined4 **)(param_1 + 0xa00) = puVar1;
  }
  val.flag = 0;
  val.data[0] = 0;
  val.data[1] = 0;
  if (param_4 != 0) {
    *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
  }
  val.rc = param_4;
  if (param_3 != (int *)0x0) {
    *param_3 = *param_3 + 1;
  }
  val.ptr = param_3;
  fn_826C3768(&val.data[0],param_5);
  kv.value = &val.rc;
  kv.key = param_2;
  fn_82709658(*(undefined4 *)(param_1 + 0xa00),*(undefined4 *)(param_1 + 0xa00),&kv.key);
  fn_82700DA0(&val.rc);
  return;
}
