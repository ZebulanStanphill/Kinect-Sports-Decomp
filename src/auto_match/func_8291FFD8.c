typedef struct { unsigned char b[14]; } Hdr_8291FFD8;
extern void fn_8291C8C0(void *, void *);
extern int fn_8291D9A8(void *, void *, unsigned int);

int fn_8291FFD8(void *param_1, unsigned char *param_2, unsigned int param_3)
{
  Hdr_8291FFD8 hdr;

  if (param_3 >= 0xe) {
    hdr = *(Hdr_8291FFD8 *)param_2;
    fn_8291C8C0(&hdr, &hdr);
    if (*(unsigned short *)&hdr == 0x4d42 && *(unsigned int *)(hdr.b + 2) <= param_3) {
      return fn_8291D9A8(param_1, param_2 + 0xe, param_3 - 0xe);
    }
  }
  return 0x80004005;
}
