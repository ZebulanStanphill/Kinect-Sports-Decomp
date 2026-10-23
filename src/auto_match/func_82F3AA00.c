extern void fn_82E583E0(void *p);
extern void fn_82F39E50(void *list, int i, void **out);
extern void fn_82F3A250(void *p, void *item);
extern void fn_82F3A700(void *p);
extern void fn_82F3E1E0(void *p);
extern char lbl_8215FDD0[];
extern char lbl_82162C2C[];

typedef struct P {
  void *vt0;
  void *vt4;
  char pad8[0x48 - 0x8];
  char list[0x1268 - 0x48];
  unsigned int count;
} P;

void fn_82F3AA00(P *p)
{
  unsigned short i;
  void *item;

  p->vt0 = lbl_82162C2C;
  p->vt4 = lbl_8215FDD0;
  for (i = 0; i < p->count; i++) {
    fn_82F39E50(p->list, i, &item);
    fn_82F3A250(p, item);
  }
  fn_82F3E1E0(&p->vt4);
  fn_82F3A700(p->list);
  fn_82E583E0(p);
}
