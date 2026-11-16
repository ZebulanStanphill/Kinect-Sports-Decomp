typedef struct Player_824C3E18 Player_824C3E18;

typedef struct VTable_824C3E18 {
    void *unused[2];
    char *(*getData)(Player_824C3E18 *);
} VTable_824C3E18;

struct Player_824C3E18 {
    VTable_824C3E18 *vtable;
};

typedef struct Device_824C3E18 {
    char unknown[0x204];
    unsigned int count;
} Device_824C3E18;

typedef struct Session_824C3E18 {
    char unknown[8];
    Device_824C3E18 *device;
    char unknownc[0x38 - 0xc];
    Player_824C3E18 *player;
    char unknown3c[0x4c - 0x3c];
    int selected;
} Session_824C3E18;

typedef struct Data_824C3E18 {
    char unknown[0x40c];
    int selected;
    char tail[0x18];
    Data_824C3E18(void *);
} Data_824C3E18;

typedef struct State_824C3E18 {
    char unknown[0x44];
    int state;
    int session;
    char unknown4c[0x5c - 0x4c];
    Data_824C3E18 *data;
} State_824C3E18;

typedef struct Owner_824C3E18 {
    int unknown;
    State_824C3E18 *state;
} Owner_824C3E18;

extern "C" void fn_8265CA20(void *);
extern "C" unsigned char fn_828AD740(Device_824C3E18 *);
extern "C" void fn_824C04E0(State_824C3E18 *, int);
extern "C" char *fn_8225F160(void);

extern "C" void fn_824C3E18(Owner_824C3E18 *owner)
{
    State_824C3E18 *self = owner->state;
    Session_824C3E18 *session = (Session_824C3E18 *)self->session;
    unsigned char active = self->session != 0 && session->device->count > 1;
    if (!active) {
        self->state = 6;
        fn_824C04E0(self, 1);
    } else {
        if (!fn_828AD740(session->device)) {
            Player_824C3E18 *player = ((Session_824C3E18 *)self->session)->player;
            if (player) {
                Data_824C3E18 *data = new Data_824C3E18(player->vtable->getData(player) + 0xf0);
                if (data != self->data) {
                    if (self->data) {
                        fn_8265CA20(self->data);
                    }
                    self->data = data;
                }
            }
        }
        if (self->data) {
            ((Session_824C3E18 *)self->session)->selected = self->data->selected;
        }
        {
            char *manager = fn_8225F160();
            if (manager) {
                *(int *)(manager + 0x64) = 2;
            }
        }
    }
}
