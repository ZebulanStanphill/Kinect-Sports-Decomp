extern void fn_82F02410(void *, int, int);

typedef struct Ent_82E85718 {
  int pad0[3];
  int f0c;
  int f10;
  int f14;
  int f18;
} Ent_82E85718;

void fn_82E85718(char *o)
{
  if (*(int *)(o + 0x500) != 0) {
    int i;
    fn_82F02410(*(void **)(o + 0x1ebc), 1, 1);
    i = 0;
    if (0 < *(int *)(o + 0x544)) {
      int *p = (int *)(o + 0x4f8);
      do {
        fn_82F02410(*(void **)(o + 0x1ebc), p[5], 0x12);
        fn_82F02410(*(void **)(o + 0x1ebc), p[6], 0x12);
        fn_82F02410(*(void **)(o + 0x1ebc), p[3], 0xe);
        p = p + 4;
        fn_82F02410(*(void **)(o + 0x1ebc), *p, 0xe);
        i++;
      } while (i < *(int *)(o + 0x544));
    }
  } else {
    fn_82F02410(*(void **)(o + 0x1ebc), 0, 1);
  }
}
