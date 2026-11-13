extern int fn_824BF8A8();
extern unsigned char *lbl_82191C00[];



void fn_824415A8(unsigned int *param_1,unsigned param_2)

{
  char *pcVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  int bVar4;
  struct { char *p; unsigned int tag; } value;
  
  puVar3 = lbl_82191C00[param_1[4]];
  pcVar1 = *(char **)(puVar3 + 0x1c);
  if ((*param_1 & 0x40) != 0) {
    value.tag = 7;
    value.p = pcVar1;
    fn_824BF8A8(param_2,&value.p);
  }
  if ((*param_1 & 0x80) != 0) {
    value.tag = 8;
    value.p = pcVar1;
    fn_824BF8A8(param_2,&value.p);
    bVar4 = 1;
  } else { bVar4 = 0; }
  if ((*param_1 & 0x100000) != 0) {
    value.tag = 7;
    value.p = "discus_video";
    fn_824BF8A8(param_2,&value.p);
  }
  if ((*param_1 & 8) != 0) {
    value.p = *(char **)(puVar3 + 0x18);
    value.tag = 7;
    fn_824BF8A8(param_2,&value.p);
  }
  if (bVar4) {
    value.p = *(char **)(puVar3 + 0x18);
    value.tag = 6;
    fn_824BF8A8(param_2,&value.p);
  }
  if ((*param_1 & 0x80) != 0) {
    value.p = *(char **)(puVar3 + 0x20);
    value.tag = 7;
    fn_824BF8A8(param_2,&value.p);
  }
  uVar2 = *param_1;
  if (((uVar2 >> 0xc & 1) != 0) || ((uVar2 & 0x2000) != 0)) {
    value.p = *(char **)(puVar3 + 0x20);
    value.tag = ~(uVar2 >> 0xc) & 1 | 8;
    fn_824BF8A8(param_2,&value.p);
  }
  return;
}

