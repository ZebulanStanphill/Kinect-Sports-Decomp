extern void fn_82381CA8(void *p);
extern void fn_82381E58(void *p);
extern void fn_8289D4C0(void *p);
extern char lbl_82197080[];
extern char lbl_821B52CC[];

typedef struct { void *vt; } Sub;

void fn_823A0700(void **param_1)
{
  Sub *s = (Sub *)(param_1 + 0x8e);
  *param_1 = lbl_821B52CC;
  s->vt = lbl_82197080;
  fn_8289D4C0(s);
  fn_82381E58(param_1 + 0x3c);
  fn_82381CA8(param_1);
}
