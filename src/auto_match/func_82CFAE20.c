typedef struct Stream_82CFAE20 Stream_82CFAE20;
typedef struct StreamVt_82CFAE20 {
  void *f00, *f04, *f08, *f0c;
  int (*Write)(Stream_82CFAE20 *s, int buf, int n);
} StreamVt_82CFAE20;
struct Stream_82CFAE20 { StreamVt_82CFAE20 *vt; };
typedef struct Buffer_82CFAE20 {
  int f00, f04;
  Stream_82CFAE20 *stream;
  int data;
  int count;
} Buffer_82CFAE20;

int fn_82CFAE20(Buffer_82CFAE20 *b)
{
  int n;
  int r;
  int total;

  if (b->stream != 0) {
    n = b->count;
    total = 0;
    if (0 < n) {
      do {
        r = b->stream->vt->Write(b->stream, total + b->data, n - total);
        total = r + total;
        if (r == 0) {
          return total;
        }
      } while (total < n);
    }
    b->count = 0;
    return total;
  }
  return 0;
}
