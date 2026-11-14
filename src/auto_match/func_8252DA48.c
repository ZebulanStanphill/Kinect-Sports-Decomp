typedef struct Msg_8252DA48 {
  int type;
  int size;
  float value;
  int b;
  int a;
} Msg_8252DA48;

typedef struct Target_8252DA48 Target_8252DA48;
typedef struct Vtbl_8252DA48 {
  void *slots[3];
  void (*send)(Target_8252DA48 *self, Msg_8252DA48 *msg);
} Vtbl_8252DA48;
struct Target_8252DA48 { Vtbl_8252DA48 *vt; };

extern void XMemSet(void *p, int value, int size);

void fn_8252DA48(int a, int b, float value, Target_8252DA48 *target)
{
  Msg_8252DA48 msg;
  XMemSet(&msg.value, 0, 0xc);
  msg.type = 0xb;
  msg.size = 0x14;
  msg.value = value;
  msg.b = b;
  msg.a = a;
  target->vt->send(target, &msg);
}
