typedef struct Str_826A0968 {
  int pad[2];
  int refs;
  unsigned int hash;
} Str_826A0968;

typedef struct Entry_826A0968 {
  const char *name;
  int value;
  unsigned char flag;
} Entry_826A0968;

typedef struct Arg_826A0968 {
  Str_826A0968 **name;
  unsigned char *value;
} Arg_826A0968;

typedef struct Buf_826A0968 {
  unsigned int capacity;
} Buf_826A0968;

typedef struct Obj_826A0968 {
  char pad0[0x254];
  char pool[0x54];
  Buf_826A0968 *table;
} Obj_826A0968;

extern Entry_826A0968 lbl_83155428[];
extern unsigned int strlen(const char *);
extern Str_826A0968 *fn_82694548(void *, const char *, unsigned int, unsigned int);
extern void fn_8269DB80(Buf_826A0968 **, Buf_826A0968 **, unsigned int);
extern void fn_8269DE08(Buf_826A0968 **, Buf_826A0968 **, Arg_826A0968 *, unsigned int);
extern void fn_826944C8(Str_826A0968 *);

void fn_826A0968(Obj_826A0968 *o)
{
  Buf_826A0968 **table = &o->table;
  void *pool = o->pool;
  Entry_826A0968 *e;
  Str_826A0968 *s;
  unsigned char v;
  Arg_826A0968 arg;

  if (*table == 0 || (*table)->capacity < 0x85) {
    fn_8269DB80(table, table, 0x85);
  }
  e = lbl_83155428;
  if (e->name != 0) {
  arg.name = &s;
  arg.value = &v;
  do {
    Str_826A0968 *p;
    s = fn_82694548(pool, e->name, strlen(e->name), (e->flag ? 0x10000000 : 0) | 0x20000000);
    s->refs = s->refs + 1;
    v = (unsigned char)e->value;
    fn_8269DE08(table, table, &arg, s->hash);
    p = s;
    if (--p->refs == 0) {
      fn_826944C8(p);
    }
    e++;
  } while (e->name != 0);
  }
}
