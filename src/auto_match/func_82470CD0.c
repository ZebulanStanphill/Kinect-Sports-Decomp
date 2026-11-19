typedef struct Reference_82470CD0 {
    void *object;     /* 0x00 */
    void *references; /* 0x04 */
} Reference_82470CD0;

typedef struct Video_82470CD0 {
    char pad000[0x160];
    unsigned int area; /* 0x160 */
    char pad164[0x24];
    int loaded; /* 0x188 */
    char pad18C[0xc];
    int shown; /* 0x198 */
} Video_82470CD0;

typedef struct Player_82470CD0 {
    char pad000[0xe0];
    int ready;  /* 0x0e0 */
    int stream; /* 0x0e4 */
    char pad0E8[0x464];
    int fading; /* 0x54c */
} Player_82470CD0;

typedef struct Screen_82470CD0 {
    char pad000[0x428];
    Video_82470CD0 *video; /* 0x428 */
    char pad42C[0xc];
    Player_82470CD0 *player; /* 0x438 */
    char pad43C[0x244];
    int playing; /* 0x680 */
} Screen_82470CD0;

extern int *fn_8225F160(void);
extern void fn_8228D9E8(Video_82470CD0 *video, float progress);
extern void fn_8228DAA0(Video_82470CD0 *video, int stream, int start);
extern void fn_8228DDD8(Video_82470CD0 *video);
extern void fn_824BDAC8(Player_82470CD0 *player, int a, int b, int c);
extern void fn_824BDE68(Player_82470CD0 *player, int paused);
extern float fn_824BE290(Player_82470CD0 *player);
extern unsigned int fn_824BE350(Player_82470CD0 *player);
extern void fn_824BEEE8(Player_82470CD0 *player);
extern Reference_82470CD0 *fn_82279C58(Reference_82470CD0 *out, void *owner);
extern void fn_826728E8(void *object, const char *name, unsigned int value);
extern void fn_822315A0(void *references);

static __forceinline void Play(Screen_82470CD0 *self, Video_82470CD0 *video, Player_82470CD0 *player)
{
    fn_8228DAA0(video, player->stream, 1);
    fn_824BDE68(self->player, 0);
    fn_824BDAC8(self->player, 0, 0, 1);
}

void fn_82470CD0(Screen_82470CD0 *self)
{
    Video_82470CD0 *video;
    Player_82470CD0 *player;
    unsigned int area;
    Reference_82470CD0 reference;
    Reference_82470CD0 *found;

    video = self->video;
    if ((int)video != 0) {
        if (self->playing != 0) {
            if (video->loaded != 0) {
                player = self->player;
                if (player->ready != 0) {
                    Play(self, video, player);
                    self->playing = 0;
                } else {
                    if (player->fading != 0 && video->shown == 0) {
                        fn_8228DDD8(video);
                    }
                    video = self->video;
                    fn_8228D9E8(video, fn_824BE290(self->player));
                }
            } else {
                if (self->player->ready == 0) {
                    fn_824BEEE8(self->player);
                    Play(self, self->video, self->player);
                }
                self->playing = 0;
            }
        } else if (video->loaded != 0) {
            fn_824BDE68(self->player, 1);
            fn_824BDAC8(self->player, 1, 0, 1);
            self->playing = 1;
        }
    }
    if (self->player != 0 && fn_8225F160()[0xb] != 0) {
        area = fn_824BE350(self->player);
        video = self->video;
        if ((int)video != 0) {
            video->area = area;
            if (area != 0) {
                found = fn_82279C58(&reference, video);
                fn_826728E8(found->object, "videoArea", video->area);
                if (reference.references != 0) {
                    fn_822315A0(reference.references);
                }
            }
        }
    }
}
