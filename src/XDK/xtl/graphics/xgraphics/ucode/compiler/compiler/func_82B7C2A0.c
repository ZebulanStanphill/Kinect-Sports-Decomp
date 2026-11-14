typedef struct Emitter_82B7C2A0 Emitter_82B7C2A0;

typedef struct EmitterVtbl_82B7C2A0 {
    void *slot0;
    void *slot1;
    void *slot2;
    void (*emit)(Emitter_82B7C2A0 *self, int negate, int kind, int index, int a, int b);  /* 0xc */
} EmitterVtbl_82B7C2A0;

struct Emitter_82B7C2A0 {
    EmitterVtbl_82B7C2A0 *vt;
};

void fn_82B7C2A0(Emitter_82B7C2A0 *self, int index, unsigned char flag, int a, int b)
{
    int negate = flag == 0;

    if (index == -1) {
        self->vt->emit(self, negate, 3, 1, a, b);
        return;
    }
    self->vt->emit(self, negate, 1, index, a, b);
}
