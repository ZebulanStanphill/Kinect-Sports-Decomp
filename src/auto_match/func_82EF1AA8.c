struct Stream_82EF1AA8;
typedef struct StreamVT_82EF1AA8 {
  void (*write)(struct Stream_82EF1AA8 *self, void *data, int size);
} StreamVT_82EF1AA8;
typedef struct Stream_82EF1AA8 {
  StreamVT_82EF1AA8 *vt;
} Stream_82EF1AA8;

void fn_82EF1AA8(Stream_82EF1AA8 *s, unsigned __int64 value)
{
  s->vt->write(s, &value, 8);
}
