extern int isalnum(int);
extern int tolower(int);
extern int fn_82975B00(void *, void *, int, const char *);
typedef struct { int pad[1]; unsigned id; int pad2[0x16]; void *name; } Ent_8294B688;
typedef struct { int pad[2]; unsigned count; int pad2[2]; Ent_8294B688 **items; } Self_8294B688;

int fn_8294B688(Self_8294B688 *self, const char *s, unsigned *out, char c, unsigned id)
{
  unsigned i;
  Ent_8294B688 *found;
  void *name;

  *out = 0;
  while (*s != 0) {
    while (isalnum(*s) == 0)
      s++;
    if (tolower(*s) == c) {
      if (*out != 0) {
        found = 0;
        i = 0;
        if (self->count != 0) {
          do {
            Ent_8294B688 *e = self->items[i];
            if (e->id == id)
              found = e;
            i++;
          } while (i < self->count);
        }
        name = found != 0 ? found->name : 0;
        fn_82975B00(self, name, 0x119d, "cannot bind the same variable to multiple constants in the same constant bank");
        return 0x80004005;
      }
      *out = (unsigned)s;
      return 0;
    }
    while (isalnum(*s) != 0)
      s++;
  }
  return 0x80004005;
}
