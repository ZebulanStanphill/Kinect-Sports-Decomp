typedef struct Obj_8300E110 {
    void **vt;
} Obj_8300E110;

typedef struct Entry_8300E110 {
    unsigned int key;
    Obj_8300E110 *value;
} Entry_8300E110;

typedef struct Map_8300E110 {
    Entry_8300E110 *begin; /* 0x0 */
    Entry_8300E110 *end;   /* 0x4 */
    int capacity;          /* 0x8 */
} Map_8300E110;

typedef struct Client_8300E110 {
    int id;     /* 0x0 */
    int handle; /* 0x4 */
} Client_8300E110;

typedef struct Self_8300E110 {
    Client_8300E110 *begin; /* 0x0 */
    Client_8300E110 *end;   /* 0x4 */
    int capacity;           /* 0x8 */
    Map_8300E110 maps[1];   /* 0xc */
} Self_8300E110;

extern char lbl_832643B4[];

extern void fn_82FEC2F0(void);
extern Obj_8300E110 **fn_8300E3C0(Map_8300E110 *map, unsigned int key);
extern int fn_83013A98(int type, int group, int arg3, int arg4, Obj_8300E110 **out, int arg6);
extern int fn_83036C30(int handle, unsigned int channel, unsigned int key, int value);
extern void fn_8300DEB0(Self_8300E110 *self, unsigned int channel, int type, int group);
extern void fn_8300D940(Self_8300E110 *self);
extern int fn_82FAF408(Map_8300E110 *map, unsigned int key);

int fn_8300E110(Self_8300E110 *self, unsigned int channel, int type, int group, int arg5)
{
    unsigned int key;
    Map_8300E110 *map;
    Obj_8300E110 **slot;
    Client_8300E110 *client;
    int result;

    fn_82FEC2F0();
    key = (group << 16) | type;
    map = &self->maps[(unsigned char)channel];
    slot = fn_8300E3C0(map, key);
    if (slot == 0) {
        return 2;
    }
    if (*slot != 0) {
        return 1;
    }
    if (fn_83013A98(type, group, (int)lbl_832643B4, channel, slot, arg5) != 1) {
        fn_82FAF408(map, key);
        return 2;
    }
    result = 1;
    for (client = self->begin; client != self->end; client++) {
        result = fn_83036C30(client->handle, channel, key, ((int (*)(Obj_8300E110 *))(*slot)->vt[14])(*slot));
        if (result != 1) {
            fn_8300DEB0(self, channel, type, group);
            break;
        }
    }
    fn_8300D940(self);
    return result;
}
