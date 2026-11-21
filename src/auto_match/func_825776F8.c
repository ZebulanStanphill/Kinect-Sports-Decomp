typedef struct Command_825776F8 {
    int scope;   /* 0x00 */
    int index;   /* 0x04 */
    int looping; /* 0x08 */
    int paused;  /* 0x0c */
    float start; /* 0x10 */
    float end;   /* 0x14 */
    int restart; /* 0x18 */
} Command_825776F8;

typedef struct Config_825776F8 {
    char pad0[0x134];
    int localDefault; /* 0x134 */
    char pad138[0x14c - 0x138];
    int globalDefault; /* 0x14c */
} Config_825776F8;

typedef struct Channel_825776F8 {
    int stopped : 1; /* 0x00 */
    int paused : 1;
    unsigned int other : 30;
    float start;    /* 0x04 */
    float position; /* 0x08 */
    float end;      /* 0x0c */
} Channel_825776F8;

typedef struct Track_825776F8 {
    void *vt;                     /* 0x00 */
    int handles[2];               /* 0x04 */
    Channel_825776F8 channels[2]; /* 0x0c */
    char pad2c[0x54 - 0x2c];
    Config_825776F8 *config; /* 0x54 */
} Track_825776F8;

typedef struct Player_825776F8 {
    int pad0;
    int pad4;
    int trackCount;             /* 0x08 */
    Track_825776F8 *tracks[11]; /* 0x0c */
    char queue[4];              /* 0x38 */
} Player_825776F8;

extern void *fn_825A2410(void *queue);
extern void XMemCpy(void *dest, const void *src, unsigned int size);

void fn_825776F8(Player_825776F8 *self, Command_825776F8 *cmd)
{
    int index;
    int global;
    unsigned int flags;
    float start;
    float end;
    Track_825776F8 *track;
    Channel_825776F8 *channel;

    if (self->trackCount == 0) {
        void *slot = fn_825A2410(self->queue);

        XMemCpy(slot, cmd, sizeof(Command_825776F8));
        return;
    }
    if (cmd->scope != 0) {
        index = 0;
    } else {
        index = cmd->index;
        if (index < 0) {
            return;
        }
    }
    if (index >= self->trackCount) {
        return;
    }
    global = cmd->scope == 0;
    flags = 0;
    if (cmd->looping == 0) {
        flags = 1;
    }
    if (cmd->restart != 0) {
        flags |= 4;
    }
    if (cmd->paused != 0) {
        flags |= 2;
    }
    end = cmd->end;
    start = cmd->start;
    track = self->tracks[index];
    channel = &track->channels[global];
    channel->start = start;
    channel->end = end;
    channel->stopped = (flags & 1) == 0;
    channel->paused = (flags & 2) != 0;
    if (flags & 4) {
        channel->position = start;
        channel->stopped = 0;
        if (channel->paused) {
            track->handles[global] = 0;
        } else if (global == 0) {
            track->handles[global] = track->config->localDefault;
        } else {
            track->handles[global] = track->config->globalDefault;
        }
    }
}
