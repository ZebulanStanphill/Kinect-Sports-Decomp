typedef struct Owner_822F11A0 {
    char pad0[0x110];
    int handle;               /* 0x110 */
    char pad1[0x168 - 0x114];
    unsigned int source;      /* 0x168 */
    int enabled;              /* 0x16c */
} Owner_822F11A0;

typedef struct Obj_822F11A0 {
    char pad0[0xc];
    Owner_822F11A0 *owner;    /* 0x0c */
} Obj_822F11A0;

extern int fn_822AF138(int handle, int state);
extern int fn_822F1290(Obj_822F11A0 *self, float dt);
extern int fn_822F1550(Obj_822F11A0 *self);
extern unsigned char fn_8288B760(unsigned int source);

void fn_822F11A0(Obj_822F11A0 *self, float dt)
{
    int enabled;
    int done;
    unsigned int source = self->owner->source;

    if (source != 0) {
        enabled = fn_8288B760(source);
    } else {
        enabled = self->owner->enabled;
    }
    if (enabled != 0) {
        done = fn_822F1290(self, dt);
    } else {
        done = fn_822F1550(self);
    }
    if (done != 0) {
        fn_822AF138(self->owner->handle, 4);
    }
}
