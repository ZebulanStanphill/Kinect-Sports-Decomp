typedef struct Buf_8278FE08 { unsigned int data; unsigned int size; } Buf_8278FE08;
typedef struct Obj_8278FE08 { char pad[0x18]; Buf_8278FE08 *buf; unsigned int idx; } Obj_8278FE08;

int fn_8278FE08(Obj_8278FE08 *o, int *out)
{
  Buf_8278FE08 *b = o->buf;
  unsigned char done;
  if (b == 0 || !(o->idx < b->size)) {
    done = 1;
  } else {
    done = 0;
  }
  if (!done) {
    if (out != 0) {
      *out = b->size - o->idx;
    }
    return o->buf->data + o->idx * 2;
  }
  *out = 0;
  return 0;
}
