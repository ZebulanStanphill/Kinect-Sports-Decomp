typedef struct Writer_82AA3310 {
  int (*write)(void *, void *, int);
  void *ctx;
  int err;
} Writer_82AA3310;
typedef struct Blob_82AA3310 {
  unsigned int timestamp;
  int size;
  char data[1];
} Blob_82AA3310;

extern void fn_82AA1C90(Writer_82AA3310 *, const char *, ...);
extern void fn_82AA2720(Writer_82AA3310 *, const char *);

int fn_82AA3310(Blob_82AA3310 *b, Writer_82AA3310 *w)
{
  int hr;
  int sz;
  fn_82AA1C90(w, "// Debugger Hint:");
  fn_82AA2720(w, "\\line");
  fn_82AA1C90(w, "\n");
  fn_82AA1C90(w, "//  Timestamp: %08x", b->timestamp);
  fn_82AA2720(w, "\\line");
  fn_82AA1C90(w, "\n");
  fn_82AA1C90(w, "//  Path: \"");
  sz = b->size;
  hr = w->write(w->ctx, b->data, sz);
  if (hr < 0 && w->err >= 0) {
    w->err = hr;
  }
  fn_82AA1C90(w, "\"");
  fn_82AA2720(w, "\\line");
  fn_82AA1C90(w, "\n");
  return 0;
}
