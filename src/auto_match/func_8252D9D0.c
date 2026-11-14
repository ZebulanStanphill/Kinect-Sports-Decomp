typedef struct Msg_8252D9D0 {
  int type;
  int size;
  float value;
  int b;
  int a;
  int c;
} Msg_8252D9D0;

typedef struct Target_8252D9D0 Target_8252D9D0;
typedef struct Vtbl_8252D9D0 {
  void *slots[3];
  void (*send)(Target_8252D9D0 *self, Msg_8252D9D0 *msg);
} Vtbl_8252D9D0;
struct Target_8252D9D0 { Vtbl_8252D9D0 *vt; };

extern void XMemSet(void *p, int value, int size);

void fn_8252D9D0(int a, int b, float value, Target_8252D9D0 *target, int c)
{
  Msg_8252D9D0 msg;
  XMemSet(&msg.value, 0, 0x10);
  msg.type = 0xa;
  msg.size = 0x18;
  msg.value = value;
  msg.b = b;
  msg.a = a;
  msg.c = c;
  target->vt->send(target, &msg);
}
