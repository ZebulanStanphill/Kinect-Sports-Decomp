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
extern int fn_822315A0(void *);

undefined4 * fn_828C2190(undefined4 *param_1,int param_2,unsigned int param_3)
{
  undefined4 *puVar1;
  unsigned int iVar2;
  char *uVar3;
  unsigned char cVar4;
  undefined4 * it;
  
  puVar1 = *(undefined4 **)(param_2 + 0xdc);
  it = (undefined4 *)*puVar1;
  while (it != puVar1) {
    if (*(int *)(it[10] + 8) == param_3) {
      iVar2 = it[0xb];
      uVar3 = it[10];
      *param_1 = 0;
      param_1[1] = 0;
      if (iVar2 != 0) {
        cVar4 = fn_8223AAC0(iVar2);
        if (cVar4 != 0) {
        if (param_1[1] != 0) fn_822315A0(param_1[1]);
        param_1[1] = iVar2;
        *param_1 = uVar3;
        }
      }
      return param_1;
    }
    fn_828A1958(&it);
  }
  *param_1 = 0; param_1[1] = 0;
  return param_1;
}
