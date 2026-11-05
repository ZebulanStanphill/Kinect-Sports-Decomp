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
extern int fn_82284738();
extern int fn_82284BA0();
extern int fn_82F64988();


void fn_82284A40(unsigned param_1,unsigned int param_2,unsigned int param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *end;
  
  iVar2 = fn_82284738();
  puVar1 = *(undefined2 **)(iVar2 + 0x14c);
  puVar3 = *(undefined2 **)(iVar2 + 0x148);
  end=puVar1;
  puVar1 -= 0x220;
  if (puVar3 != end) {
    do {
      if (*(unsigned *)(puVar3 + 0x218) == param_1) {
        if (param_2 != 0) { fn_82F64988(puVar3,0x20,param_2); } else { *puVar3=0; }
        if (param_3 != 0) { fn_82F64988(puVar3+0x100,0x20,param_3); } else { puVar3[0x100]=0; }
        if (*(unsigned *)(puVar3 + 0x218) == *(unsigned *)(puVar1 + 0x218)) {
          fn_82284BA0(iVar2,puVar1,puVar1 + 0x100,*(undefined4 *)(puVar1 + 0x21a),
                          *(undefined4 *)(puVar1 + 0x21c));
        }
      }
      puVar3 = puVar3 + 0x220;
    } while (puVar3 != *(undefined2 **)(iVar2 + 0x14c));
  }
  return;
}

