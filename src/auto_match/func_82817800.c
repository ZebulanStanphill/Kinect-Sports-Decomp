typedef struct Sec { int pad[5]; int addr; } Sec;
typedef struct Ent { Sec *sec; int pad; } Ent;
typedef struct Fix { unsigned int dsec; unsigned int doff; unsigned int ssec; int soff; } Fix;
typedef struct T { Ent *ents; int x4; Fix *fix; unsigned int nfix; } T;

void fn_82817800(T *t)
{
  unsigned int i = 0;
  if (t->nfix > 0) {
    int off = 0;
    do {
      Fix *f = (Fix *)(off + (char *)t->fix);
      *(int *)(t->ents[f->dsec].sec->addr + f->doff) = t->ents[f->ssec].sec->addr + f->soff;
      i++;
      off += 16;
    } while (i < t->nfix);
  }
}
