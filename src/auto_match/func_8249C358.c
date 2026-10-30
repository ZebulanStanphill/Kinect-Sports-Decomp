typedef struct {
  char pad0[0x24];
  int (*fn)(void);
} Glob_8249C358;

typedef struct {
  char pad0[0x70];
  unsigned int f70;
  char pad74[0xe0 - 0x74];
  char se0[1];
} Obj_8249C358;

extern Glob_8249C358 lbl_83276774;
extern int lbl_832960A0[];
extern int fn_825200A8(unsigned int, void *);

int fn_8249C358(Obj_8249C358 *self)
{
  int r;
  unsigned int i;
  int *p;

  if (self->f70 != 0 && fn_825200A8(self->f70, self->se0) != 0) {
    r = lbl_83276774.fn ? lbl_83276774.fn() : 0;
    if (r != 0) {
      i = 0;
      p = lbl_832960A0 + 0xc;
      while (self->f70 != p[-1] || p[0] == 0) {
        i += 0x30;
        p += 0xc;
        if (i >= 0xc0) {
          return 1;
        }
      }
    }
  }
  return 0;
}
