extern void fn_822315A0(void *rep);
extern unsigned char fn_8223AAC0(void *rep);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_822A9580(void *obj, void *src);
extern int fn_82526AF8(int last, int *table, void *key);
extern char lbl_821AE598[];

typedef struct Names_822A9460 {
  int f00[3];
  int count;         /* 0x0c */
  int *table;        /* 0x10 */
} Names_822A9460;
extern Names_822A9460 lbl_83265A2C;

typedef struct Source_822A9460 {
  int f00;
  char data[0x9c];   /* 0x04 */
  char name[0x40];   /* 0xa0 */
  char altName[1];   /* 0xe0 */
} Source_822A9460;

typedef struct Owner_822A9460 {
  char pad0[0x3c];
  unsigned int altIndex; /* 0x3c */
} Owner_822A9460;

typedef struct Entry_822A9460 {
  char data[0xa0];
  int index;         /* 0xa0 */
} Entry_822A9460;

typedef struct Rep_822A9460 {
  const void *vt;
  int uses;
  int weaks;
  Entry_822A9460 obj; /* 0x0c */
} Rep_822A9460;

typedef struct Ptr_822A9460 { Entry_822A9460 *ptr; Rep_822A9460 *rep; } Ptr_822A9460;

static __forceinline int Lookup(void *key)
{
  int i = fn_82526AF8(lbl_83265A2C.count - 1, lbl_83265A2C.table + 1, key);
  return i != -1 ? i + 1 : 0;
}

Ptr_822A9460 *fn_822A9460(Ptr_822A9460 *out, Owner_822A9460 *owner, Source_822A9460 *src)
{
  Rep_822A9460 *rep;
  Rep_822A9460 *mem;
  Entry_822A9460 *obj;

  mem = (Rep_822A9460 *)fn_8265C9E0(0xb0);
  if (mem != 0) {
    mem->uses = 1;
    mem->vt = lbl_821AE598;
    mem->weaks = 1;
    rep = mem;
  } else {
    rep = 0;
  }
  obj = &rep->obj;
  fn_822A9580(obj, src->data);
  obj->index = Lookup(src->name);
  if (owner->altIndex == 0) {
    owner->altIndex = Lookup(src->altName);
  }
  out->ptr = 0;
  out->rep = 0;
  if (rep != 0) {
    if (fn_8223AAC0(rep) != 0) {
      if (out->rep != 0) {
        fn_822315A0(out->rep);
      }
      out->rep = rep;
      out->ptr = obj;
    }
    fn_822315A0(rep);
  }
  return out;
}
