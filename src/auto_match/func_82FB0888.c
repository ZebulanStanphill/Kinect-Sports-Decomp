typedef struct Playlist_82FB0888 {
    unsigned char pad[0x94];
    unsigned int count;
    unsigned char pad2[0x10];
    int mode;
    unsigned short index;
} Playlist_82FB0888;

extern int fn_82F65350(void);

unsigned short fn_82FB0888(Playlist_82FB0888 *self)
{
    unsigned short next = 0;

    switch (self->mode) {
    case 1:
        if (self->count != 0) {
            next = fn_82F65350() % self->count;
        }
        break;
    case 2:
        if (++self->index >= self->count) {
            self->index = 0;
        }
        return self->index;
    }
    return next;
}
