typedef struct Stream_82E41878 Stream_82E41878;

typedef struct StreamVtbl_82E41878 {
    void *slots[10];
    int (*Handle)(Stream_82E41878 *self, int a, int b, int c, int d);   /* 0x28 */
} StreamVtbl_82E41878;

struct Stream_82E41878 {
    StreamVtbl_82E41878 *vt;
};

typedef struct Mux_82E41878 {
    char pad0[0x6c];
    Stream_82E41878 *streams[0x80];  /* 0x6c */
} Mux_82E41878;

static __forceinline int IsValidStream(Mux_82E41878 *m, unsigned short id)
{
    return id <= 0x7f && m->streams[id] != 0;
}

int fn_82E41878(Mux_82E41878 *self, unsigned short id, int a, int b, int c, int d)
{
    if (!IsValidStream(self, id))
        return 0xc00d36b3;
    return self->streams[id]->vt->Handle(self->streams[id], a, b, c, d);
}
