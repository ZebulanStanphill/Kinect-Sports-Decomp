typedef struct Track_8227E4B0 {
    char pad00[0x14];
    unsigned int id; /* 0x14 */
} Track_8227E4B0;

typedef struct Command_8227E4B0 {
    int type;        /* 0x00 */
    unsigned int id; /* 0x04 */
} Command_8227E4B0;

typedef struct Mixer_8227E4B0 {
    char pad00[0xc];
    Track_8227E4B0 **tracksBegin; /* 0x0c */
    Track_8227E4B0 **tracksEnd;   /* 0x10 */
    char pad14[8];
    Command_8227E4B0 *pendingBegin; /* 0x1c */
    Command_8227E4B0 *pendingEnd;   /* 0x20 */
    char pad24[8];
    unsigned int current; /* 0x2c */
} Mixer_8227E4B0;

extern void fn_8227E950(Mixer_8227E4B0 *self, int a, int b);
extern void fn_8227F7B8(Track_8227E4B0 *track, int enable);
extern void fn_824BF8A8(Command_8227E4B0 **pending, Command_8227E4B0 *command);

void fn_8227E4B0(Mixer_8227E4B0 *self, unsigned int id, int enable, int immediate)
{
    Command_8227E4B0 command;
    Command_8227E4B0 *it;
    Command_8227E4B0 *begin;
    Command_8227E4B0 *end;
    Track_8227E4B0 *track;
    unsigned int count;
    unsigned int i;
    int active;

    if (immediate != 0) {
        count = self->tracksEnd - self->tracksBegin;
        for (i = 0; i < count; i++) {
            track = self->tracksBegin[i];
            if (track->id == id) {
                if (enable == 0 && self->current == i) {
                    fn_8227E950(self, 0, -1);
                }
                fn_8227F7B8(track, enable);
                return;
            }
        }
        return;
    }
    active = 0;
    begin = self->pendingBegin;
    end = self->pendingEnd;
    for (it = begin; it != end; it++) {
        if (it->type == 5) {
            if (it->id == id) {
                active = 1;
            }
        } else if (it->type == 4) {
            active &= it->id != id ? -1 : 0;
        }
    }
    for (it = begin; it != end; it++) {
        if (it->id == id && (it->type == 5 || it->type == 4)) {
            if (enable != 0) {
                if (active != 0) {
                    break;
                }
            } else if (active == 0) {
                break;
            }
            return;
        }
    }
    command.type = (enable == 0) + 4;
    command.id = id;
    fn_824BF8A8(&self->pendingBegin, &command);
}
