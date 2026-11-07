typedef void (*VFunc_8269AB28)(void *self, void *arg);

typedef struct Obj_8269AB28 {
  VFunc_8269AB28 *vt;
} Obj_8269AB28;

typedef struct Msg_8269AB28 {
  int first;
  int second;
  unsigned short s8;
  unsigned char ba;
  signed char bb;
  unsigned char bc;
  unsigned char bd;
} Msg_8269AB28;

void fn_8269AB28(Obj_8269AB28 *param_1)
{
  Msg_8269AB28 msg;

  msg.second = 0;
  msg.s8 = 0;
  msg.ba = 0;
  msg.bc = 0;
  msg.bd = 0;
  msg.first = 1;
  msg.bb = -1;
  param_1->vt[0x6c / 4](param_1, &msg);
}
