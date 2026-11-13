typedef struct { char pad0[0x90]; int x90; } Cfg_822B6FF0;
typedef struct { char pad0[0x8c0]; Cfg_822B6FF0 *cfg; } Game_822B6FF0;
typedef struct { unsigned int id; char pad4[0x3c]; } Slot_822B6FF0;
typedef struct { Game_822B6FF0 *game; char pad4[0xc]; Slot_822B6FF0 slots[2]; } Data_822B6FF0;
typedef struct { char pad0[0x11c]; Data_822B6FF0 *data; } Obj_822B6FF0;
extern int fn_825279F8(unsigned int id);
unsigned char fn_822B6FF0(Obj_822B6FF0 *self, unsigned int id)
{
    Data_822B6FF0 *d = self->data;
    unsigned int i;
    if (d->game->cfg->x90 != 0) {
        for (i = 0; i < 2; i++) {
            if (d->slots[i].id == id) return 1;
        }
        return 0;
    }
    return fn_825279F8(id) != 0;
}
