typedef struct Msg_82FFF670 {
  int type;
  int a;
  unsigned char flag;
  int b;
  float x;
} Msg_82FFF670;

typedef struct Obj_82FFF670 Obj_82FFF670;
typedef struct Vt_82FFF670 {
  void *f[14];
  void (*send)(Obj_82FFF670 *, Msg_82FFF670 *);
} Vt_82FFF670;
struct Obj_82FFF670 { Vt_82FFF670 *vt; };

void fn_82FFF670(Obj_82FFF670 *o, float x, int a, int b)
{
  Msg_82FFF670 m;
  m.type = 8;
  m.x = x;
  m.flag = 0;
  m.a = a;
  m.b = b;
  o->vt->send(o, &m);
}
