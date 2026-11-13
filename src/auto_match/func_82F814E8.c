typedef struct { unsigned code; int sig; void (*act)(); } Ent_82F814E8;
typedef struct {
  char pad[0x5c];
  Ent_82F814E8 *tab;
  int f60;
  int f64;
} Ptd_82F814E8;
extern Ptd_82F814E8 *_getptd_noexit(void);

int fn_82F814E8(unsigned code, int info)
{
  Ptd_82F814E8 *ptd;
  Ent_82F814E8 *tab;
  Ent_82F814E8 *e;
  void (*act)();
  int saved;
  int savedf64;
  int i;

  ptd = _getptd_noexit();
  if (ptd == 0) return 0;
  tab = ptd->tab;
  e = tab;
  do {
    if (e->code == code) break;
    e++;
  } while (e < tab + 12);
  if (e >= tab + 12 || e->code != code) e = 0;
  if (e == 0) return 0;
  act = e->act;
  if (act == 0) return 0;
  if ((unsigned)act == 5) {
    e->act = 0;
    return 1;
  }
  if ((unsigned)act == 1) return -1;
  saved = ptd->f60;
  ptd->f60 = info;
  if (e->sig == 8) {
    for (i = 3; i < 12; i++) ptd->tab[i].act = 0;
    savedf64 = ptd->f64;
    code = e->code;
    if (code == 0xc000008e) ptd->f64 = 0x83;
    else if (code == 0xc0000090) ptd->f64 = 0x81;
    else if (code == 0xc0000091) ptd->f64 = 0x84;
    else if (code == 0xc0000093) ptd->f64 = 0x85;
    else if (code == 0xc000008d) ptd->f64 = 0x82;
    else if (code == 0xc000008f) ptd->f64 = 0x86;
    else if (code == 0xc0000092) ptd->f64 = 0x8a;
    else if (code == 0xc00002b5) ptd->f64 = 0x8d;
    else if (code == 0xc00002b4) ptd->f64 = 0x8e;
    act(8, ptd->f64);
    ptd->f64 = savedf64;
  } else {
    e->act = 0;
    act(e->sig);
  }
  ptd->f60 = saved;
  return -1;
}
