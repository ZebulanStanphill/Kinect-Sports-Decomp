typedef struct R { char pad[0xc]; int count; } R;
extern R *fn_824E3740(void);
extern void fn_82BA02A8(void);
extern void fn_82F4EC00(void);
extern void *lbl_8326C000[];

void fn_824E3A70(void)
{
  R *r;
  lbl_8326C000[3] = (void *)fn_82BA02A8;
  r = fn_824E3740();
  if (r->count++ == 0) fn_82F4EC00();
}
