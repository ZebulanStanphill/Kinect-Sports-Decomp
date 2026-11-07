typedef struct Pose_82D7C1E8 {
    char data[0x40];
} Pose_82D7C1E8;

typedef struct Anim_82D7C1E8 {
    char pad0[0x40];
    char sampler[1];
} Anim_82D7C1E8;

typedef struct Key_82D7C1E8 {
    int k0;
    int k1;
} Key_82D7C1E8;

typedef struct Track_82D7C1E8 {
    Key_82D7C1E8 key;
    Anim_82D7C1E8 *anim;
} Track_82D7C1E8;

typedef struct Clock_82D7C1E8 {
    char pad0[0x50];
    float time;
} Clock_82D7C1E8;

typedef struct Blend_82D7C1E8 {
    Track_82D7C1E8 *a;
    Track_82D7C1E8 *b;
    int unk8;
    Clock_82D7C1E8 *clock;
    int weight;
} Blend_82D7C1E8;

typedef struct Sample_82D7C1E8 {
    Key_82D7C1E8 key;
    Pose_82D7C1E8 *pose;
    Track_82D7C1E8 *track;
} Sample_82D7C1E8;

typedef struct Work_82D7C1E8 {
    Sample_82D7C1E8 s0;
    Sample_82D7C1E8 s1;
    Pose_82D7C1E8 p0;
    Pose_82D7C1E8 p1;
} Work_82D7C1E8;

typedef struct Out_82D7C1E8 {
    Sample_82D7C1E8 *s0;
    Sample_82D7C1E8 *s1;
    int unk8;
    Clock_82D7C1E8 *clock;
    int weight;
    int unk14[3];
    char result[1];
} Out_82D7C1E8;

extern void fn_83080BC0(void *sampler, float time, Pose_82D7C1E8 *out);
extern void fn_82CE6820(void *result, Pose_82D7C1E8 *p0, Pose_82D7C1E8 *p1);

void fn_82D7C1E8(Blend_82D7C1E8 *blend, Work_82D7C1E8 *work, Out_82D7C1E8 *out)
{
    Sample_82D7C1E8 *s1;

    fn_83080BC0(blend->a->anim->sampler, blend->clock->time, &work->p0);
    fn_83080BC0(blend->b->anim->sampler, blend->clock->time, &work->p1);
    s1 = &work->s1;
    out->s0 = &work->s0;
    out->s1 = s1;
    out->weight = blend->weight;
    out->clock = blend->clock;
    {
    int k1 = blend->a->key.k1;
    int k0 = blend->a->key.k0;
    work->s0.key.k0 = k0;
    work->s0.key.k1 = k1;
    }
    {
    int k1 = blend->b->key.k1;
    int k0 = blend->b->key.k0;
    work->s1.key.k0 = k0;
    work->s1.key.k1 = k1;
    }
    work->s0.track = blend->a;
    work->s0.pose = &work->p0;
    if (s1 != 0) {
        s1->track = blend->b;
        s1->pose = &work->p1;
    }
    fn_82CE6820(out->result, &work->p0, &work->p1);
}
