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
extern int fn_82552720();
extern int fn_825529B0();
extern void fn_82552AD8(void *, float *, float);
extern float lbl_8327FB00[];


static __forceinline int valid_8254B438(uint *p) {
 if (p) return *p != 0;
 return 0;
}
void fn_8254B438(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int bVar4;
  
  if (param_1[1] != 0) {
    puVar3 = param_1 + 0x68;
    iVar1 = fn_825529B0(puVar3);
    if (iVar1 == 0) {
      puVar2 = param_1 + 0x6b;
      bVar4 = valid_8254B438(puVar2);
      if (bVar4) {
        fn_82552720(*param_1 + 0x84c,puVar3,puVar2,0,4,0,0);
        fn_82552AD8(puVar3,lbl_8327FB00+30,*(float *)(param_1+0x6e));
      }
    }
  }
  return;
}

