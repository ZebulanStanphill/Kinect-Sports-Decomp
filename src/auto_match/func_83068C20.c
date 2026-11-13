typedef struct { char pad[8]; int f8; } A_83068C20;
typedef struct { char pad[4]; int f4; } B_83068C20;

int fn_83068C20(const A_83068C20 *a, void *unused, const B_83068C20 *b)
{
    return b->f4 < a->f8;
}
