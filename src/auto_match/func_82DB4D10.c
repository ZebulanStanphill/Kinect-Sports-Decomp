typedef struct {
  int pad0[5];
  unsigned int id;   /* 0x14 */
  __int64 data[11];  /* 0x18 */
} Elem_82DB4D10;
typedef struct { int pad[2]; unsigned int id; } Key_82DB4D10;
typedef struct {
  char pad[0x30];
  Elem_82DB4D10 *arr;  /* 0x30 */
  int count;           /* 0x34 */
} Self_82DB4D10;

static __forceinline int Decrement(int *p) { return --*p; }

void fn_82DB4D10(Self_82DB4D10 *self, Key_82DB4D10 *key)
{
  int i, k, last;
  unsigned __int64 *d, *s;
  for (i = self->count - 1; i >= 0; i--) {
    if (self->arr[i].id == key->id) {
      last = Decrement(&self->count);
      if (last != i) {
        d = (unsigned __int64 *)&self->arr[i];
        s = (unsigned __int64 *)&self->arr[last];
        for (k = 0; k < 14; k++) d[k] = s[k];
      }
    }
  }
}
