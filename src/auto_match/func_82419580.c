typedef struct Stats_82419580 {
  char pad[0x7d4];
  int released;
  int held;
} Stats_82419580;

typedef struct Ball_82419580 {
  char pad[0x28];
  Stats_82419580 *stats;
  int active;
} Ball_82419580;

typedef struct Lane_82419580 {
  char pad0[0x34];
  Ball_82419580 *ball;
  char pad38[0x110 - 0x38];
  char ballPool[0x188 - 0x110];
  char pinsetter[4];
} Lane_82419580;

extern void fn_82419810(Lane_82419580 *lane);
extern void fn_82422090(void *pinsetter, int unk);
extern void fn_82573D30(Stats_82419580 *stats);
extern void fn_82416D20(void *pool, Ball_82419580 *ball);

void fn_82419580(Lane_82419580 *lane, const unsigned char *p)
{
  const unsigned char *q;
  unsigned char c;
  unsigned char b;
  q = p;
  c = *p;
  b = 0x70;
  if (c == 0x70) {
    int d = (int)"position_players" - (int)p;
    do {
      q++;
      if (c == 0) goto match1;
      b = q[d];
      c = *q;
    } while (c == b);
  }
  if (c - b == 0) {
match1:
    fn_82419810(lane);
  }
  q = p;
  b = 0x70;
  c = *p;
  if (c == 0x70) {
    int d = (int)"pinsetter_activate" - (int)p;
    do {
      q++;
      if (c == 0) goto match2;
      b = q[d];
      c = *q;
    } while (c == b);
  }
  if (c - b == 0) {
match2:
    fn_82422090(lane->pinsetter, 0);
    return;
  }
  q = p;
  c = *p;
  b = 0x62;
  if (c == 0x62) {
    int d = (int)"ball_activate" - (int)p;
    do {
      q++;
      if (c == 0) goto match3;
      b = q[d];
      c = *q;
    } while (c == b);
  }
  if (c - b == 0) {
    Ball_82419580 *ball;
match3:
    ball = lane->ball;
    if (ball != 0) {
      Stats_82419580 *stats = ball->stats;
      ball->active = 0;
      stats->released++;
      stats->held--;
      fn_82573D30(ball->stats);
      fn_82416D20(lane->ballPool, lane->ball);
      lane->ball = 0;
    }
  }
}
