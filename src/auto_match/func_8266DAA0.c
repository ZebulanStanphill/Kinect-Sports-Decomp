typedef struct { void *ptr; void *rep; } SharedPtr;
typedef struct { char d[0xc]; } Entry;
extern void fn_8266D9F0(SharedPtr *out, Entry *e);
extern void fn_8266F628(void *p, void *arg);
extern void fn_822315A0(void *rep);

void fn_8266DAA0(char *self, void *arg)
{
  Entry *e;
  for (e = *(Entry **)(self + 0xd8); e != *(Entry **)(self + 0xdc); e++) {
    SharedPtr sp;
    fn_8266D9F0(&sp, e);
    if (sp.ptr != 0) {
      fn_8266F628(sp.ptr, arg);
    }
    if (sp.rep != 0) {
      fn_822315A0(sp.rep);
    }
  }
}
