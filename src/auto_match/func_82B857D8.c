typedef unsigned char bool;
#define true 1
#define false 0
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
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  bool bVar4;
  unsigned int uVar5;
  unsigned char cVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned int auStack_30 [4];
  
  uVar9 = 0;
  for (puVar1 = (unsigned int *)*param_1; notNull_82B857D8(puVar1); puVar1 = (unsigned int *)puVar1[1]) {
    if ((*puVar1 & 0xe000000) == 0) {
      uVar9 = uVar9 + 1;
    }
  }
  fn_82AEFC28(auStack_30,uVar9,fn_82AF07E8,
                    *(unsigned int *)(*(int *)((unsigned int)param_1 & 0xfffff000) + 0x94));
  puVar1 = (unsigned int *)*param_2;
  while (notNull_82B857D8(puVar1)) {
    if ((*puVar1 & 0xe000000) == 0) {
      uVar2 = puVar1[3];
      bVar4 = false;
      uVar7 = 1;
      for (puVar3 = (unsigned int *)*param_1; notNull_82B857D8(puVar3); puVar3 = (unsigned int *)puVar3[1]) {
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
    puVar1 = (unsigned int *)puVar1[1];
  }
  return !(uVar9 != 0 && fn_82B83188(auStack_30,0,uVar9-1));
}

