struct VObj_82E42C10;
typedef struct VT_82E42C10 {
  void *s[11];
  void (*f2c)(struct VObj_82E42C10 *);
} VT_82E42C10;
typedef struct VObj_82E42C10 { VT_82E42C10 *vt; } VObj_82E42C10;

typedef struct Obj_82E42C10 {
  char pad0[0x6c];
  VObj_82E42C10 *slots[1];
} Obj_82E42C10;

extern void fn_82E3C5F8(void *, unsigned int, unsigned short ***);
extern void fn_82E74AE8(unsigned int);

void fn_82E42C10(char *p)
{
  unsigned int i;
  unsigned short *e;
  unsigned int n = *(unsigned int *)(p + 0x2ac);

  for (i = 0; i < n; i++) {
    fn_82E3C5F8(p + 0x26c, i, (unsigned short ***)&e);
    {
      VObj_82E42C10 *o = *(VObj_82E42C10 **)(p + (*e + 0x1b) * 4);
      o->vt->f2c(o);
    }
    n = *(unsigned int *)(p + 0x2ac);
  }
  fn_82E74AE8(*(unsigned int *)(p + 0x4b0));
}
