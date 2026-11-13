typedef struct Obj_82677980 {
    char pad00[0x10];
    unsigned char active;       /* 0x10 */
    char pad11[0xd8 - 0x11];
    void *device;               /* 0xd8 */
    char pad_dc;
    unsigned char enabled;      /* 0xdd */
    char pad_de[2];
    int state;                  /* 0xe0 */
} Obj_82677980;

void fn_82638288(void *device, int value);

void fn_82677980(Obj_82677980 *self)
{
    if (self->active == 0) {
        return;
    }
    if (self->enabled == 0) {
        return;
    }
    self->state = 0;
    fn_82638288(self->device, 0);
}
