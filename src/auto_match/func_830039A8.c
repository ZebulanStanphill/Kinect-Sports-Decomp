extern void *memcpy(void *, const void *, unsigned int);
extern unsigned fn_82FA5060(unsigned, int);
extern int fn_83002E80();
extern unsigned fn_83027128(unsigned);
extern unsigned int lbl_831BC768;


typedef struct Data_830039A8 { int pad; char body[0x4c]; } Data_830039A8;
typedef struct Node_830039A8 { char pad0[0x10]; struct Node_830039A8 *next; char pad1[0x29]; unsigned char flags; char pad2[0x26]; Data_830039A8 *data; } Node_830039A8;
void fn_830039A8(Node_830039A8 *arg, Data_830039A8 **out, int p3, unsigned char p4, int p5)
{
  Node_830039A8 *node=arg;
  Node_830039A8 *cur;
  unsigned r, t;
  if (node != 0) {
    do {
      cur = node;
      if (cur->data != 0) {
        if (*out == 0) {
          t = fn_82FA5060(lbl_831BC768, 0x50);
          if (t != 0) r = fn_83027128(t); else r = 0;
          *out = (Data_830039A8 *)r;
          if (r == 0) goto next;
        }
        if (p4 == 0) { Data_830039A8 *d = cur->data; memcpy((*out)->body, d->body, 0x4c); }
      }
next: node = cur->next;
    } while (cur->data == 0 && (cur->flags & 1) == 0 && node != 0);
    fn_83002E80(cur, p3, p5);
  }
}
