typedef struct { char *str; char *val; } Pair;
typedef struct { Pair *data; int size; int cap; } Vec;
typedef struct { char pad[0x28]; int start; int end; } Obj;
typedef struct { char pad[0x10]; void *heap; } Ctx;
extern Ctx *fn_82CE5410(void);
extern void fn_82CE63B0(void *heap, Vec *v, int elsize);

static int rd_int(char *p, int *off)
{
  int *q = (int *)(p + *off);
  *off += 4;
  return *q;
}

static char *rd_str(char *p, int *off)
{
  char *s = p + *off;
  int i = 0;
  while (s[i] != 0) i++;
  i++;
  while ((i & 3) != 0) i++;
  *off += i;
  return s;
}

void fn_82E17DD0(Obj *o, char *base, Vec *v)
{
  int off;
  char *p = base + o->start;
  for (off = 0; off < o->end - o->start; ) {
    int val;
    char *name;
    Ctx *c;
    Pair *e;
    val = rd_int(p, &off);
    if (val == -1) return;
    name = rd_str(p, &off);
    c = fn_82CE5410();
    if (v->size == (v->cap & 0x3fffffff)) fn_82CE63B0(c->heap, v, 8);
    e = &v->data[v->size++];
    e->str = name;
    e->val = base + val;
  }
}
