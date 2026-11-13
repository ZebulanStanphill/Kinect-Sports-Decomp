typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int lbl_82132D10;
extern V16 vectorAddFloatingPoint();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalEstimateFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8308A638(int *param_1,unsigned __int64 param_2,int param_3)

{
  int (**pcVar1)();
  unsigned int *puVar2;
  int in_r0;
  unsigned char auVar3 [16];
  unsigned char in_vs35 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs40 [16];
  unsigned char auVar4 [16];
  unsigned char in_vs42 [16];
  unsigned char auVar5 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010040;
  unsigned int in_register_00010044;
  unsigned int in_register_00010048;
  unsigned int in_vr4;
  unsigned int in_register_00010060;
  unsigned int in_register_00010064;
  unsigned int in_register_00010068;
  unsigned int in_vr6;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  unsigned int in_register_000101f0;
  unsigned int in_register_000101f4;
  unsigned int in_register_000101f8;
  unsigned int in_vr31;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [48];
  
  pcVar1 = *(int (***)())(*param_1 + 0x50);
  puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000100c0;
  puVar2[1] = in_register_000100c4;
  puVar2[2] = in_register_000100c8;
  puVar2[3] = in_vr12;
  (*pcVar1)(param_1,auStack_40,auStack_30);{ V16 _vt0 = vectorAddFloatingPoint(in_vs42,in_vs43); memcpy(auVar4, &_vt0, 16); }
  puVar2 = (unsigned int *)((int)param_1 + in_r0 + 0x40 & 0xfffffff0);
  *puVar2 = in_register_00010090;
  puVar2[1] = in_register_00010094;
  puVar2[2] = in_register_00010098;
  puVar2[3] = in_vr9;
  vectorRotateLeftImmediateMaskInsert128
            (*(unsigned char (*) [16])((unsigned int)(param_1 + 0x18) & 0xfffffff0),
             *(unsigned char (*) [16])((unsigned int)(&lbl_82132D10 + in_r0) & 0xfffffff0),1,0);{ V16 _vt1 = vectorReciprocalEstimateFloatingPoint(in_vs40); memcpy(auVar3, &_vt1, 16); }{ V16 _vt2 = vectorNegativeMultiplySubtractFloatingPoint(auVar3,in_vs40,in_vs42); memcpy(auVar5, &_vt2, 16); }{ V16 _vt3 = vectorMultiplyAddFloatingPoint(auVar5,auVar3,auVar3); memcpy(auVar3, &_vt3, 16); }
  vectorAddFloatingPoint(auVar4,auVar3);
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x14) & 0xfffffff0);
  *puVar2 = in_register_00010060;
  puVar2[1] = in_register_00010064;
  puVar2[2] = in_register_00010068;
  puVar2[3] = in_vr6;{ V16 _vt4 = vectorAddFloatingPoint(in_vs37,in_vs43); memcpy(auVar4, &_vt4, 16); }
  puVar2 = (unsigned int *)((int)param_1 + in_r0 + 0x70 & 0xfffffff0);
  *puVar2 = in_register_00010040;
  puVar2[1] = in_register_00010044;
  puVar2[2] = in_register_00010048;
  puVar2[3] = in_vr4;
  vectorRotateLeftImmediateMaskInsert128
            (*(unsigned char (*) [16])((unsigned int)(param_1 + 0x24) & 0xfffffff0),
             *(unsigned char (*) [16])((unsigned int)(&lbl_82132D10 + in_r0) & 0xfffffff0),1,0);{ V16 _vt5 = vectorReciprocalEstimateFloatingPoint(in_vs35); memcpy(auVar3, &_vt5, 16); }{ V16 _vt6 = vectorNegativeMultiplySubtractFloatingPoint(auVar3,in_vs35,auVar5); memcpy(auVar5, &_vt6, 16); }{ V16 _vt7 = vectorMultiplyAddFloatingPoint(auVar5,auVar3,auVar3); memcpy(auVar3, &_vt7, 16); }
  vectorAddFloatingPoint(auVar4,auVar3);
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x20) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  *puVar2 = in_register_000101f0;
  puVar2[1] = in_register_000101f4;
  puVar2[2] = in_register_000101f8;
  puVar2[3] = in_vr31;
  return;
}

