void *memcpy(void *dst, const void *src, unsigned int n);
extern unsigned int fn_8300F128(void);
extern unsigned int fn_8300F208(unsigned int queue, void *msg, unsigned short size);
extern unsigned int lbl_832642E4;

typedef struct {
  unsigned short f0;
  unsigned short type;
  unsigned int id;
  unsigned char data[0x18];
  unsigned int arg;
} Msg_82FE8520;

unsigned int fn_82FE8520(unsigned int id, const void *data, unsigned int arg)
{
  Msg_82FE8520 msg;

  if (id == 0) {
    return 2;
  }
  msg.type = 8;
  msg.id = id;
  memcpy(msg.data, data, 0x18);
  msg.arg = arg;
  return fn_8300F208(lbl_832642E4, &msg, fn_8300F128());
}
