typedef struct { int pad[2]; unsigned int type; } K;
typedef struct { int pad; int value; } D;
typedef struct { K *key; int x; D *data; int y; } E;
typedef struct { int a, b; E *begin; E *end; } V;
unsigned char fn_828B9250(V *v)
{
  int value = 1;
  E *e;
  for (e = v->begin; e != v->end; e++) {
    if (e->key->type == 0x800a) {
      value = e->data->value;
      break;
    }
  }
  return value == 0;
}
