typedef struct { int pad[3]; void *out; } Obj_82E1CEE8;
extern char lbl_8204EF40[];
extern char lbl_8200ED9C[];
extern void fn_82E1E4A0(void *out, void *name, const char *fmt, void *value);

int fn_82E1CEE8(Obj_82E1CEE8 *self, void *name, void *value, unsigned char flag)
{
  if (flag) {
    fn_82E1E4A0(self->out, name, lbl_8204EF40, value);
  } else {
    fn_82E1E4A0(self->out, name, lbl_8200ED9C, value);
  }
  return 0;
}
