typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;

typedef struct Desc_826C5788 {
  undefined4 first;   /* 0x00 */
  undefined4 second;  /* 0x04 */
  undefined2 s8;      /* 0x08 */
  undefined1 bA;      /* 0x0a */
  signed char bB;     /* 0x0b */
  undefined1 bC;      /* 0x0c */
  undefined1 bD;      /* 0x0d */
  undefined1 bE;      /* 0x0e */
  undefined1 bF;      /* 0x0f */
  undefined4 w10;     /* 0x10 */
  undefined4 w14;     /* 0x14 */
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
