typedef struct { char *data; int size; } Buf;

void fn_82CFC568(unsigned char *found, Buf *b, char from, char to, int all)
{
  int i;
  int n = b->size;

  *found = 0;
  if (n - 1 > 0) {
    i = 0;
    do {
      if (b->data[i] == from) {
        b->data[i] = to;
        *found = 1;
        if (all == 0) {
          return;
        }
      }
      i++;
    } while (i < b->size - 1);
  }
}
