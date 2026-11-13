typedef struct Node_82986DF0 {
  int f00;
  int type;
  int f08;
  int f0c;
  int f10;
} Node_82986DF0;

typedef struct Desc_82986DF0 {
  int f00;
  int f04;
  char *data;
} Desc_82986DF0;

typedef struct Obj_82986DF0 {
  int f00[4];
  Node_82986DF0 *node;
  int f14[3];
  Desc_82986DF0 *desc;
  int f24[3];
  int f30;
} Obj_82986DF0;

extern Obj_82986DF0 *fn_82986C50(void *ctx, void *source);
extern int fn_82980328(void *ctx, void *out, void *data, int *value);

int fn_82986DF0(void *ctx, void *source, void *out)
{
  Obj_82986DF0 *obj;
  Node_82986DF0 *node;
  int hr;

  obj = fn_82986C50(ctx, source);
  if (obj != 0 && obj->node != 0 && obj->node->type == 9) {
    node = obj->node;
    if (node->type == 9 && node->f10 == 0) {
      hr = fn_82980328(ctx, out, obj->desc->data + 0x10, &obj->f30);
      if (hr < 0) {
        goto done;
      }
      hr = 0;
      goto done;
    }
  }
  hr = 0x80004005;
done:
  return hr;
}
