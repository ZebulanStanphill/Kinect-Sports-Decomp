extern unsigned fn_8268AF70(const char*,unsigned,unsigned);
typedef struct Iface_82753078 { void **vt;} Iface_82753078;
extern unsigned strlen(const char*);


unsigned int  fn_82753078(unsigned param_1,int param_2)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar5;
  unsigned uVar4;
  unsigned int *puVar6;
  
  puVar5 = (unsigned int *)(*(unsigned int *)(param_2 + 0xc) & 0xfffffffc);
  if ((*puVar5 & 0x7fffffff) == 0) {
    puVar5 = (unsigned int *)((char*(*)())((Iface_82753078*)(*(int *)(*(int *)(param_2 + 0x14) + 0xc)))->vt[15])((void*)(*(int *)(*(int *)(param_2 + 0x14) + 0xc)));
  }
  else {
    puVar5 = puVar5 + 2;
  }
  uVar2 = *(unsigned int *)(param_2 + 8);
  uVar3 = *(unsigned int *)(*(int *)(*(int *)(param_2 + 0x14) + 0xc) + 0x14);
  uVar2 = (uVar2 | uVar3) & 3;
  uVar4 = fn_8268AF70((const char*)puVar5,strlen((const char*)puVar5),0x1505);
  return uVar4 ^ ((uVar2 | uVar3) & 3);
}

