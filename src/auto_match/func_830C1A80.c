extern void fn_82C565B0(void *, int);
extern void fn_82C75C10(void *);
extern void fn_82C78EE0(void *, void *);
extern void fn_82C935C8(void *, int);
extern void fn_82CAD120(void *, int, int);
typedef struct { int a; int b; } E_830C1A80;
typedef struct { int pad[0x13]; int m4c; } Sub_830C1A80;
typedef struct {
  union {
    char raw[1];
    struct { char pad0[0x1cc]; int m1cc; } u1;
  } x;
} Obj_830C1A80;
void fn_830C1A80(char *p)
{
  int uVar1;
  *(int *)(p + 0xb64) = ((int *)p)[*(int *)(p + 0xb94) + 0x2df];
  *(int *)(p + 0xb70) = ((int *)p)[*(int *)(p + 0xb94) + 0x2e2];
  *(int *)(p + 0x830) = ((E_830C1A80 *)p)[*(int *)(p + 0x82c) + 0x107].a;
  *(int *)(p + 0x834) = ((E_830C1A80 *)(p + 0x83c - 4))[*(int *)(p + 0x82c)].b;
  if (*(int *)(p + 0xfb0) == 3) *(int *)(p + 0x1cc) = 0; else *(int *)(p + 0x1cc) = 1;
  fn_82C565B0(p, *(int *)(p + 0xf8));
  if (*(int *)(p + 0xfb0) == 2 || *(int *)(p + 0xfb0) == 3) uVar1 = 1; else uVar1 = 0;
  ((Sub_830C1A80 *)*(int *)(p + 0x7b8))->m4c = uVar1;
  fn_82CAD120(*(void **)(p + 0x7b8), *(int *)(p + 0xf8), 1);
  fn_82C935C8(p, *(int *)(p + 0xf8));
  fn_82C75C10(p);
  fn_82C78EE0(p, p + 0x3e70);
}
