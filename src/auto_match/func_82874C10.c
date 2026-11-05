typedef struct Slot { char used; char pad3[3]; char data[0x6c]; } Slot;
typedef struct Pool {
  int p0;
  Slot *begin, *end;
  char pad[8];
  int count;
  char pad2[0x10];
  unsigned mask;
} Pool;
typedef struct Reg { char pad[0x1c]; int n; } Reg;
typedef struct Tmp { char b[0x70]; } Tmp;
extern void fn_8287B990(Tmp *, int, unsigned);
extern void fn_828752D8(void *, Tmp *);
extern void fn_82865170(void);
extern Reg *fn_82866400(void);
extern void fn_8287B658(Tmp *);

void *fn_82874C10(Pool *p, int arg)
{
  Slot *s;
  unsigned i = 0;
  for (s = p->begin; s != p->end; s++, i++) {
    if (s->used == 0) {
      Tmp t;
      int *n;
      void *res;
      p->begin[i].used = 1;
      fn_8287B990(&t, arg, i);
      fn_828752D8(p->begin[i].data, &t);
      fn_82865170();
      n = &fn_82866400()->n;
      (*n)++;
      p->count++;
      p->mask = (1 << i) | p->mask;
      res = p->begin[i].data;
      fn_8287B658(&t);
      return res;
    }
  }
  return 0;
}
