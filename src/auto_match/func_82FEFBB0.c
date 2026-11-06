extern int fn_83018DD8(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int lbl_832642FC;

typedef struct {
  unsigned int key;
  unsigned int slot;
  unsigned int a8, ac, a10, a14, a18, a1c;
} Req_82FEFBB0;

int fn_82FEFBB0(char *owner, Req_82FEFBB0 *req)
{
  int r = 1;
  unsigned int h;

  if (req->key == *(unsigned int *)(owner + 0x128)) {
    h = *(unsigned int *)(owner + 0x12c);
  } else {
    h = *(unsigned int *)(owner + req->slot * 0x10 + 0xec);
  }
  if (h != 0) {
    r = fn_83018DD8(lbl_832642FC, h, req->a8, req->ac, req->a10, req->a1c, req->a14, req->a18,
                    *(unsigned int *)(owner + 0x70), 0);
  }
  return r;
}
