/* Shuts the game session down: broadcasts message 0x53, clears the global
 * hook state, notifies when nothing is pending, then stops the subsystems
 * and every channel of the active mixer. */
typedef struct Message_82596850 {
    int type;   /* 0x00 */
    int size;   /* 0x04 */
    void *data; /* 0x08 */
} Message_82596850;

typedef struct Hooks_82596850 {
    char pad00[0x28];
    int state;   /* 0x28 */
    int pending; /* 0x2C */
    char pad30[0xC];
} Hooks_82596850;

typedef struct Channel_82596850 {
    void *voice; /* 0x00 */
    char pad04[0xC];
    struct Channel_82596850 *next; /* 0x10 */
} Channel_82596850;

typedef struct Bank_82596850 {
    char pad00[0xE0];
    Channel_82596850 *channels; /* 0xE0 */
} Bank_82596850;

typedef struct Mixer_82596850 {
    char pad00[0x8];
    unsigned char active; /* 0x08 */
    char pad09[0x77];
    Bank_82596850 *bank; /* 0x80 */
} Mixer_82596850;

typedef struct Queue_82596850 {
    char pad00[0x68];
    void *head; /* 0x68 */
} Queue_82596850;

typedef struct Game_82596850 {
    char pad000[0x78];
    char dispatcher[0x40]; /* 0x078 */
    Queue_82596850 *queue; /* 0x0B8 */
    char pad0BC[0x7F0];
    void *pendingRequest; /* 0x8AC */
    char pad8B0[0x8];
    unsigned int saveSlot; /* 0x8B8 */
    int saveFlags;         /* 0x8BC */
    char pad8C0[0x74];
    void *streamer; /* 0x934 */
    char pad938[0x4];
    Mixer_82596850 *mixer; /* 0x93C */
} Game_82596850;

extern Hooks_82596850 lbl_8327F644;

extern void *XMemSet(void *dest, int value, unsigned int count);
extern void fn_8257CB40(void *dispatcher, Message_82596850 *message, int all);
extern void fn_8257C8F0(void *target, Message_82596850 *message);
extern void fn_825269D0(int event, void *value);
extern void fn_825B0068(void **queue);
extern void fn_82544F40(void);
extern void fn_8256A938(void);
extern void fn_8256AA98(void);
extern void fn_82549660(unsigned int slot, int flags);
extern void fn_825D95F0(void *voice);
extern void fn_825F7C60(void *streamer);

void fn_82596850(Game_82596850 *self)
{
    Message_82596850 message;
    void **head;
    Mixer_82596850 *mixer;
    Channel_82596850 *channel;

    XMemSet(&message.data, 0, 4);
    message.type = 0x53;
    message.size = 0xc;
    message.data = self;
    fn_8257CB40(self->dispatcher, &message, 1);
    fn_8257C8F0(self, &message);
    lbl_8327F644.state = 0;
    lbl_8327F644.pending = 0;
    if (self->pendingRequest == 0) {
        fn_825269D0(0x54, self);
    }
    head = &self->queue->head;
    if (*head != 0) {
        fn_825B0068(head);
    }
    fn_82544F40();
    fn_8256A938();
    fn_8256AA98();
    fn_82549660(self->saveSlot, self->saveFlags);
    mixer = self->mixer;
    if (mixer != 0 && mixer->active) {
        if (mixer->bank != 0) {
            for (channel = mixer->bank->channels; channel != 0; channel = channel->next) {
                fn_825D95F0(channel->voice);
            }
        }
        mixer->active = 0;
    }
    if (self->streamer != 0) {
        fn_825F7C60(self->streamer);
    }
}
