extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_8223A9E0();
extern int fn_8232A988();
extern int fn_823B4900();
extern int fn_825AF0C8();


void fn_825AE918(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_30 [1];
  unsigned char auStack_20 [16];
  
  fn_825AF0C8(auStack_20,param_1);
  uVar2 = fn_823B4900(param_1,7,0,0);
  fn_8232A988(auStack_30,uVar2 >> 3 & 0xf,0,4);
  fn_8232A988(auStack_30,uVar2 & 7,4,3);
  lVar3 = fn_8223A9E0(auStack_30,0,4);
  lVar4 = fn_8223A9E0(auStack_30,4,3);
  if ((lVar3 == 0) && (lVar4 != 0)) {
    for (uVar2 = lVar4 << 0x31; (uVar2 & 0xfff0000000000000) == 0; uVar2 = uVar2 << 1) {
    }
  }
  puVar1 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  return;
}

