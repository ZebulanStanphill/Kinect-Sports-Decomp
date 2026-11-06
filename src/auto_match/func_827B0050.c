extern void fn_827AEA98(void);
extern unsigned int fn_827AEAC0(void *, int, unsigned int, unsigned int *, void *);
extern void fn_827AFFE0(void *, unsigned int);
typedef struct { char *data; unsigned int count; char pad[0x10]; char f18; char f19; } O;
int fn_827B0050(O *o, unsigned int key)
{
  unsigned int k2 = key;
  unsigned int i = fn_827AEAC0(o, 0, o->count, &key, (void *)fn_827AEA98);
  if (i < o->count && *(unsigned int *)(o->data + i * 0x28 + 0x14) == k2) {
    fn_827AFFE0(o, i);
    o->f18 = 0;
    o->f19 = 0;
    return 1;
  }
  return 0;
}
