extern unsigned fn_8268AF70(const char*,unsigned,unsigned);
typedef struct Iface_82752FC8 { void **vt;} Iface_82752FC8;
extern unsigned strlen(const char*);


unsigned int  fn_82752FC8(unsigned param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar6;
  unsigned uVar5;
  unsigned int *puVar7;
  
  iVar2 = *param_2;
  puVar6 = (unsigned int *)(*(unsigned int *)(iVar2 + 0xc) & 0xfffffffc);
  if ((*puVar6 & 0x7fffffff) == 0) {
    puVar6 = (unsigned int *)((char*(*)())((Iface_82752FC8*)(*(int *)(*(int *)(iVar2 + 0x14) + 0xc)))->vt[15])((void*)(*(int *)(*(int *)(iVar2 + 0x14) + 0xc)));
  }
  else {
    puVar6 = puVar6 + 2;
  }
  uVar3 = *(unsigned int *)(iVar2 + 8);
  uVar4 = *(unsigned int *)(*(int *)(*(int *)(iVar2 + 0x14) + 0xc) + 0x14);
  uVar3 = (uVar3 | uVar4) & 3;
  uVar5 = fn_8268AF70((const char*)puVar6,strlen((const char*)puVar6),0x1505);
  return uVar5 ^ ((uVar3 | uVar4) & 3);
}

