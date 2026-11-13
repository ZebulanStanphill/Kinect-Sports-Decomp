extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern int fn_82F735D8();
extern int fn_82F73928();
extern int fn_82F73A48();


unsigned int * fn_82F74398(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned char auStack_20 [8];
  unsigned char auStack_18 [8];
  
  uVar1 = fn_82F73A48(auStack_20,0);
  puVar2 = (unsigned int *)fn_82F73928(auStack_18,0x60,uVar1);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  fn_82F735D8(param_1,0x27);
  return param_1;
}

