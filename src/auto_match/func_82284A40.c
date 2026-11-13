extern int fn_82284738();
extern int fn_82284BA0();
extern int fn_82F64988();


void fn_82284A40(unsigned param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned short *puVar1;
  int iVar2;
  unsigned short *puVar3;
  unsigned short *end;
  
  iVar2 = fn_82284738();
  puVar1 = *(unsigned short **)(iVar2 + 0x14c);
  puVar3 = *(unsigned short **)(iVar2 + 0x148);
  end=puVar1;
  puVar1 -= 0x220;
  if (puVar3 != end) {
    do {
      if (*(unsigned *)(puVar3 + 0x218) == param_1) {
        if (param_2 != 0) { fn_82F64988(puVar3,0x20,param_2); } else { *puVar3=0; }
        if (param_3 != 0) { fn_82F64988(puVar3+0x100,0x20,param_3); } else { puVar3[0x100]=0; }
        if (*(unsigned *)(puVar3 + 0x218) == *(unsigned *)(puVar1 + 0x218)) {
          fn_82284BA0(iVar2,puVar1,puVar1 + 0x100,*(unsigned int *)(puVar1 + 0x21a),
                          *(unsigned int *)(puVar1 + 0x21c));
        }
      }
      puVar3 = puVar3 + 0x220;
    } while (puVar3 != *(unsigned short **)(iVar2 + 0x14c));
  }
  return;
}

