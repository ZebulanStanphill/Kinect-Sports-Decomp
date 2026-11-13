typedef struct Obj_82FF9478 { int pad; char sub[0x49c]; unsigned char flag; } Obj_82FF9478;
typedef struct Hdr_82FF9478 { unsigned int magic; unsigned int size; } Hdr_82FF9478;
extern int fn_82FF8938(void *, void *, unsigned int);
extern int fn_82FF8988(void *, unsigned int, unsigned int *);

int fn_82FF9478(Obj_82FF9478 *o, unsigned int *out)
{
  int rc;
  unsigned int sz;
  unsigned int got;
  Hdr_82FF9478 hdr;

  rc = fn_82FF8938(o->sub, &hdr, 8);
  if (rc == 1 && hdr.magic == 0x424b4844) {
    rc = fn_82FF8938(o->sub, out, 0x10);
    sz = hdr.size - 0x10;
    if (rc == 1) {
      if (sz != 0) {
        got = 0;
        rc = fn_82FF8988(o->sub, sz, &got);
        if (rc != 1) {
          goto done;
        }
        if (got != sz) {
          rc = 0x38;
          goto done;
        }
      }
      if (out[0] != 0x2e) {
        rc = 0x40;
      }
    }
  }
  else {
    rc = 7;
  }
done:
  o->flag = (out[3] != 0);
  return rc;
}
