extern int fn_82286080(unsigned int v);

typedef struct { char pad[0x5a4]; unsigned int arr[1]; } Data;
typedef struct { int pad; int *count; Data *data; } Obj;

void fn_8228BC90(Obj *param_1, unsigned int param_2)
{
  unsigned char found;
  int i;
  int n;

  if (fn_82286080(param_2) != 1) {
    found = 0;
    i = 0;
    n = *param_1->count;
    if (0 < n) {
      do {
        if (param_1->data->arr[i] == param_2) {
          found = 1;
        }
        i++;
      } while (i < n);
    }
    if (!found) {
      param_1->data->arr[n] = param_2;
      *param_1->count = *param_1->count + 1;
    }
  }
}
