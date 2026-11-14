extern int fn_824BF8A8(void *, void *);
extern int XMemSet(void *, int, int);

typedef struct Ev_823876D0 {
  const char *name;
  unsigned int type;
} Ev_823876D0;

void fn_823876D0(int *p, void *q)
{
  Ev_823876D0 ev;

  if (p[1] != 0) {
    ev.name = "showvideo";
    ev.type = 7;
    fn_824BF8A8(q, &ev);
  }
  if (p[0] != 0) {
    ev.name = "getready_serving";
    ev.type = 7;
    fn_824BF8A8(q, &ev);
  }
  if (p[4] != 0) {
    ev.name = "serving";
    ev.type = 7;
    fn_824BF8A8(q, &ev);
  }
  if (p[5] != 0) {
    ev.name = "getready_serving";
    ev.type = 6;
    fn_824BF8A8(q, &ev);
    ev.name = "serving";
    ev.type = 8;
    fn_824BF8A8(q, &ev);
  }
  if (p[9] != 0) {
    ev.name = "blocking";
    ev.type = 8;
    fn_824BF8A8(q, &ev);
  }
  if (p[6] != 0 && p[0xb] != 0) {
    ev.name = "blocking";
    ev.type = 9;
    fn_824BF8A8(q, &ev);
    ev.name = "blocking";
    ev.type = 7;
    fn_824BF8A8(q, &ev);
  } else if (p[6] != 0) {
    ev.name = "returning";
    ev.type = 9;
    fn_824BF8A8(q, &ev);
    ev.name = "returning";
    ev.type = 7;
    fn_824BF8A8(q, &ev);
  }
  if (p[7] != 0) {
    ev.name = "returning";
    ev.type = 8;
    fn_824BF8A8(q, &ev);
  }
  if (p[10] != 0) {
    ev.name = "spiking";
    ev.type = 9;
    fn_824BF8A8(q, &ev);
    ev.name = "spiking";
    ev.type = 7;
    fn_824BF8A8(q, &ev);
  }
  if (p[8] != 0) {
    ev.name = "spiking";
    ev.type = 8;
    fn_824BF8A8(q, &ev);
  }
  XMemSet(p, 0, 0x30);
}
