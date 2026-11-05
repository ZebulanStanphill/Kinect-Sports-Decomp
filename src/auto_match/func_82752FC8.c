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
extern unsigned fn_8268AF70(const char*,unsigned,unsigned);
typedef struct Iface_82752FC8 { void **vt;} Iface_82752FC8;
extern unsigned strlen(const char*);


unsigned int  fn_82752FC8(unsigned param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar6;
  unsigned uVar5;
  uint *puVar7;
  
  iVar2 = *param_2;
  puVar6 = (uint *)(*(uint *)(iVar2 + 0xc) & 0xfffffffc);
  if ((*puVar6 & 0x7fffffff) == 0) {
    puVar6 = (uint *)((char*(*)())((Iface_82752FC8*)(*(int *)(*(int *)(iVar2 + 0x14) + 0xc)))->vt[15])((void*)(*(int *)(*(int *)(iVar2 + 0x14) + 0xc)));
  }
  else {
    puVar6 = puVar6 + 2;
  }
  uVar3 = *(uint *)(iVar2 + 8);
  uVar4 = *(uint *)(*(int *)(*(int *)(iVar2 + 0x14) + 0xc) + 0x14);
  uVar3 = (uVar3 | uVar4) & 3;
  uVar5 = fn_8268AF70((const char*)puVar6,strlen((const char*)puVar6),0x1505);
  return uVar5 ^ ((uVar3 | uVar4) & 3);
}

