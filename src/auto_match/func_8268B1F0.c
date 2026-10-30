extern int fn_8268B0C0();
extern void *memcpy(void *, const void *, unsigned int);
extern unsigned int strlen(const char *);

typedef struct { char *data; int len; } Str_8268B1F0;

void fn_8268B1F0(Str_8268B1F0 *param_1, char *param_2, int param_3)
{
  int iVar2;

  if (param_2 != 0 && param_3 != 0) {
    if (param_3 == -1) {
      param_3 = strlen(param_2);
    }
    iVar2 = param_1->len;
    fn_8268B0C0(param_1, iVar2 + param_3);
    memcpy(param_1->data + iVar2, param_2, param_3);
  }
}
