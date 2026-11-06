struct Stream_826E6B30;
typedef struct {
  void *slots0[14];
  int (*seek)(struct Stream_826E6B30 *, int, int);
} VT_826E6B30;

typedef struct {
  char pad[0x48];
  int f48;
  unsigned int f4c;
} Info_826E6B30;

typedef struct Stream_826E6B30 {
  VT_826E6B30 *vt;
  int f4;
  Info_826E6B30 *info;
} Stream_826E6B30;

int fn_826E6B30(Stream_826E6B30 *self)
{
  Info_826E6B30 *info = self->info;
  unsigned int saved;
  int cur;

  if (info == 0) {
    return 0;
  }
  if (info->f48 != 0) {
    return 0;
  }
  saved = info->f4c;
  cur = self->vt->seek(self, 0, 2);
  self->vt->seek(self, saved, 0);
  return cur - saved;
}
