typedef struct Obj_82231480 {
  int pad[0x84];
  unsigned char flag;
} Obj_82231480;

typedef struct Res_82231480 {
  int f0;
  Obj_82231480 *owner;
} Res_82231480;

extern Res_82231480 *fn_8267B430(Obj_82231480 *obj, int a, int b);
extern unsigned int lbl_83297340;
extern Obj_82231480 lbl_83297348;

void fn_82231480(void)
{
  Res_82231480 *r;

  if ((lbl_83297340 & 1) == 0) {
    lbl_83297340 = lbl_83297340 | 1;
    lbl_83297348.flag = 0;
  }
  r = fn_8267B430(&lbl_83297348, 0x10000, 0x8000000);
  r->owner = &lbl_83297348;
  lbl_83297348.flag = 1;
}
