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
typedef unsigned int undefined8;
typedef unsigned int ulonglong;
typedef unsigned __int64 qword;
typedef int longlong;
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
extern int fn_82AEFC28();
extern unsigned char fn_82B83188();
extern void fn_82AF07E8(void);


static __forceinline int notNull_82B857D8(void *p) { if (p) return 1; return 0; }
static __forceinline void mark_82B857D8(unsigned *set,unsigned index) {
    unsigned *data;
    if ((~set[0]&1)!=0) data=(unsigned *)(set[0]+4);
    else data=set;
    data[index>>5] |= 1u<<(index&31);
}
unsigned char fn_82B857D8(int *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  unsigned char cVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint auStack_30 [4];
  
  uVar9 = 0;
  for (puVar1 = (uint *)*param_1; notNull_82B857D8(puVar1); puVar1 = (uint *)puVar1[1]) {
    if ((*puVar1 & 0xe000000) == 0) {
      uVar9 = uVar9 + 1;
    }
  }
  fn_82AEFC28(auStack_30,uVar9,fn_82AF07E8,
                    *(undefined4 *)(*(int *)((uint)param_1 & 0xfffff000) + 0x94));
  puVar1 = (uint *)*param_2;
  while (notNull_82B857D8(puVar1)) {
    if ((*puVar1 & 0xe000000) == 0) {
      uVar2 = puVar1[3];
      bVar4 = false;
      uVar7 = 1;
      for (puVar3 = (uint *)*param_1; notNull_82B857D8(puVar3); puVar3 = (uint *)puVar3[1]) {
        if ((*puVar3 & 0xe000000) == 0) {
          if (puVar3[3] == uVar2) {
            mark_82B857D8(auStack_30,uVar7);
            bVar4 = true;
          }
          uVar7 = uVar7 + 1;
        }
      }
      if (!bVar4) {
        return 0;
      }
    }
    puVar1 = (uint *)puVar1[1];
  }
  return !(uVar9 != 0 && fn_82B83188(auStack_30,0,uVar9-1));
}

