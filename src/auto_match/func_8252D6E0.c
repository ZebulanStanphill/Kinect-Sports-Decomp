struct Dev_8252D6E0; struct Sub_8252D6E0;
typedef struct Sub_8252D6E0 { struct SubVt_8252D6E0 *vt; } Sub_8252D6E0;
struct SubVt_8252D6E0 { void *(*f0)(Sub_8252D6E0 *); void *s[5]; void (*f18)(Sub_8252D6E0 *); };
typedef struct Dev_8252D6E0 { struct DevVt_8252D6E0 *vt; int pad[0x6c]; Sub_8252D6E0 *sub; } Dev_8252D6E0;
struct DevVt_8252D6E0 { void *s[43]; int (*fac)(Dev_8252D6E0 *); };
typedef struct { int pad0[3]; void *f0c; void *f10; int pad14[6]; int f2c; int f30; } S_8252D6E0;
typedef struct { char pad[0x180]; S_8252D6E0 s; } dummy_8252D6E0;
extern void fn_82532F98(void *, void *);
extern void fn_82554B28(void *, Dev_8252D6E0 *);
extern void fn_8255EBE0(void *, int);
extern void fn_8255EDD0(void *, int);
extern void fn_827F0180(void *, int, int, int, int);
extern char lbl_82190260[];
void fn_8252D6E0(char *param_1, char *param_2)
{
  S_8252D6E0 *s = (S_8252D6E0 *)(param_1 + 0x180);
  Dev_8252D6E0 *d;
  int *e;
  if (s->f0c != 0) {
    if (s->f30 != 0) fn_8255EDD0(s->f0c, s->f2c);
    else fn_8255EBE0(s->f0c, s->f2c);
    if (s->f10 != 0) fn_82554B28(s->f10, *(Dev_8252D6E0 **)(param_1 + 0x8c0));
    d = *(Dev_8252D6E0 **)(param_1 + 0x8c0);
    if (d != 0 && d->sub->vt->f0(d->sub) != 0) {
      d = *(Dev_8252D6E0 **)(param_1 + 0x8c0);
      e = *(int **)((char *)d + (*(int *)(param_2 + 0x44) + 0x20) * 4);
      if (d->vt->fac(d) == 0) {
        fn_827F0180(s->f0c, e[0], 1, 0, 0);
      } else {
        fn_827F0180(s->f0c, e[1], 1, 0, 0);
        d->sub->vt->f18(d->sub);
        fn_82532F98(e, lbl_82190260);
      }
    }
  }
}
