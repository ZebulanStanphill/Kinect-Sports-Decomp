struct Target_8238CEB8 {
    int x; /* 0x00 */
    int y; /* 0x04 */
    int z; /* 0x08 */
};

struct Player_8238CEB8 {
    char pad0[0x2b0];
    int eliminated; /* 0x2b0 */
    char pad2B4[0x2e0 - 0x2b4];
    Target_8238CEB8 target; /* 0x2e0 */
    char pad2EC[0x2fc - 0x2ec];
    float spawnTimer; /* 0x2fc */
    int spawned;      /* 0x300 */
    char pad304[0x344 - 0x304];
    float charge; /* 0x344 */
};

struct Roster_8238CEB8 {
    void **teams; /* 0x00 */
    char pad4[0xc];
    int current; /* 0x10 */
};

struct Team_8238CEB8 {
    char pad0[8];
    unsigned int count; /* 0x08 */
};

struct RosterHolder_8238CEB8 {
    char pad0[4];
    Roster_8238CEB8 *roster; /* 0x04 */
};

struct Session_8238CEB8 {
    RosterHolder_8238CEB8 *holder; /* 0x00 */
};

struct Mode_8238CEB8 {
    char pad0[0x40];
    unsigned int state; /* 0x40 */
};

struct SoundBank_8238CEB8 {
    void *listener; /* 0x00 */
};

struct Game_8238CEB8 {
    char pad0[8];
    Session_8238CEB8 *session; /* 0x08 */
    char padC[0xa0 - 0xc];
    Mode_8238CEB8 *mode; /* 0xa0 */
    void *announcer;     /* 0xa4 */
    char padA8[0x300 - 0xa8];
    int levelSound; /* 0x300 */
    char pad304[0x9b8 - 0x304];
    SoundBank_8238CEB8 *sounds; /* 0x9b8 */
    char pad9BC[0xc3c - 0x9bc];
    unsigned int music; /* 0xc3c */
    char padC40[8];
    int musicStarted; /* 0xc48 */
};

class Spawner_8238CEB8
{
  public:
    virtual void Slot00();
    virtual void Slot04();
    virtual void Slot08();
    virtual void Slot0C();
    virtual void Slot10();
    virtual void Slot14();
    virtual void Slot18();
    virtual void Slot1C();
    virtual void Slot20();
    virtual void Slot24();
    virtual void Slot28();
    virtual void Slot2C();
    virtual void Slot30();
    virtual void Slot34();
    virtual void Slot38();
    virtual void PickTarget(int *x, int *y, int *z); /* 0x3c */
    virtual void Slot40();
    virtual unsigned int NextLevel(unsigned int level, unsigned int players); /* 0x44 */
    virtual void Slot48();
    virtual float GetLifeStep(); /* 0x4c */
    virtual float GetMinLife();  /* 0x50 */
    virtual void Slot54();
    virtual float GetIntervalStep(); /* 0x58 */
    virtual float GetMinInterval();  /* 0x5c */
    virtual float GetIntervalBase(); /* 0x60 */
    virtual void Slot64();
    virtual float GetWaveStep(); /* 0x68 */
    virtual void Slot6C();
    virtual float GetCountdown();  /* 0x70 */
    virtual float GetChargeStep(); /* 0x74 */
    virtual void Slot78();
    virtual void Slot7C();
    virtual void Slot80();
    virtual void Slot84();
    virtual void Slot88();
    virtual int NeedsReady();             /* 0x8c */
    virtual unsigned int GetWaveLength(); /* 0x90 */
    virtual int AlwaysAnnounce();         /* 0x94 */
    virtual void Slot98();
    virtual int UsesCharge(); /* 0x9c */

    char pad4[4];
    Game_8238CEB8 *game; /* 0x08 */
    char padC[0xc];
    float pause; /* 0x18 */
    char pad1C[4];
    float spawnTimer;   /* 0x20 */
    unsigned int level; /* 0x24 */
    int active;         /* 0x28 */
    float waveTimer;    /* 0x2c */
    float interval;     /* 0x30 */
    float waveTime;     /* 0x34 */
    float life;         /* 0x38 */
    char pad3C[4];
    unsigned int waves; /* 0x40 */
    char pad44[4];
    int musicRequested; /* 0x48 */
};

extern "C" {
extern char lbl_83296BC0[];
extern char lbl_83296BD0[];

extern double fn_82F655D8(double base, double exponent);
extern Player_8238CEB8 *fn_822ABA88(void *team, unsigned int index);
extern int fn_822CF008(Player_8238CEB8 *player, float time);
extern void fn_8238D3A0(Spawner_8238CEB8 *self, unsigned int level);
extern void *fn_82535298(void **handle, void *listener, void *position, void *velocity);
extern void fn_82536288(void **handle);
extern const char *fn_8236FB68(int id);
extern int fn_82508078(void *announcer, const char *key, int argument);
extern void fn_82536070(const char *group, const char *value);
extern unsigned char fn_82536590(unsigned int *sound, int flags);
extern const float lbl_821CA45C[2];
}

static __forceinline void PlayOneShot(SoundBank_8238CEB8 *bank, int id)
{
    void *sound = (void *)id;

    sound = fn_82535298(&sound, bank->listener, lbl_83296BC0, lbl_83296BD0);
    fn_82536288(&sound);
}

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

extern "C" void fn_8238CEB8(Spawner_8238CEB8 *self, float dt)
{
    Game_8238CEB8 *game;
    Roster_8238CEB8 *roster;
    unsigned int players;
    unsigned int i;

    if (self->GetCountdown() > 0.0f && self->pause <= 0.0f) {
        return;
    }
    game = self->game;
    roster = game->session->holder->roster;
    players = ((Team_8238CEB8 *)roster->teams[roster->current])->count;
    self->waveTimer -= dt;
    if (self->waveTimer <= 0.0f) {
        unsigned int level = self->level;
        unsigned int next = self->NextLevel(level, players);
        int waveDone;

        fn_8238D3A0(self, next);
        self->waves++;
        waveDone = 0;
        if (self->waves >= self->GetWaveLength()) {
            float minimum;

            minimum = self->GetMinInterval();
            self->interval = Max(self->interval - self->GetIntervalStep(), minimum);
            minimum = self->GetMinLife();
            self->life = Max(self->life - self->GetLifeStep(), minimum);
            self->waveTime = self->GetWaveStep() + self->waveTime;
            self->waves = 0;
            if (self->UsesCharge() != 0) {
                for (i = 0; i < players; i++) {
                    Player_8238CEB8 *player = fn_822ABA88(roster->teams[roster->current], i);
                    float charge = player->charge;

                    charge = self->GetChargeStep() + charge;
                    /* 1.0f is re-read from its home on every pass */
                    if (charge > lbl_821CA45C[1]) {
                        charge = 0.0f;
                    }
                    player->charge = charge;
                }
            }
            waveDone = 1;
        }
        if (self->AlwaysAnnounce() != 0 || waveDone != 0) {
            if (level != next) {
                const char *line;

                PlayOneShot(self->game->sounds, self->game->levelSound);
                line = fn_8236FB68(0xd);
                if (line != 0) {
                    fn_82508078(game->announcer, line, 0);
                }
            }
        }
        self->waveTimer = self->waveTime;
    }
    self->spawnTimer -= dt;
    if (self->spawnTimer <= 0.0f) {
        int active;
        int limit;
        float count;
        float power;

        if (self->NeedsReady() != 0) {
            for (i = 0; i < players; i++) {
                Player_8238CEB8 *player = fn_822ABA88(roster->teams[roster->current], i);

                if (player->eliminated == 0 && fn_822CF008(player, 0.05f) == 0) {
                    goto spawn;
                }
            }
        }
        active = self->active + 1;
        limit = self->level;
        if (active < limit) {
            limit = active;
        }
        self->active = limit;
        count = (float)(unsigned int)self->active;
        power = (float)fn_82F655D8(self->GetIntervalBase(), count);
        self->spawnTimer = self->interval * power;
    }
spawn:
    for (i = 0; i < (unsigned int)self->active; i++) {
        Player_8238CEB8 *player = fn_822ABA88(roster->teams[roster->current], i);
        int x;
        int y;
        int z;
        Game_8238CEB8 *owner;

        if (player->spawnTimer > 0.0f) {
            continue;
        }
        player->spawnTimer = self->life;
        if (fn_822CF008(player, 0.05f) == 0) {
            continue;
        }
        if (player->spawned != 0) {
            continue;
        }
        self->PickTarget(&x, &y, &z);
        {
            Target_8238CEB8 target;

            target.x = x;
            target.y = y;
            target.z = z;
            player->target = target;
        }
        if (self->musicRequested != 0) {
            continue;
        }
        owner = self->game;
        if (!((int)owner->mode != 0 && owner->mode->state == 1)) {
            if (owner->musicStarted == 0) {
                fn_82536070("music_minigame", "mini01");
                fn_82536590(&owner->music, 0);
                owner->musicStarted = 1;
            }
        }
        self->musicRequested = 1;
    }
}
