extern unsigned int fn_82A2D360(void *, unsigned int, void *);
extern int ObIsTitleObject(void);
extern void *ExAllocatePoolTypeWithTag(unsigned int, unsigned int, unsigned int);
extern void ExFreePool(void *);


unsigned __int64 fn_82A2D490(unsigned int param_1,unsigned short *param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar1;
  unsigned int uVar4;
  unsigned int lVar5;
  
  if (((param_2 == (unsigned short *)0x0) || (uVar4 = (unsigned int)*param_2, uVar4 == 0)) ||
     ((uVar4 == 1 && (**(char **)(param_2 + 2) == '*')))) {
    lVar5 = 0;
  }
  else {
    lVar5 = uVar4 << 1;
  }
  iVar2 = ObIsTitleObject();
  puVar3 = (unsigned int *)ExAllocatePoolTypeWithTag(lVar5 + 0xc,0x65446f49,(iVar2 == 0) + '\x01');
  if (puVar3 == 0) return 0xffffffffc000009a;
  { int i; for(i=0;i<3;i++) puVar3[i]=0; }
  if (lVar5 != 0) {
    *(short *)((int)puVar3 + 6) = (short)lVar5;
    puVar3[2] = puVar3 + 3;
    iVar2 = fn_82A2D360(puVar3 + 1,param_3,param_2);
    if (iVar2 == 0) {
      ExFreePool(puVar3);
      return 0xffffffffc000000d;
    }
  }
  *param_4=puVar3;
  return 0;
}
