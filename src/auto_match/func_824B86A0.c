typedef struct St_824B86A0 {
  char pad0[0x42c];
  unsigned int f42c;
  unsigned int f430;
  unsigned int f434;
  unsigned int f438;
  unsigned int f43c;
  char pad440[0x18];
  unsigned int f458;
  unsigned int f45c;
  char pad460[0x104];
  unsigned int f564;
  unsigned int f568;
  unsigned int f56c;
  unsigned int f570;
  char pad574[0x32c];
  unsigned int f8a0;
  unsigned int f8a4;
  unsigned int f8a8;
  unsigned int f8ac;
  unsigned int f8b0;
  unsigned int f8b4;
  char pad8b8[0x24];
  unsigned int f8dc;
  char pad8e0[0x14];
  unsigned int f8f4;
  unsigned int f8f8;
  unsigned int f8fc;
  unsigned int f900;
  unsigned int f904;
  unsigned int f908;
  char pad90c[0x264];
  unsigned int fb70;
  unsigned int fb74;
  unsigned int fb78;
  unsigned int fb7c;
  unsigned int fb80;
  unsigned int fb84;
} St_824B86A0;

typedef struct Dev_824B86A0 {
  char pad[0x100];
  St_824B86A0 *st;
} Dev_824B86A0;

typedef struct Obj_824B86A0 {
  char pad[0x34];
  int f34;
} Obj_824B86A0;

extern int fn_8225C590(void);
extern Dev_824B86A0 *fn_8225D9B8(int, int);
extern unsigned char fn_828EA610(Dev_824B86A0 *);
extern unsigned char fn_828EA5F8(Dev_824B86A0 *);
extern unsigned char fn_82512508(Dev_824B86A0 *);
extern void fn_824B8A48(Obj_824B86A0 *, Dev_824B86A0 *, int);
extern void fn_824B9228(Obj_824B86A0 *, Dev_824B86A0 *, int, int);
extern void fn_824B9B90(Obj_824B86A0 *, Dev_824B86A0 *);
extern void fn_824B9C60(Obj_824B86A0 *, Dev_824B86A0 *);
extern void fn_824BA378(Obj_824B86A0 *, Dev_824B86A0 *, int, int, int);
extern void fn_824BAF40(Obj_824B86A0 *, Dev_824B86A0 *, int, int, int);
extern void fn_824BB8C8(Obj_824B86A0 *, Dev_824B86A0 *, int, int, int);
extern void fn_824BC388(Obj_824B86A0 *, Dev_824B86A0 *);
extern void RtlEnterCriticalSection(Obj_824B86A0 *);
extern void RtlLeaveCriticalSection(Obj_824B86A0 *);

void fn_824B86A0(Obj_824B86A0 *param_1)
{
  int i;
  Dev_824B86A0 *dev;
  St_824B86A0 *st;

  for (i = 0; i < 4; i++) {
    dev = fn_8225D9B8(fn_8225C590(), i);
    if (dev != 0 && fn_828EA610(dev) == 0 && fn_828EA5F8(dev) != 0 && fn_82512508(dev) != 0) {
      st = dev->st;
      if (st->f564 != 0) {
        fn_824B8A48(param_1, dev, 0);
        return;
      }
      if (st->f570 != 0) {
        fn_824B8A48(param_1, dev, 1);
        return;
      }
      if (st->f568 != 0) {
        fn_824B8A48(param_1, dev, 2);
        return;
      }
      if (st->f56c != 0) {
        fn_824B8A48(param_1, dev, 3);
        return;
      }
      if (st->f42c != 0) {
        fn_824B9228(param_1, dev, 0, 0);
        return;
      }
      if (st->f43c != 0) {
        fn_824B9228(param_1, dev, 1, 0);
        return;
      }
      if (st->f430 != 0) {
        fn_824B9228(param_1, dev, 2, 0);
        return;
      }
      if (st->f438 != 0) {
        fn_824B9228(param_1, dev, 3, 0);
        return;
      }
      if (st->f434 != 0) {
        fn_824B9228(param_1, dev, 4, 1);
        return;
      }
      if (st->f45c != 0) {
        fn_824B9B90(param_1, dev);
        return;
      }
      if (st->f458 != 0) {
        fn_824B9C60(param_1, dev);
        return;
      }
      if (st->f8f4 != 0) {
        fn_824BA378(param_1, dev, 0, 0, 0);
        return;
      }
      if (st->f8f8 != 0) {
        fn_824BA378(param_1, dev, 2, 0, 0);
        return;
      }
      if (st->f908 != 0) {
        fn_824BA378(param_1, dev, 1, 0, 0);
        return;
      }
      if (st->f904 != 0) {
        fn_824BA378(param_1, dev, 3, 0, 0);
        return;
      }
      if (st->f8fc != 0) {
        fn_824BA378(param_1, dev, 0, 1, 0);
        return;
      }
      if (st->f900 != 0) {
        fn_824BA378(param_1, dev, 0, 0, 1);
        return;
      }
      if (st->fb70 != 0) {
        fn_824BAF40(param_1, dev, 0, 0, 0);
        return;
      }
      if (st->fb74 != 0) {
        fn_824BAF40(param_1, dev, 2, 0, 0);
        return;
      }
      if (st->fb84 != 0) {
        fn_824BAF40(param_1, dev, 1, 0, 0);
        return;
      }
      if (st->fb80 != 0) {
        fn_824BAF40(param_1, dev, 3, 0, 0);
        return;
      }
      if (st->fb78 != 0) {
        fn_824BAF40(param_1, dev, 0, 1, 0);
        return;
      }
      if (st->fb7c != 0) {
        fn_824BAF40(param_1, dev, 0, 0, 1);
        return;
      }
      if (st->f8a0 != 0) {
        fn_824BB8C8(param_1, dev, 0, 0, 0);
        return;
      }
      if (st->f8a4 != 0) {
        fn_824BB8C8(param_1, dev, 2, 0, 0);
        return;
      }
      if (st->f8a8 != 0) {
        fn_824BB8C8(param_1, dev, 3, 0, 0);
        return;
      }
      if (st->f8ac != 0) {
        fn_824BB8C8(param_1, dev, 1, 0, 0);
        return;
      }
      if (st->f8b0 != 0) {
        fn_824BB8C8(param_1, dev, 0, 1, 0);
        return;
      }
      if (st->f8b4 != 0) {
        fn_824BB8C8(param_1, dev, 0, 0, 1);
        return;
      }
      if (st->f8dc != 0) {
        fn_824BC388(param_1, dev);
        return;
      }
    }
  }
  RtlEnterCriticalSection(param_1);
  param_1->f34 = 0;
  RtlLeaveCriticalSection(param_1);
}
