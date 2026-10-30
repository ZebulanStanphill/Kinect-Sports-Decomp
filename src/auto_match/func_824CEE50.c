extern void *fn_8265C9E0(int size);
extern void fn_824CC840(void *p, void *a);
extern char lbl_821C0C34[];
typedef struct { void *vt; char pad[0xdc]; unsigned char flag; } T;
T *fn_824CEE50(void *a)
{
  T *p = (T *)fn_8265C9E0(0xf0);
  if (p != 0) {
    fn_824CC840(p, a);
    p->flag = 1;
    p->vt = lbl_821C0C34;
    return p;
  }
  return 0;
}
