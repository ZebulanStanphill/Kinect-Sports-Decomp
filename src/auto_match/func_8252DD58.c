typedef struct Data_8252DD58 {
  unsigned char bytes[0x68];
} Data_8252DD58;

extern void *memset(void *, int, unsigned int);
extern Data_8252DD58 lbl_832967B8[2];
extern void *lbl_8327F844;
extern void fn_8252E168(void *p);

void fn_8252DD58(const Data_8252DD58 *src)
{
  if (src != 0) {
    memset(&lbl_832967B8[0], 0, sizeof(Data_8252DD58));
    lbl_832967B8[0] = *src;
    memset(&lbl_832967B8[1], 0, sizeof(Data_8252DD58));
    lbl_832967B8[1] = *src;
    if (lbl_8327F844 != 0) {
      fn_8252E168(lbl_8327F844);
    }
  }
}
