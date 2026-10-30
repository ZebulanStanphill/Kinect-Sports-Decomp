typedef struct Pkt_8247D1F0 {
  int type;
  int id;
  int x8;
  char buf[1000];
  int x3f4;
  int x3f8;
  int x3fc;
  char s400[0x1c];
  int x41c;
} Pkt_8247D1F0;
typedef struct Str_8247D1F0 { char b[0x20]; } Str_8247D1F0;
struct Iface_8247D1F0;
typedef struct VT_8247D1F0 {
  void *s[24];
  unsigned int (*get)(struct Iface_8247D1F0 *);
} VT_8247D1F0;
typedef struct Iface_8247D1F0 { VT_8247D1F0 *vt; } Iface_8247D1F0;
typedef struct Obj2_8247D1F0 { char pad[0x8c0]; Iface_8247D1F0 *iface; } Obj2_8247D1F0;
typedef struct Obj1_8247D1F0 { char pad[0x6c]; char *dst; } Obj1_8247D1F0;
extern void fn_82230300(void *, int, int);
extern void fn_82230360(void *, const char *, int);
extern int fn_8225C590(void);
extern void fn_8225D1F8(int, int);
extern void fn_8225D288(int, void *, unsigned int);
extern int fn_823AB478(void);
extern void fn_82486B08(void *);
extern void fn_82A1DD38(void *, void *, int);

void fn_8247D1F0(Obj1_8247D1F0 *param_1, Obj2_8247D1F0 *param_2)
{
  Str_8247D1F0 name;
  Pkt_8247D1F0 pkt;
  int uVar1;
  unsigned int uVar2;
  int uVar3;

  fn_82486B08(&pkt);
  uVar1 = fn_8225C590();
  fn_82230300(&name, 0, 0);
  fn_82230360(&name, "Player 1", 8);
  uVar2 = param_2->iface->vt->get(param_2->iface);
  fn_8225D288(uVar1, &name, uVar2);
  uVar3 = fn_823AB478();
  pkt.id = uVar3;
  pkt.type = 1;
  fn_82A1DD38(pkt.buf, (void *)uVar2, 1000);
  fn_82A1DD38(param_1->dst + 0x838, &pkt, 0x420);
  fn_8225D1F8(uVar1, uVar3);
  fn_82230300(&name, 1, 0);
  fn_82230300(&pkt.s400, 1, 0);
}
