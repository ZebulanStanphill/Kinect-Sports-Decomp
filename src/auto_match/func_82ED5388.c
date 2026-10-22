extern double lbl_8215F998;

typedef struct {
    char pad0[0xaf0];
    int disabled;
    char pad1[0x1a4c - 0xaf4];
    int limit;
    char pad2[0x1a58 - 0x1a50];
    int count;
    int *values;
    int peak;
    char pad3[0x1a68 - 0x1a64];
    int flag;
} Self;

void fn_82ED5388(Self *self, int idx, int v)
{
    int limit = self->limit;
    if (v <= limit / 3) {
        return;
    }
    self->flag = 0;
    if (v <= limit - (limit >> 3)) {
        return;
    }
    self->count++;
    if (v <= limit) {
        return;
    }
    if (self->disabled == 0) {
        self->values[idx] = (int)((float)(v - limit) * lbl_8215F998);
    }
    if (self->peak < v) {
        self->peak = v;
    }
}
