extern int fn_82864528(void);
extern int fn_82864580(struct E1_82864650 *);
extern int fn_828645C8(struct E2_82864650 *);

extern struct G_82864650 {
  int pad;
  int a;
  float b;
} lbl_832116B4;

typedef struct E1_82864650 { char b[0x2c]; } E1_82864650;
typedef struct E2_82864650 { char b[0x14]; } E2_82864650;
typedef struct Obj_82864650 {
  char pad[0x2c];
  int m2c;
  float m30;
  struct E1_82864650 *base1;
  unsigned short n1;
  char pad3a[2];
  struct E2_82864650 *base2;
  unsigned short n2;
} Obj_82864650;

void fn_82864650(Obj_82864650 *p)
{
  int i;

  fn_82864528();
  lbl_832116B4.a = p->m2c;
  lbl_832116B4.b = p->m30;
  for (i = 0; i < p->n1; i++)
    fn_82864580(&p->base1[i]);
  lbl_832116B4.a = 1;
  lbl_832116B4.b = 0.0f;
  for (i = 0; i < p->n2; i++)
    fn_828645C8(&p->base2[i]);
}
