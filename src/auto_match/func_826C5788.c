typedef struct Desc_826C5788 {
  unsigned int first;   /* 0x00 */
  unsigned int second;  /* 0x04 */
  unsigned short s8;      /* 0x08 */
  unsigned char bA;      /* 0x0a */
  signed char bB;     /* 0x0b */
  unsigned char bC;      /* 0x0c */
  unsigned char bD;      /* 0x0d */
  unsigned char bE;      /* 0x0e */
  unsigned char bF;      /* 0x0f */
  unsigned int w10;     /* 0x10 */
  unsigned int w14;     /* 0x14 */
} Desc_826C5788;

typedef void (*Fn_826C5788)(int *self, Desc_826C5788 *desc);

void fn_826C5788(int *param_1)
{
  Desc_826C5788 d;

  d.second = 0;
  d.s8 = 0;
  d.bA = 0;
  d.bC = 0;
  d.bD = 0;
  d.first = 0x80007;
  d.bB = -1;
  (*(Fn_826C5788 *)(*param_1 + 0x6c))(param_1, &d);
}
