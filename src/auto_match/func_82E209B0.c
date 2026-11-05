extern void fn_8265CAA0(void *);
extern void fn_82A1E658(int);
extern int fn_82A2A438(void *, void *);
extern void fn_82A2A958(void *);
extern int fn_82A35B80(int, void *);
extern void *fn_82E20100(const char *, int);
extern int stricmp(const char *, const char *);
typedef struct Node_82E209B0 { struct Node_82E209B0 *next; const char *name; } Node_82E209B0;
typedef struct { char pad[0xc]; Node_82E209B0 *head; } Self_82E209B0;
void fn_82E209B0(Self_82E209B0 *self)
{
  struct { char buf1[0x2c]; char buf2[0x114]; } L;
  void *h = fn_82E20100("*.log", 1);
  int f = fn_82A2A438(h, L.buf1);
  if (f != -1) {
    do {
      if (stricmp("LoggingHistory.log", L.buf2) != 0) {
        unsigned char found = 0;
        Node_82E209B0 *n;
        void *p;
        for (n = self->head; n != 0; n = n->next) {
          if (stricmp(n->name, L.buf2) == 0) { found = 1; break; }
        }
        if (!found) {
          p = fn_82E20100(L.buf2, 1);
          if (p != 0) {
            fn_82A2A958(p);
            fn_8265CAA0(p);
          }
        }
      }
    } while (fn_82A35B80(f, L.buf1) != 0);
    fn_82A1E658(f);
  }
  if (h != 0) fn_8265CAA0(h);
}