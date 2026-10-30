typedef struct { unsigned int count; char pad[0x108]; int flag; } Sub;
typedef struct { char pad[0x5c0]; Sub sub; } T;
typedef struct { char pad[0x10]; int type; } M;
extern void fn_8232B410(Sub *s);
void fn_822C1358(T *t, M *m)
{
  Sub *s = &t->sub;
  if (m->type == 8 && s->flag == 0) return;
  if (s->count > 0) {
    fn_8232B410(s);
  }
}
