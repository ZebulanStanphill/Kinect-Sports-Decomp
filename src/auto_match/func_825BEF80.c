typedef struct Elem12 {
    int a;
    int b;
    int c;
} Elem12;

typedef struct List {
    int pad0;
    int pad4;
    unsigned int count;
} List;

extern int fn_825200F0(void *out, Elem12 *src);
extern int fn_827D96A0(void *item);
extern void *fn_827DDDD8(void *set, int *key);
extern int fn_827DDFB8(void *set, void *item);
extern unsigned int fn_82A1E650(int handle, int timeout);


int fn_825BEF80(int param_1, int *param_2, void *param_3)
{
  unsigned int i;
  int key[4];
  unsigned char buf[32];

  if (fn_82A1E650(*(int *)(param_1 + 0x1b4), 0) != 0x102) {
    for (i = 0; i < (*(List **)(param_1 + 0x5c))->count; i++) {
      fn_825200F0(buf, &(*(Elem12 **)(param_1 + 100))[i]);
      if ((*(int (**)())(*param_2 + 4))(param_2, buf) != 0) {
        key[0] = fn_827D96A0(buf);
        if (fn_827DDDD8(param_3, key) == 0) {
          fn_827DDFB8(param_3, buf);
        }
      }
    }
  }
  return 0;
}
