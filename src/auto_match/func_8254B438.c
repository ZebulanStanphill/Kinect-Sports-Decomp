extern int fn_82552720();
extern int fn_825529B0();
extern void fn_82552AD8(void *, float *, float);
extern float lbl_8327FB00[];


static __forceinline int valid_8254B438(unsigned int *p) {
 if (p) return *p != 0;
 return 0;
}
void fn_8254B438(unsigned int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
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

