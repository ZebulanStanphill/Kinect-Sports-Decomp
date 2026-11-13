typedef struct Ev_82441388 { char *s; unsigned k; } Ev_82441388;
extern void fn_82441298(void *, unsigned, void *);
extern void fn_824BF8A8(void *, Ev_82441388 *);
extern unsigned *lbl_82191C00[];

void fn_82441388(unsigned *param_1, void *param_2)
{
  unsigned *puVar2;
  char *pcVar1;
  int bVar3;
  unsigned uVar4;
  Ev_82441388 ev;

  puVar2 = lbl_82191C00[param_1[4]];
  pcVar1 = (char *)puVar2[1];
  if ((*param_1 & 0x40) != 0) {
    ev.k = 7;
    ev.s = pcVar1;
    fn_824BF8A8(param_2, &ev);
  }
  if ((*param_1 & 0x80) != 0) {
    ev.k = 8;
    ev.s = pcVar1;
    fn_824BF8A8(param_2, &ev);
    bVar3 = 1;
  } else bVar3 = 0;
  if ((*param_1 & 0x100000) != 0) {
    ev.k = 7;
    ev.s = "javelin_video";
    fn_824BF8A8(param_2, &ev);
  }
  if ((*param_1 & 8) != 0) {
    ev.s = (char *)*puVar2;
    ev.k = 7;
    fn_824BF8A8(param_2, &ev);
  }
  if (bVar3) {
    ev.s = (char *)*puVar2;
    ev.k = 6;
    fn_824BF8A8(param_2, &ev);
    ev.s = (char *)puVar2[3];
    ev.k = 7;
    fn_824BF8A8(param_2, &ev);
    ev.s = (char *)puVar2[4];
    ev.k = 7;
    fn_824BF8A8(param_2, &ev);
  }
  uVar4 = *param_1 >> 9 & 1;
  if ((uVar4 == 0) || (bVar3 = 1, (int)param_1[10] != 0)) {
    bVar3 = 0;
  }
  param_1[10] = uVar4;
  if (bVar3) {
    ev.s = (char *)puVar2[5];
    ev.k = 7;
    fn_824BF8A8(param_2, &ev);
  }
  uVar4 = *param_1;
  if (((uVar4 >> 0xc & 1) != 0) || ((uVar4 & 0x2000) != 0)) {
    ev.s = (char *)puVar2[4];
    uVar4 = ~(uVar4 >> 0xc) & 1 | 8;
    ev.k = uVar4;
    fn_824BF8A8(param_2, &ev);
    ev.s = (char *)puVar2[5];
    ev.k = uVar4;
    fn_824BF8A8(param_2, &ev);
    ev.s = (char *)puVar2[3];
    ev.k = (param_1[6] == 0) + 8;
    fn_824BF8A8(param_2, &ev);
  }
  if ((((*param_1 & 0x1000) != 0) || ((*param_1 & 0x2000) != 0)) || (bVar3)) {
    param_1[7] = 1;
  }
  fn_82441298(param_1, puVar2[2], param_2);
}
