extern char *strstr(const char *a, const char *b);
extern unsigned strlen(const char *s);
typedef struct Ent_82850B88 { char *name; char pad[0x4c]; } Ent_82850B88;
typedef struct Tab_82850B88 { unsigned count; Ent_82850B88 *items; } Tab_82850B88;

int fn_82850B88(Tab_82850B88 *t, const char *s, unsigned *out)
{
  unsigned i;
  for (i = 0; i < t->count; i++) {
    char *p = strstr(t->items[i].name, s);
    if (p != 0 && p[strlen(s)] == 0) {
      *out = i;
      return 1;
    }
  }
  return 0;
}
