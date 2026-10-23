typedef struct Quat { float x, y, z, w; } Quat;
typedef struct Vec4 { float x, y, z, w; } Vec4;
typedef struct Bone {
    Quat rot;
    Vec4 pos;
    Vec4 scale;
} Bone;

typedef struct BoneInfo {
    char pad[0x30];
    unsigned short mirror;
    unsigned short pad32;
} BoneInfo;

typedef struct Skel {
    int pad0[2];
    BoneInfo *info;
    char padc[0x26];
    unsigned short count;
    char pad34[0x50];
    Bone *bones;
} Skel;

void fn_827F6AC8(Skel *s)
{
    unsigned int i;
    Bone *b = s->bones;
    BoneInfo *info = s->info;

    for (i = 0; i < s->count; i++) {
        unsigned int m = info[i].mirror;
        if (m != 0xffff) {
            if (m == 0xeeee) {
                b->rot.y = -b->rot.y;
                b->rot.z = -b->rot.z;
                b->pos.x = -b->pos.x;
            } else {
                float *o = (float *)&s->bones[m];
                float *c = (float *)b;
                int k;
                for (k = 0; k < 12; k++) {
                    float t = c[k];
                    c[k] = o[k];
                    o[k] = t;
                }
            }
        }
        b->rot.y = -b->rot.y;
        b->rot.z = -b->rot.z;
        b->pos.x = -b->pos.x;
        b++;
    }
}
