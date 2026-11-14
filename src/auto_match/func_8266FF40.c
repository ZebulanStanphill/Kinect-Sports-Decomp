typedef struct Value_8266FF40 {
  int pad0;
  unsigned int flags;
  void *data;
  int padc;
} Value_8266FF40;

extern void fn_824B4280(void *obj);
extern void fn_825B1960(void *obj);
extern void fn_8266F128(Value_8266FF40 *mem, int flags);

void fn_8266FF40(Value_8266FF40 **values, unsigned int count)
{
  if (count != 0 && *values != 0) {
    unsigned int i;
    for (i = 0; i < count; i++) {
      Value_8266FF40 *v = &(*values)[i];
      switch ((int)(v->flags & 0x8f)) {
      case 4:
        fn_824B4280((unsigned char)((*values)[i].flags >> 6 & 1) ? *(void **)v->data : v->data);
        break;
      case 5:
        fn_825B1960(v->data);
        break;
      }
    }
    if (*values != 0)
      fn_8266F128(*values, 3);
    *values = 0;
  }
}
