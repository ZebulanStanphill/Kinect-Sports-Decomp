typedef struct Player_82BE31D0 {
  int valid;
  int data[4];
} Player_82BE31D0;

typedef struct Players_82BE31D0 {
  Player_82BE31D0 p[4];
} Players_82BE31D0;

typedef struct Client_82BE31D0 {
  char pad0[0x58];
  char lock[0x38];
  Players_82BE31D0 players;
  char padE0[0x3c];
  unsigned short flags;
} Client_82BE31D0;

extern void (*lbl_831751D4)(Players_82BE31D0 *out);
extern void *lbl_8322B130;
extern char lbl_82196582[];
extern void *memset(void *, int, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);
extern int memcmp(const void *, const void *, unsigned int);
extern int fn_82BE5240(void *s, int code, char *msg);
extern void fn_82BEA1F8(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);
extern int fn_82BE2668(Client_82BE31D0 *c);

int fn_82BE31D0(Client_82BE31D0 *c, unsigned char notify, unsigned char report)
{
  Players_82BE31D0 info;
  int i;

  if (notify && (c->flags & 0x20)) {
    return 0;
  }
  if (lbl_831751D4 == 0) {
    memset(&c->players, 0, sizeof(Players_82BE31D0));
    if (report) {
      return fn_82BE5240(lbl_8322B130, 0x514, lbl_82196582);
    }
    return 0;
  }
  memset(&info, 0, sizeof(info));
  lbl_831751D4(&info);
  for (i = 0; i < 4; i++) {
    if (info.p[i].valid == 0) {
      memset(info.p[i].data, 0, sizeof(info.p[i].data));
    }
  }
  if (memcmp(&c->players, &info, sizeof(Players_82BE31D0)) == 0) {
    return 0;
  }
  fn_82BEA1F8(c->lock, "XMassiveAdClient::UpdatePlayersInternal");
  memcpy(&c->players, &info, sizeof(Players_82BE31D0));
  fn_82BEA230(c->lock, "XMassiveAdClient::UpdatePlayersInternal");
  if (notify) {
    return fn_82BE2668(c);
  }
  return 0;
}
